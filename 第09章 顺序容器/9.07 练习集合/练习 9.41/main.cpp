// ������������֤��������ϰ9.41�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> cvec = { 'H' , 'e' , 'l' , 'l' , 'o' } ;
    string str( cvec.cbegin() , cvec.cend() ) ;
    cout << str << endl;
    return 0;
}
