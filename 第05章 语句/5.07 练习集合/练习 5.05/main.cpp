// ������������֤��������ϰ5.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;                                                   // �����Ǵ�5.3.1�ڳ��򿽱��������ο��𰸵ķ����ǳ��鷳��

int main() {
    const vector<string> scores{ "F" , "D" , "C" , "B" , "A" , "A++" } ;
    string lettergrade ;
    cout << "��������Ҫ�����ȼ��ĳɼ����벻Ҫ����100�֣�" << endl;
    unsigned grade = 0 ;
    cin >> grade ;
    if ( grade > 100 )                                                   // Ϊ�˱�֤��������������У���������һ���ж���䣬�����ų��������
        cout << "����ɼ�����100��������" << endl;                    // ����100������
    else{
        if( grade < 60 )                                                 // ���������ж��ǲ��ǲ����񣬶�������ο����������ж��ǲ������֣�
            lettergrade = scores[0] ;                                    // ��Ϊ��Ч�ʣ���ʵ���ϣ�������Ӧ��ԶС�ڲ����������ӷֲ��ϣ�������
        else{                                                            // ռ�е��ж���Ч�����������ִ�ö�
            lettergrade = scores[ ( grade - 50 ) / 10 ] ;
            if( grade != 100 ){                                         // �˴��������������Ҳû���⣬ֻ���������һ�����棬���˾�������
                if( grade % 10 > 7 )
                    lettergrade += '+' ;
                else if ( grade % 10 < 3 )
                    lettergrade += '-' ;
            }
        }
        cout << "�ȼ��ɼ��ǣ�" << lettergrade << endl;
    }
    return 0;
}
