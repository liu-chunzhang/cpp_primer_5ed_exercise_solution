// ������������֤��������ϰ8.2�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <fstream>
#include <iostream>
using namespace std;

istream& printInt( istream &in ) ;         // ���������������յĲ���������istream&,����ֵ����Ҳ��istream&

int main() {
    ifstream in( "data.txt" ) ;
    printInt( in ) ;
    return 0;
}

istream& printInt( istream &in ){
    int v ;
    while( in >> v )                       // ѭ���������Ӹ������ж������ݣ�ֱ�������ļ�������ʶʱֹͣ.
        cout << v << endl;
    in.clear() ;                           // �����Щ�������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬
    return in ;
}
