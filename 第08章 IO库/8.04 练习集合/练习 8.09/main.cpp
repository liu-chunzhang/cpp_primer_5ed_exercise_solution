// ������������֤��������ϰ8.9�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <sstream>
using namespace std;

istream& printInt( istream &in ) ;                   // ���������������յĲ���������istream&,����ֵ����Ҳ��istream&

int main() {
    ostringstream ostr ;
    ostr << "hello, welcome to C++ world." << endl;
    istringstream in( ostr.str() ) ;
    printInt( in ) ;
    return 0;
}

istream& printInt( istream &in ){
    string v ;
    while( in >> v )
        cout << v << endl;                                  // ����ȡ�����ݴ�ӡ�ڱ�׼����ϡ�
    in.clear() ;                                            // �����Щ�������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬
    return in ;
}
