// ������������֤��������ϰ9.52�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "obj.h"

inline void skipws( string &exp , size_t &p ) ;
inline void new_val( stack<obj> &so , double v ) ;

int main() {
    stack<obj> so ;
    string exp ;
    size_t p = 0 , q ;                                                     // p������ʾ�ַ�����ȡ��λ��
    double v ;                                                             // v����������ɵ�����

    cout << "�����������ı��ʽ��" ;
    getline( cin , exp ) ;

    while( p < exp.size() ){
        skipws( exp , p ) ;                                                // ��������ÿ�������������֮��Ŀո�
        if( exp[p] == '(' ){                                               // ������ֱ��ѹջ
            so.push( obj(LP) ) ;
            ++p;
        }
        else if( exp[p] == '+' || exp[p] == '-' ){                         // �������
            if( so.empty() || so.top().t != VAL )                          // ��ջ��֮ǰ����������
                throw invalid_argument("ȱ��������") ;
            if( exp[p] == '+' )                                            // �����ѹջ
                so.push( obj(ADD) ) ;
            else
                so.push( obj(SUB) ) ;
            ++p ;
        }
        else if( exp[p] == ')' ){                                          // ������
            ++p ;
            if( so.empty() )                                                // ֮ǰ����Ե�������
                throw invalid_argument("δƥ��������") ;
            if( so.top().t == LP )                                         // һ������֮��������
                throw invalid_argument("������") ;
            if( so.top().t == VAL ){                                       // ��ȷ��������������
                v = so.top().v ;
                so.pop() ;
                if( so.empty() || so.top().t != LP )
                    throw invalid_argument("δƥ��������") ;
                so.pop() ;
                new_val( so , v ) ;
            }
            else
                throw invalid_argument("ȱ��������") ;
        }
        else{
            v = stod( exp.substr( p ) , &q ) ;
            p += q ;
            new_val( so ,v ) ;
        }
    }

    if( so.size() != 1 || so.top().t != VAL )
        throw invalid_argument("�Ƿ����ʽ") ;
    cout << so.top().v << endl;
    return 0;
}

inline void skipws( string &exp , size_t &p ){                          // ����������������ո�����
    p = exp.find_first_not_of( " ", p ) ;                                // ��λ��p��ʼ�������ǿո�ĵ�һ��λ�ã�Ȼ���䷵��p
}

inline void new_val( stack<obj> &so , double v ){
    if( so.empty() || so.top().t == LP ){                                 // ��ջ��������
        so.push( obj( VAL , v ) ) ;
        cout << "push " << v << endl;
    }
    else if( so.top().t == ADD || so.top().t == SUB ){                    // ֮ǰ�������
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
        throw invalid_argument( "ȱ�������" ) ;
}
