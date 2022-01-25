#include "Derived.h"

void Derived::f( const Derived &derived_obj ) {
    Base::statmem() ;               // 正确：Base定义了statmem
    Derived::statmem() ;            // 正确：Derived继承了statmem，派生类的对象能访问基本的静态成员
    derived_obj.statmem() ;         // 通过Derived对象访问
    statmem() ;                     // 通过this对象访问
}
