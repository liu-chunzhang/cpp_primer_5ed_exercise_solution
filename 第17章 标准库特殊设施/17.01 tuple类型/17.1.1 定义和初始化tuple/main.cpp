// ������������֤�̲���17.1.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <list>
#include <tuple>
#include <vector>
using namespace std;

int main() {
    tuple<size_t,size_t,size_t> threeD ;                        // ʹ��Ĭ�Ϲ��캯��
    tuple<string,vector<double>,int,list<int>> someVal( "constants" , { 3.14 , 2.718 } , 42 , { 0 , 1 , 2 , 3 , 4 , 5 } ) ;

    tuple<size_t,size_t,size_t> threeD1 = { 1 , 2 , 3 } ;
    tuple<size_t,size_t,size_t> threeD2{ 1 , 2 , 3 } ;


    tuple<string,unsigned,double> item = make_tuple( "0-999-78345-X" , 3 , 20.00 ) ;
    string book = get<0>( item ) ;                                // ����item�ĵ�һ����Ա
    unsigned cnt = get<1>( item ) ;                               // ����item�ĵڶ�����Ա
    double price = get<2>( item ) / cnt ;                         // ����item�ĵ�������Ա
    get<2>( item ) *= 0.8 ;
    cout << book << " " << cnt << " " << get<2>( item ) << endl;


    typedef decltype( item ) trans ;                           // trans��item������
    size_t sz = tuple_size<trans>::value ;                     // ����trans���Ͷ����г�Ա������
    tuple_element<1,trans>::type cnt0 = get<1>( item ) ;
    cout << sz << " " << cnt0 ;

    tuple<string,string> duo( "1" , "2" ) ;
    tuple<size_t,size_t> twoD( 1 , 2 ) ;
  //bool b = ( duo == twoD ) ;                                  // ���󣺲��ܱȽ�size_t��string
    tuple<size_t,size_t,size_t> threeD3( 1 , 2 , 3 ) ;
    bool b ;
  //b = ( twoD < threeD ) ;                                     // ���󣺳�Ա������ͬ
    tuple<size_t,size_t> origin( 0 , 0 ) ;
    b = ( origin < twoD ) ;                                     // ��ȷ����Ա��������Ӧ���;���ͬ�����ԱȽ�
    cout << b ;
    return 0;
}
