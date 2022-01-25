#include "Base.h"

int Pub_Derv::f() {
    return prot_mem ;
}

void Pub_Derv::memfcn( Base &b ) {
    b = *this ;
    cout << "Pub_Derv" << endl;
}

int Prot_Derv::f() {
    return prot_mem ;
}

void Prot_Derv::memfcn( Base &b ) {
    b = *this ;
    cout << "Prot_Derv" << endl;
}

int Priv_Derv::f() {
    return prot_mem ;
}

void Priv_Derv::memfcn( Base &b ) {
    b = *this ;
    cout << "Priv_Derv" << endl;
}

int Derived_from_Public::f() {
    return prot_mem ;
}

void Derived_from_Public::memfcn( Base &b ) {
    b = *this ;
    cout << "Derived_from_Public" << endl;
}

int Derived_from_Protected::f() {
    return prot_mem ;
}

void Derived_from_Protected::memfcn( Base &b ) {
    b = *this ;
    cout << "Derived_from_Protected" << endl;
}

// Derived_from_Privated类的成员函数
/*
int Derived_from_Privated::f() {
    return prot_mem ;
}

void Derived_from_Privated::memfcn( Base &b ) {
    b = *this ;
    cout << "Derived_from_Privated" << endl;
}
*/
