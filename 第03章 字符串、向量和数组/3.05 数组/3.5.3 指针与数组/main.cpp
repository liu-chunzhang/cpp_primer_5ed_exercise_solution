// ������������֤�̲���3.5.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    /*
    string nums[] = { "one" , "two" , "three" };     // �����Ԫ����string����
    string *p1 = &nums[0] ;                          // pָ��nums�ĵ�һ��Ԫ��
    string *p2 = nums ;                              // ��ȼ���p2 = &nums[0]
    if( p1 == p2 )                                   // ����ж���������������д���ĵȼ��ԣ������p1==p2��˵��������ʵ�ʵȼۡ�
        cout << "p1 == p2" << endl;
    else
        cout << "p1 != p2" << endl;
    */

    /*
    int ia[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;    // ia��һ������10������������
    auto ia2( ia ) ;                                          // ia2��һ������ָ�룬ָ��ia����Ԫ
    *ia2 = 42 ;                                                // ia2ֻ��һ��ָ�룬������intֵ���丳ֵ�����ǿ��Ը�Ϊ*ia2 = 42����ia[0]��ֵ42��
    decltype(ia) ia3 = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    ia3 = ia2;                                                      // ���󣺲���������ָ������鸳ֵ
    */

    /*
    int arr[] = { 0 , 12138 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    int *p = arr ;                                               // pָ��arr�ĵ�һ��Ԫ��
    ++p ;                                                        // pָ��arr[1]
    cout << *p << endl;                                         // д�������Ǵ�ӡ���������˵��
    for( int *b = arr ; b != &arr[10] ; ++b )
        cout << *b << " " ;
    */

    /*
    int ia[] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;       // ia��һ������10������������
    cout << *begin(ia) << " " << *end(ia) << endl;              // begin(ia)��ָ��ia��Ԫ�ص�ָ�룻end(ia)ָ��arrβԪ�ص���һλ�õ�ָ��
    int arr[] = { 0 , 2 , -4 , 6 , -8 , 10 } ;
    int *pbeg = begin(arr) , *pend = end(arr) ;                 // ����Ҫ<iterator>ͷ�ļ�
    while( pbeg != pend && *pbeg >= 0)
        ++pbeg ;
    cout << *pbeg ;
    */

    /*
    constexpr size_t sz = 5 ;
    int arr[sz] = { 1 , 2, 3 , 4 , 5 } ;
    int *ip = arr ;                                  // �ȼ���int *ip = &arr[0]
    int *ip2 = ip + 4 ;                              // ip2ָ��arr��βԪ��arr[4]
    cout  << *ip << " " << *ip2 << endl;
    */

    /*
    constexpr size_t sz = 5 ;
    int arr[sz] = { 1 , 2 , 3 , 4 , 5 } ;
    int *b = arr , *e = arr + sz ;
    while( b < e )
        ++b ;                                         // ʹ��*b
    */

    /*
    int ia[] = { 0 , 2 , 4 , 6 , 8 } ;
    int last1 = *(ia + 4) ;                          // ��last1��ʼ��Ϊia[4]��ֵ
    int last2 = *ia + 4 ;                            // ��ȼ���last2 = ia[0] + 4
    cout << last1 << " " << last2 << endl;
    int i = ia[2] ;                                  // iaת����ָ��������Ԫ��ָ�룬ia[2]�õ�(ia + 2)��ָ��Ԫ��
    int *p = ia ;                                    // pָ��ia����Ԫ
    int j = *(p + 2);                                // �ȼ���j = ia[2];
    if( i == j && j == 4)
        cout << "i == j" << endl;
    else
        cout << "i != j" << endl;
    int *q = &ia[2];
    int r = q[1];
    int s = q[-2];
    */

    return 0;
}
