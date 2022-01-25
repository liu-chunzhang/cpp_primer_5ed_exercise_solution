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

struct Pub_Derv : public Base {                         // ��Щ��������
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

struct Derived_from_Public : public Pub_Derv {          // ��Щ���������������
    int f() ;
    void memfcn( Base &b ) ;
};

struct Derived_from_Protected : public Prot_Derv {
    int f() ;
    void memfcn( Base &b ) ;
};

struct Derived_from_Privated : public Priv_Derv {        // һ�����������̳���private�ģ�����������಻��ʹ����һ�������ൽ�����ת����
    //int f() ;                                           // ��prot_mem��ΪPriv_Derv��private��Ա���޷����ʣ���˲��Ϸ�
    //void memfcn( Base &b ) ;                            // ����ϰ15.20�ķ�����֪�䲻�Ϸ�
};

#endif // BASE_H
