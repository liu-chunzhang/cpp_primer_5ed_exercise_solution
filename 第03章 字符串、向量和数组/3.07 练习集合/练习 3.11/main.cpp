// ������������֤��������ϰ3.11�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    const string s = "Keep out!";
    for( auto &c : s )
        c = 'x' ;                              // ���﷨�������Ϸ������ǲ��ܹ���ȷ���롣��Ϊ�������ò��ܹ����ڸı����ó�����ֵ��
    cout << s << endl;                        // ������ֻ����ֻ���������ǺϷ��ġ�
    return 0;
}
