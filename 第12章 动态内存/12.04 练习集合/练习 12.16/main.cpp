// 本程序用于验证读者在练习12.16中的想法，并在必要的地方予以说明
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<string> p1( new string( "Stegosaurus" ) ) ;
    unique_ptr<string> p2( p1 ) ;
    unique_ptr<string> p3 ;
    p3 = p1 ;
    return 0;
}

/*
 *  在C++11之前，当我们希望一个类不能被拷贝，就会把构造函数定义为private，但是在C++11里就不需要这样做了，只需要在构造函数后面加上=delete来修饰
 *  下就可以了（也就是将拷贝构造函数与拷贝构造运算符定义为删除的，详情见教程13.1.6节）。
 */

// 本练习中为存数极少的故意留错的程序，直接编译获得错误信息提示见下方。即程序调用了删除的函数，原因是标准库为了禁止unique_ptr的拷贝和赋值，将其拷贝
// 构造函数和赋值函数声明为了delete的。C++11中，当我们定义一个类的成员函数时，如果后面使用"=delete"去修饰，那么就表示这个函数被定义为deleted，也就
// 意味着这个成员函数不能再被调用，否则就会出错。
