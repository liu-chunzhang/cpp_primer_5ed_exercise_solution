// ������������֤�̲���3.5.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    unsigned scores[11] = {} , grade ;      // 11�������Σ�ȫ����ʼ��Ϊ0
    while( cin >> grade )
        if( grade <= 100 )
            ++scores[grade/10] ;             // ��ǰ�����εļ���ֵ+1
    for( unsigned u : scores )              // ����scores�е�ÿ������ֵ
        cout << u << " " ;                  // �����ǰ�ļ���ֵ
    return 0;
}
