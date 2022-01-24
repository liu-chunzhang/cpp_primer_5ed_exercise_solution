#include "date.h"

const string date::month_name[12] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December" } ;

const string date::month_abbr[12] = { "Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun" , "Jul" , "Aug" , "Sept" , "Oct" , "Nov" , "Dec" } ;

const unsigned short date::days[12] = { 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 } ;                        // 二月有闰月的可能，所以暂定为29

inline int get_month( string &ds , unsigned &end_of_month ){
    unsigned i , j ;
    for( i = 0 ; i < 12 ; ++i ){                                                          // 变量i用来判断月份，j用来表示变量i所在月份的字符
        for( j = 0 ; j < date::month_abbr[i].size() ; ++j )                                     // 下标，先检查每个字符是否与月份简写相同
            if( ds[j] != date::month_abbr[i][j] )                                               // 不是此月简写
                break;
        if( j == date::month_abbr[i].size() )                                                   // 与简写匹配
            break;
    }
    if( i == 12 )                                                                          // 与所有月份名都不相同，则月份名不合法
        throw invalid_argument( "不是合法月份名" ) ;
    if( ds[j] == ' ' ){                                                                    // 遇到空白符，说明遇到的是月份缩写
        end_of_month = j + 1 ;                                                             // end_of_month用于判断之后日期的合法性，下同
        return i + 1 ;                                                                    // 返回i + 1的月份值
    }
    for( ; j < date::month_name[i].size() ; ++j )                                               // 如果长月份名输入不合法（有错），就会触发后面的
        if( ds[j] != date::month_name[i][j] )                                                   // 抛出错误
            break;
    if( j == date::month_name[i].size() && ds[j] == ' ' ){
        end_of_month = j + 1 ;
        return i + 1 ;
    }
    throw invalid_argument( "不是合法月份名" ) ;
}

inline int get_day( string &ds , int month , unsigned &p ){                            // 变量p储存的值为月份单词的长度+1，+1以跳过空格
    size_t q ;                                                                           // q用来储存第一个非数字字符的下标，实现其意义的关
    int day = stoi( ds.substr( p ) , &q ) ;                                              // 键在于stoi函数的作用；从p开始的部分转换成日期值
    if( day < 1 || day > date::days[month] )
        throw invalid_argument( "不是合法日期值" ) ;
    p += q ;                                                                              // 移动到日期以后
    return day ;
}

inline int get_year( string &ds , unsigned &p ){
    size_t q ;
    int year = stoi( ds.substr( p ) , &q ) ;
    if( p + q < ds.size() )
        throw invalid_argument( "非法结尾内容" ) ;
    return year;
}

date::date( string &ds ){
    size_t p ;
    size_t q ;
    if( ( p = ds.find_first_of( "0123456789" ) ) == string::npos )
        throw invalid_argument( "没有数字，非法日期" ) ;
    if( p > 0 ){                                                                          // 这一段用来处理January 1,1990、Jan 1 1900型日期
        month = get_month( ds , p ) ;                                                     // 变量p储存了相应月份的合法日期
        day = get_day( ds , month , p ) ;
        if( ds[p] != ' ' && ds[p] != ',' )
            throw invalid_argument( "非法间隔符1" ) ;
        ++p ;
        year = get_year( ds , p ) ;
    }
    else {                                                                                // 这一段用来处理3/14/2020型日期
        month = stoi( ds , &q ) ;                                                         // 变量q用来储存返回的第一个非数值字符的下标
        p = q ;
        if( month < 1 || month > 12 )
            throw invalid_argument( "不是合法月份值" ) ;
        if( ds[p++] != '/' )                                                              // 这里一方面递增下标p，一方面判断增加前的字符内容
            throw invalid_argument( "非法间隔符2" ) ;                                    // 是'/'，如果不是则与欲处理类型不符，下同
        day = get_day( ds , month , p ) ;                                                 // 获取日期信息
        if( ds[p++] != '/' )
            throw invalid_argument( "非法间隔符3" ) ;                                    // 获取年份信息
        year = get_year( ds , p );
    }
}

ostream& operator << ( ostream& out , const date& d ){
    out << d.getyear() << "年" << d.getmonth() << "月" << d.getday() << "日" << endl;
    return out ;
}
