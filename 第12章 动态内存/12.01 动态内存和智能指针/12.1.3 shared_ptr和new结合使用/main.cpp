// ������������֤�̲���12.1.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <memory>
using namespace std;

void process( shared_ptr<int> ptr ) ;

int main() {
    shared_ptr<double> p1 ;                      // shared_ptr����ָ��һ��double
    shared_ptr<int> p2( new int( 42 ) ) ;        // p2ָ��һ��ֵΪ42��int

  //shared_ptr<int> p21 = new int( 1024 ) ;        // ���󣺱���ʹ��ֱ�ӳ�ʼ����ʽ
    shared_ptr<int> p22( new int ( 1024 ) ) ;    // ��ȷ��ʹ��ֱ�ӳ�ʼ��

    shared_ptr<int> p( new int( 42 ) ) ;
    process( p ) ;
    int i = *p ;
    cout << i << endl;

    int* x = ( new int( 1024 ) ) ;
  //process( x ) ;                                 // ���󣺲��ܽ�int*ת��Ϊһ��shared_ptr<int>
    process( shared_ptr<int>( x ) ) ;             // ��Ȼ�Ϸ��������ڴ汻�ͷ��ˣ����Զ����м������ԣ�����ÿ�δ�ӡ����Ƿ�һ����
    int j = *x ;                                   // δ������Ϊ��x��һ������ָ�룡
    cout << j << endl;

    shared_ptr<int> p4( new int( 42 ) ) ;         // ���ü���Ϊ1
    int *q = p4.get() ;                             // ��ȷ����ʹ��qʱҪע�⣬�������������ָ�뱻�ͷ�
    {
        shared_ptr<int>( q ) ;                    // δ������Ϊ������������shared_ptrָ����ͬ���ڴ�
    }
    int foo = *p4 ;                                 // δ������Ϊ��pָ����ڴ��ѱ��ͷ�


    shared_ptr<int> p3( new int( 1024 ) ) ;       // ���󣺲��ܽ�һ��ָ�븳��shared_ptr
    p3.reset( new int( 512 ) ) ;                   // ��ȷ��pָ��һ���¶��󣬴�ӡ�������ȷʵ��һ��
    cout << *p3 ;
    return 0;
}

/*
shared_ptr<int> clone( int p ) {
    return new int( p ) ;                          // ������ʽת��Ϊshared_ptr<int>
}
*/

void process( shared_ptr<int> ptr ){
    cout << *ptr << " " ;
}
