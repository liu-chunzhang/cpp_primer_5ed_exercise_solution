// ������������֤��������ϰ5.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    string transtr ;
    cout << "������һ���ַ��������س���֤���룬��Ctrl+C��ʾ��ֹ��" << endl;
    if( cin >> transtr ){
        string currstr ;
        while( cin >> currstr )
            if( transtr == currstr ){
                cout << "�����ظ��ĵ���Ϊ��" << transtr ;        // ��ʵ���������Ĺ��ܣ�break��䲻��һ����ѡ��returnֱ�ӽ���������ǡ�
                return 0 ;                                       // ʹ��break�İ汾���Լ���ϰ 5.21���ԼӸĶ����ǡ�
            }
            else
                transtr = currstr ;
        cout << "û�������������εĵ��ʡ�" << endl;
        return 0;
    }
    else{
        cerr << "δ��⵽�ַ������룡" << endl;
        return -1 ;
    }
}
