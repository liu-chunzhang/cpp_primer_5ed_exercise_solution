// ������������֤�̲���5.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const vector<string> scores{ "F" , "D" , "C" , "B" , "A" , "A++" } ;
    string lettergrade ;
    unsigned grade = 0 ;
    cin >> grade ;
    cout << "��������Ҫ�����ȼ��ĳɼ����벻Ҫ����100�֣�" << endl;
    if ( grade > 100 )                                                   // Ϊ�˱�֤��������������У���������һ���ж���䣬�����ų��������
        cout << "����ɼ�����100��������" << endl;                    // ����100������
    else{
        if( grade < 60 )
            lettergrade = scores[0] ;
        else{
            lettergrade = scores[ ( grade - 50 ) / 10 ] ;
            if( grade != 100 ){                                         // �˴��������������Ҳû���⣬ֻ���������һ�����棬���˾�������
                if( grade % 10 > 7 )
                    lettergrade += '+' ;
                else if( grade % 10 < 3 )
                    lettergrade += '-' ;
            }
        }
        cout << "�ȼ��ɼ��ǣ�" << lettergrade << endl;
    }
    return 0;
}
