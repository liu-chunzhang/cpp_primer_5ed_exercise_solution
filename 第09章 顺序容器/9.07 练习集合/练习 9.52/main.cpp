// 本程序用于验证读者在练习9.52中的想法，并在必要的地方予以说明
#include "obj.h"

inline void skipws( string &exp , size_t &p ) ;
inline void new_val( stack<obj> &so , double v ) ;

int main() {
    stack<obj> so ;
    string exp ;
    size_t p = 0 , q ;                                                     // p用来表示字符串读取的位置
    double v ;                                                             // v用来储存过渡的数字

    cout << "请输入待计算的表达式：" ;
    getline( cin , exp ) ;

    while( p < exp.size() ){
        skipws( exp , p ) ;                                                // 用于跳过每个运算符和数字之间的空格
        if( exp[p] == '(' ){                                               // 左括号直接压栈
            so.push( obj(LP) ) ;
            ++p;
        }
        else if( exp[p] == '+' || exp[p] == '-' ){                         // 新运算符
            if( so.empty() || so.top().t != VAL )                          // 空栈或之前不是运算数
                throw invalid_argument("缺少运算数") ;
            if( exp[p] == '+' )                                            // 运算符压栈
                so.push( obj(ADD) ) ;
            else
                so.push( obj(SUB) ) ;
            ++p ;
        }
        else if( exp[p] == ')' ){                                          // 右括号
            ++p ;
            if( so.empty() )                                                // 之前无配对的左括号
                throw invalid_argument("未匹配右括号") ;
            if( so.top().t == LP )                                         // 一对括号之间无内容
                throw invalid_argument("空括号") ;
            if( so.top().t == VAL ){                                       // 正确：括号内运算结果
                v = so.top().v ;
                so.pop() ;
                if( so.empty() || so.top().t != LP )
                    throw invalid_argument("未匹配右括号") ;
                so.pop() ;
                new_val( so , v ) ;
            }
            else
                throw invalid_argument("缺少运算数") ;
        }
        else{
            v = stod( exp.substr( p ) , &q ) ;
            p += q ;
            new_val( so ,v ) ;
        }
    }

    if( so.size() != 1 || so.top().t != VAL )
        throw invalid_argument("非法表达式") ;
    cout << so.top().v << endl;
    return 0;
}

inline void skipws( string &exp , size_t &p ){                          // 这个函数用来跳过空格输入
    p = exp.find_first_not_of( " ", p ) ;                                // 从位置p开始检索不是空格的第一个位置，然后将其返回p
}

inline void new_val( stack<obj> &so , double v ){
    if( so.empty() || so.top().t == LP ){                                 // 空栈或左括号
        so.push( obj( VAL , v ) ) ;
        cout << "push " << v << endl;
    }
    else if( so.top().t == ADD || so.top().t == SUB ){                    // 之前是运算符
        obj_type type = so.top().t ;
        so.pop() ;
        if( type == ADD )
            cout << "pop +" << endl;
        else
            cout << "pop -" << endl;
        cout << "pop " << so.top().v << endl;

        if ( type == ADD )
            v += so.top().v ;
        else
            v -= so.top().v ;
        so.pop() ;
        so.push( obj( VAL , v) ) ;
        cout << "push " << v << endl;
    }
    else
        throw invalid_argument( "缺少运算符" ) ;
}
