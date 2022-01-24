#include "date.h"

const string date::month_name[12] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December" } ;

const string date::month_abbr[12] = { "Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun" , "Jul" , "Aug" , "Sept" , "Oct" , "Nov" , "Dec" } ;

const unsigned short date::days[12] = { 31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 } ;                        // ���������µĿ��ܣ������ݶ�Ϊ29

inline int get_month( string &ds , unsigned &end_of_month ){
    unsigned i , j ;
    for( i = 0 ; i < 12 ; ++i ){                                                          // ����i�����ж��·ݣ�j������ʾ����i�����·ݵ��ַ�
        for( j = 0 ; j < date::month_abbr[i].size() ; ++j )                                     // �±꣬�ȼ��ÿ���ַ��Ƿ����·ݼ�д��ͬ
            if( ds[j] != date::month_abbr[i][j] )                                               // ���Ǵ��¼�д
                break;
        if( j == date::month_abbr[i].size() )                                                   // ���дƥ��
            break;
    }
    if( i == 12 )                                                                          // �������·���������ͬ�����·������Ϸ�
        throw invalid_argument( "���ǺϷ��·���" ) ;
    if( ds[j] == ' ' ){                                                                    // �����հ׷���˵�����������·���д
        end_of_month = j + 1 ;                                                             // end_of_month�����ж�֮�����ڵĺϷ��ԣ���ͬ
        return i + 1 ;                                                                    // ����i + 1���·�ֵ
    }
    for( ; j < date::month_name[i].size() ; ++j )                                               // ������·������벻�Ϸ����д����ͻᴥ�������
        if( ds[j] != date::month_name[i][j] )                                                   // �׳�����
            break;
    if( j == date::month_name[i].size() && ds[j] == ' ' ){
        end_of_month = j + 1 ;
        return i + 1 ;
    }
    throw invalid_argument( "���ǺϷ��·���" ) ;
}

inline int get_day( string &ds , int month , unsigned &p ){                            // ����p�����ֵΪ�·ݵ��ʵĳ���+1��+1�������ո�
    size_t q ;                                                                           // q���������һ���������ַ����±꣬ʵ��������Ĺ�
    int day = stoi( ds.substr( p ) , &q ) ;                                              // ������stoi���������ã���p��ʼ�Ĳ���ת��������ֵ
    if( day < 1 || day > date::days[month] )
        throw invalid_argument( "���ǺϷ�����ֵ" ) ;
    p += q ;                                                                              // �ƶ��������Ժ�
    return day ;
}

inline int get_year( string &ds , unsigned &p ){
    size_t q ;
    int year = stoi( ds.substr( p ) , &q ) ;
    if( p + q < ds.size() )
        throw invalid_argument( "�Ƿ���β����" ) ;
    return year;
}

date::date( string &ds ){
    size_t p ;
    size_t q ;
    if( ( p = ds.find_first_of( "0123456789" ) ) == string::npos )
        throw invalid_argument( "û�����֣��Ƿ�����" ) ;
    if( p > 0 ){                                                                          // ��һ����������January 1,1990��Jan 1 1900������
        month = get_month( ds , p ) ;                                                     // ����p��������Ӧ�·ݵĺϷ�����
        day = get_day( ds , month , p ) ;
        if( ds[p] != ' ' && ds[p] != ',' )
            throw invalid_argument( "�Ƿ������1" ) ;
        ++p ;
        year = get_year( ds , p ) ;
    }
    else {                                                                                // ��һ����������3/14/2020������
        month = stoi( ds , &q ) ;                                                         // ����q�������淵�صĵ�һ������ֵ�ַ����±�
        p = q ;
        if( month < 1 || month > 12 )
            throw invalid_argument( "���ǺϷ��·�ֵ" ) ;
        if( ds[p++] != '/' )                                                              // ����һ��������±�p��һ�����ж�����ǰ���ַ�����
            throw invalid_argument( "�Ƿ������2" ) ;                                    // ��'/'����������������������Ͳ�������ͬ
        day = get_day( ds , month , p ) ;                                                 // ��ȡ������Ϣ
        if( ds[p++] != '/' )
            throw invalid_argument( "�Ƿ������3" ) ;                                    // ��ȡ�����Ϣ
        year = get_year( ds , p );
    }
}

ostream& operator << ( ostream& out , const date& d ){
    out << d.getyear() << "��" << d.getmonth() << "��" << d.getday() << "��" << endl;
    return out ;
}
