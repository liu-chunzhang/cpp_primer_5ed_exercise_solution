// ������������֤��������ϰ5.21�е��뷨�����ڱ�Ҫ�ĵط�����˵������д��ϰ5.20��ʹ֮�ҵ����ظ����ʱ����Դ�д��ĸ��ͷ
#include <iostream>
using namespace std;

int main() {
    string transtr ;
    cout << "������һ���ַ��������س���֤���룬��Ctrl+C��ʾ��ֹ��" << endl;
    if( cin >> transtr ){
        string currstr ;
        while( cin >> currstr ){
            if( !isupper( currstr[0] ) )
                continue ;
            if( transtr == currstr )
                break ;
            transtr = currstr ;
        }
        if( transtr == currstr )
            cout << "�����������ֵ��ַ����ǣ�" << transtr << endl;
        else
            cout << "û�������������εĵ��ʡ�" << endl;
        return 0;
    }
    else{
        cerr << "δ��⵽�ַ������룡" << endl;
        return -1 ;
    }
}
