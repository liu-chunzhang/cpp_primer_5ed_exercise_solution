// ������������֤�̲���9.2.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <list>
using namespace std;

int main(){
    list<string> a = { "Milton" , "Shakespeare" , "Austen" } ;
    list<string>::iterator it1 = a.begin() ;
    list<string>::reverse_iterator it2 = a.rbegin() ;
    list<string>::const_iterator it3 = a.cbegin() ;
    list<string>::const_reverse_iterator it4 = a.crbegin() ;
    return 0;
}
