// ������������֤��������ϰ1.12�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main(){
    int sum = 0 ;
    for( int i = -100 ; i <= 100 ; ++i)                             // ��ѭ����-100��100(��-100��100)֮���������ӣ�sum����ֹΪ0��
        sum += i;
    cout << "����-100�ӵ�100�ĺ�Ϊ" << sum << "��" << endl;
    return 0;
}
