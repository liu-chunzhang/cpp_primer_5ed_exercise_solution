// ������������֤��������ϰ5.6�е��뷨�����ڱ�Ҫ�ĵط�����˵�������������������if else���
#include <iostream>
#include <vector>
using namespace std;                // �����Ǵ���ϰ5.5���򿽱���������ͬ��ע��ͳһɾȥ�ˡ����⣬�����ȫʹ����������������������ǳ��鷳

int main() {
    const vector<string> scores{ "F" , "D" , "C" , "B" , "A" , "A++" } ;
    string lettergrade ;
    cout << "��������Ҫ�����ȼ��ĳɼ����벻Ҫ����100�֣�" << endl;

    unsigned grade = 0 ;
    cin >> grade ;
    lettergrade = ( grade > 100 ? "����ɼ�����100��������" : "�ȼ��ɼ��ǣ�" );
    cout << lettergrade << endl;
    if( lettergrade == "����ɼ�����100��������" )
        return -1 ;
    lettergrade = ( grade < 60 ? scores[0] : scores[ ( grade - 50 ) / 10 ] ) ;      // ����������Ŀɶ��Ժ�if else������ʵ����ͻȻ̫���ˣ�����
    if( grade < 60 ){
        cout << lettergrade << endl;
        return 0 ;
    }
    lettergrade = ( grade == 100 ) ? lettergrade :                                  // ����������ǿҲ�üӳ����ӣ��ǳ��鷳
                                    ( grade % 10 > 7 ) ? lettergrade + '+' :
                                                        ( grade % 10 < 3 ) ? lettergrade + '-' : lettergrade ;
    cout << lettergrade << endl;
    return 0;
}
