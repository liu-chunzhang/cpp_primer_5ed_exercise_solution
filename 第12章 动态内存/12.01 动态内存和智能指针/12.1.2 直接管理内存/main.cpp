// 本程序用于验证教材中12.1.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int *pi = new int ;
    string *ps = new string ;
    cout << *pi << endl;                                                             // int的默认初始化，没有初始化，值不确定

    int *pi0 = new int( 1024 ) ;
    string *ps2 = new string( 10 , '9' ) ;
    vector<int> *pvi = new vector<int> { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;  // 列表初始化

    string *ps3 = new string ;
    string *ps4 = new string() ;
    int *pi1 = new int ;                                                              // pi1指向的动态内存对象默认初始化。*pi1的值没有定义
    int *pi2 = new int() ;                                                            // 值初始化为0；*pi2 = 0
    cout << *pi1 << " " << *pi2 << endl;

    int obj = 3 ;
    auto p1 = new auto( obj ) ;                                                       // p指向一个与obj类型相同的对象，该对象用obj进行初始化

    const int *pci = new const int( 1024 ) ;
    const string *pcs = new const string ;

    int *p4 = new int ;                                                               // 如果分配失败，new抛出std::bad_alloc
    int *p5 = new ( nothrow ) int ;                                                  // 如果分配失败，new返回一个空指针
    delete p1 ;

    int i , *pi6 = &i , *pi7 = nullptr ;
    double *pd = new double( 33 ) , *pd2 = pd ;
  //delete i ;                                                                        // 错误：i不是一个指针
    delete pi6 ;                                                                     // 未定义行为：pi1指向一个局部变量，但编译器不检查这类错误
    delete pd ;                                                                      // 正确
    delete pd2 ;                                                                     // 未定义行为：pd2指向的内存已经被释放了，编译器不分辨一个
                                                                                      // 指针所指向的空间是否已被释放
    delete pi7 ;                                                                     // 正确：释放一个空指针总是无误的
    const int *pci2 = new const int( 1024 ) ;
    delete pci2 ;                                                                    // 正确：释放一个const对象

    int *p( new int( 42 ) ) ;                                                        // p指向动态内存
    auto q = p ;                                                                     // p和q指向相同的内存
    delete p ;                                                                       // p和q均变为无效
    p = nullptr ;                                                                    // 指出p不再指向任何对象，但是对于q没有任何作用
    return 0;
}
