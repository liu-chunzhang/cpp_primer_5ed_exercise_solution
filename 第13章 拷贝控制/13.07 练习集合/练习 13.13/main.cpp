// 本程序用于验证读者在练习13.13中的想法，并在必要的地方予以说明
#include "X.h"
#include <vector>
#include <memory>

void f1( X x ) ;
void f2( X &x ) ;

int main() {
    cout << "局部变量：" << endl;
    X x;
    cout << endl;

    cout << "非引用参数传递：" << endl;
    f1( x ) ;
    cout << endl;

    cout << "引用参数传递：" << endl;
    f2( x ) ;
    cout << endl;

    cout << "动态分配：" << endl;
    shared_ptr<X> px ( new X ) ;
    cout << endl;

    cout << "添加到容器中：" << endl;
    vector<X> xvec ;
    xvec.push_back( x ) ;
    cout << endl;

    cout << "间接初始化和赋值：" << endl;
    X y = x ;
    y = x ;
    cout << endl;

    cout << "程序到此结束。" << endl;
    return 0;
}

void f1( X x ){ }
void f2( X &x ) { }
