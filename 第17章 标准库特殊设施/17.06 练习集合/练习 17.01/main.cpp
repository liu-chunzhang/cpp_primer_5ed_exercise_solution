// ������������֤��������ϰ17.1�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int,int,int> tuple3i( 10 , 20 , 30 ) ;            // ע���ʼ����������
    cout << get<0>( tuple3i ) << " " << get<1>( tuple3i ) << " " << get<2>( tuple3i ) << endl;
    return 0;
}
