// ������������֤�̲���14.8.3�����ݵĿɿ��ԣ����ṩ������֪
#include <functional>
#include <map>
#include "divide.h"

int add( int i , int j ) ;
auto mod = []( int i , int j ){ return i % j ; } ;

int main() {
    map<string,int(*)(int,int)> binops ;                // �����������������ָ���ӳ�䣬���к�����������int������һ��int
    binops.insert( { "+" , add } ) ;                     // ��ȷ��add��һ��ָ����ȷ���͵ĺ�����{ "+" , add }��һ��pair
    binops.insert( { "%" , mod } ) ;                     // ע�⣡�˴��ͽ̲�������ͬ���Ǳ�����ģ�
  //binops.insert( { "/" , divide() } ) ;                // ����divide����һ������ָ��

    function<int(int,int)> f ;
    function<int(int,int)> f1 = add ;
    cout << f1( 4 , 2 ) << endl;
    function<int(int,int)> f2 = divide() ;
    cout << f2( 4 , 2 ) << endl;
    function<int(int,int)> f3 = []( int i , int j ) -> int { return i * j ; } ;
    cout << f3( 4 , 2 ) << endl;

    map<string,function<int(int,int)>> binops2 = { { "+" , add } ,                                        // ����ָ��
                                                      { "-" , minus<int>() } ,                              // ��׼�⺯������
                                                      { "/" , divide() } ,                                   // �û�����ĺ�������
                                                      { "*" , []( int i , int j ){ return i * j ; } } ,     // δ������lambda
                                                      { "%" , mod } } ;                                      // �����˵�lambda
    cout << binops2["+"]( 10 , 5 ) << endl;                                                    // ����add( 10 , 5 )
    cout << binops2["-"]( 10 , 5 ) << endl;                                                    // ʹ��minus<int>����ĵ��������
    cout << binops2["*"]( 10 , 5 ) << endl;                                                    // ʹ��divide����ĵ��������
    cout << binops2["/"]( 10 , 5 ) << endl;                                                    // ����lambda��������
    cout << binops2["%"]( 10 , 5 ) << endl;                                                    // ����lambda��������

    map<string,function<int(int,int)>> binops3 ;
    int (*fp)( int , int ) = add ;
    binops3.insert( { "+" , fp } ) ;
    binops3.insert( { "*" , []( int a , int b ) -> int { return a * b ; } } ) ;
    return 0;
}

int add( int i , int j ){
    return i + j ;
}
