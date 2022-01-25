#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base{
    public:
        void pub_mem() ;

    protected:
        int prot_mem ;

    private:
        char priv_mem ;
};

struct Pub_Derv : public Base {                         // 这些是派生类
    int f() ;
    void memfcn( Base &b ) ;
};

struct Prot_Derv : protected Base {
    int f() ;
    void memfcn( Base &b ) ;
};

struct Priv_Derv : private Base {
    int f() ;
    void memfcn( Base &b ) ;
};

struct Derived_from_Public : public Pub_Derv {          // 这些是派生类的派生类
    int f() ;
    void memfcn( Base &b ) ;
};

struct Derived_from_Protected : public Prot_Derv {
    int f() ;
    void memfcn( Base &b ) ;
};

struct Derived_from_Privated : public Priv_Derv {        // 一次派生类若继承是private的，则二次派生类不能使用其一次派生类到基类的转换！
    //int f() ;                                           // 因prot_mem作为Priv_Derv的private成员而无法访问，因此不合法
    //void memfcn( Base &b ) ;                            // 由练习15.20的分析，知其不合法
};

#endif // BASE_H
