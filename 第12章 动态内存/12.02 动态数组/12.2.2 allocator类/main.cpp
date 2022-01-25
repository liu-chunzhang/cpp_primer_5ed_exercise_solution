// ������������֤�̲���12.2.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
//#include <memory>                                                             // ����allocator���ԣ�<memory>���Ǳ�Ҫ��
using namespace std;

int main() {
    size_t n = 5 ;
    string* const p = new string[n] ;                                         // ����n����string
    string s , *q = p ;                                                        // qָ���һ��string
    while( cin >> s && q != p + n )
        *q++ = s ;                                                              // ����*qһ����ֵ
    const size_t size1 = q - p ;                                               // ��ס���Ƕ�ȡ�˶��ٸ�string
    delete[] p ;                                                               // pָ����һ�����飻�ǵ���delete[]���ͷ�

    n = 3 ;
    allocator<string> salloc ;                                                // ���Է���string��allocator����
    const allocator<string>::pointer p2 = salloc.allocate( n ) ;             // ����n��δ��ʼ����string���̲Ĵ˴�autoָ������const allocator<string>::pointer
    const string *q2 = p2 ;                                                   // qָ��������Ԫ��֮���λ�ã�Ϊ��ʹ��deallocate������
                                                                               // ������p����auto
    salloc.construct( q2++ );
    salloc.construct( q2++ , 10 , 'c' ) ;
    salloc.construct( q2++ , "hi" ) ;
    cout << *p2 << endl;                                                       // ��ȷ��ʹ��string����������
  //cout << *q << endl;                                                         // ���ѣ�qָ��δ������ڴ棡�ұ����������������
    while( q2 != p2 )                                                          // �ͷ��������������string��ֻ�ܶ����������˵�Ԫ�ؽ���
        salloc.destroy( --q2 ) ;                                                // destroy����
    salloc.deallocate( p2 , n ) ;

    vector<int> ivec( 3 ) ;
    allocator<int> ialloc ;
    auto p4 = ialloc.allocate( ivec.size() * 2 ) ;                              // �����ivec��Ԫ����ռ�ÿռ��һ���Ŀռ��ڴ�
    auto q4 = uninitialized_copy( ivec.begin() , ivec.end() , p4 ) ;          // ͨ������ivec�е�Ԫ���������µ�Ԫ��
    uninitialized_fill_n( q4 , ivec.size() , 42 ) ;                           // ��ʣ��Ԫ�س�ʼ��Ϊ42
    delete[] p4 ;

    return 0;
}
