// ������������֤�̲���5.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> svec{ "Welcome " , "to " , "C++ " , "family" , "!" } ;
    vector<string>::iterator iter = svec.begin() ;
    while( iter != svec.end() ) ;                                          // �߼������ش�����while������ķֺ�ʹ��whileѭ����һֱ��ִ�п���䣡
        ++iter ;
    return 0;
}
