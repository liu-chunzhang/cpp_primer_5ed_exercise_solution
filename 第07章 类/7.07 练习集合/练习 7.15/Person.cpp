#include "Person.h"
// ��Ԫ����
istream &operator >> ( istream &in , Person &per ){
    in >> per.Name >> per.Address ;
    return in ;
}

ostream &operator << ( ostream &out , Person &per ){
    out << per.Name << " " << per.Address;
    return out ;
}
//���캯������������
Person::Person( const string &name , const string &address ) : Name( name ) , Address( address ) { }

Person::Person( istream &in ) {
    in >> Name >> Address ;
}

// �����Ժ���
string Person::findName() const {                       // ����������Ӧ�ñ�����Ϊ������Ա��������Ϊ�����Ƿ����������ǵ�ַ���ں�����
    return Name ;                                       // �ڲ����Ƕ�ȡ���ݳ�Ա��ֵ�����������κθı�
}

string Person::findAddress() const {
    return Address ;
}
