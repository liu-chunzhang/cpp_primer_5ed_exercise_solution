// ������������֤��������ϰ13.13�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "X.h"
#include <vector>
#include <memory>

void f1( X x ) ;
void f2( X &x ) ;

int main() {
    cout << "�ֲ�������" << endl;
    X x;
    cout << endl;

    cout << "�����ò������ݣ�" << endl;
    f1( x ) ;
    cout << endl;

    cout << "���ò������ݣ�" << endl;
    f2( x ) ;
    cout << endl;

    cout << "��̬���䣺" << endl;
    shared_ptr<X> px ( new X ) ;
    cout << endl;

    cout << "��ӵ������У�" << endl;
    vector<X> xvec ;
    xvec.push_back( x ) ;
    cout << endl;

    cout << "��ӳ�ʼ���͸�ֵ��" << endl;
    X y = x ;
    y = x ;
    cout << endl;

    cout << "���򵽴˽�����" << endl;
    return 0;
}

void f1( X x ){ }
void f2( X &x ) { }
