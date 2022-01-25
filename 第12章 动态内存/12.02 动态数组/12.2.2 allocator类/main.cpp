// 本程序用于验证教材中12.2.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
//#include <memory>                                                             // 对于allocator而言，<memory>不是必要的
using namespace std;

int main() {
    size_t n = 5 ;
    string* const p = new string[n] ;                                         // 制造n个空string
    string s , *q = p ;                                                        // q指向第一个string
    while( cin >> s && q != p + n )
        *q++ = s ;                                                              // 赋予*q一个新值
    const size_t size1 = q - p ;                                               // 记住我们读取了多少个string
    delete[] p ;                                                               // p指向了一个数组；记得用delete[]来释放

    n = 3 ;
    allocator<string> salloc ;                                                // 可以分配string的allocator对象
    const allocator<string>::pointer p2 = salloc.allocate( n ) ;             // 分配n个未初始化的string；教材此处auto指代的是const allocator<string>::pointer
    const string *q2 = p2 ;                                                   // q指向最后构造的元素之后的位置，为了使得deallocate不报错，
                                                                               // 必须在p上用auto
    salloc.construct( q2++ );
    salloc.construct( q2++ , 10 , 'c' ) ;
    salloc.construct( q2++ , "hi" ) ;
    cout << *p2 << endl;                                                       // 正确：使用string的输出运算符
  //cout << *q << endl;                                                         // 灾难：q指向未构造的内存！且编译器不检查此类错误！
    while( q2 != p2 )                                                          // 释放我们真正构造的string：只能对真正构造了的元素进行
        salloc.destroy( --q2 ) ;                                                // destroy操作
    salloc.deallocate( p2 , n ) ;

    vector<int> ivec( 3 ) ;
    allocator<int> ialloc ;
    auto p4 = ialloc.allocate( ivec.size() * 2 ) ;                              // 分配比ivec中元素所占用空间大一倍的空间内存
    auto q4 = uninitialized_copy( ivec.begin() , ivec.end() , p4 ) ;          // 通过拷贝ivec中的元素来构造新的元素
    uninitialized_fill_n( q4 , ivec.size() , 42 ) ;                           // 将剩余元素初始化为42
    delete[] p4 ;

    return 0;
}
