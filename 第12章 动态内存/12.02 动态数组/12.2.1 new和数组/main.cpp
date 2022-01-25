// ������������֤�̲���12.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <memory>
using namespace std;
typedef int arrT[42] ;

size_t get_size( const string &s ) ;

int main() {
    string str ;
    cin >> str ;
    int *pia = new int[ get_size( str ) ] ;                                        // �������еĴ�С�����ǳ����������ͱ�������

    int *p = new arrT() ;
    cout << sizeof( p )/ sizeof( int ) << endl;                                  // �˴������������С����Ԫ�ش�С�õ�Ԫ�����������

    int* pia2 = new int[10] ;                                                        // 10��û�г�ʼ����int
    for( int *q = pia2 ; q != pia2 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    int* pia3 = new int[10]() ;                                                     // 10����ʼ��Ϊ0��int
    for( int* q = pia3 ; q != pia3 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    string* psa = new string[10] ;                                                  // 10����string
    for( string* q = psa ; q != psa + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    string* psa2 = new string[10]() ;                                               // 10����string
    for( string* q = psa2 ; q != psa2 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    int* pia4 = new int[10]{ 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;              // 10��int�ֱ����б��ж�Ӧ�ĳ�ʼ������ʼ��
    for( int* q = pia4 ; q != pia4 + 10 ; ++q )
        cout << "|" << *q << "| " ;
    cout << endl;
    string* psa3 = new string[10]{ "a" , "an" , "the" , string( 3 , 'x' ) } ;       // 10��string��ǰ4���ø����ĳ�ʼ������ʼ����ʣ�µĽ�
    for( string* q = psa3 ; q != psa3 + 10 ; ++q )                                  // ��ֵ��ʼ��
        cout << "|" << *q << "| " ;
    cout << endl;


    size_t n = get_size( "" ) ;
    int* p2 = new int[n] ;
    for( int *q = p2 ; q != p2 + n ; ++q )
        cout << q << " " ;
    delete [] p2 ;                                                                  // p����ָ��һ����̬����������Ϊ��


    unique_ptr<int[]> up( new int[10] ) ;                                         // upָ����һ������10��δ��ʼ��int������
  //up.release() ;                                                                  // �Զ���delete[]������ָ��up
    for( size_t i = 0 ; i != 10 ; ++i )
        up[i] = i ;                                                                 // Ϊÿ��Ԫ�ظ�һ����ֵ

    shared_ptr<int> sp( new int[10] , []( int *p ){ delete[] p ; } ) ;
  //sp.reset() ;                                                                    // ʹ���ṩ��lambda���ʽ�ͷ����飬��ʹ��delete[]
    for( size_t i = 0 ; i != 10 ; ++i )                                            // ����shared_ptrδ�����±�����������Ҳ�֧��ָ�����
        *( sp.get() + i ) = i ;                                                     // �����㣬����Ҫ��get��ȡһ������ָ��
    for( size_t i = 0 ; i != 10 ; ++i )
        cout << *( sp.get() + i ) << " " ;

    return 0;
}

size_t get_size( const string &s ) {
    return s.size() ;
}
