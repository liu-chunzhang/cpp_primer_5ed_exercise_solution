// ������������֤�̲���1.4.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main(){
    int currVal = 0 , val = 0 ;                                                // currVal����������ͳ�Ƶ��������ǽ��������ֵ����val��
    if( cin >> currVal ){                                                     // ��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
        int cnt = 1 ;                                                          // cnt���ڱ����������ڴ���ĵ�ǰֵ�ĸ���
        while( cin >> val )                                                   // ��ȡʣ�����
            if( val == currVal )                                               // ���ֵ��ͬ
                ++cnt ;                                                        // ��cnt����
            else{
                cout << currVal << " occurs " << cnt << " times." << endl;    // ���򣬴�ӡǰһ��ֵ���ֵĸ���
                cnt = 1 , currVal = val ;                                      // ���ü������󲢼�ס��ֵ
            }                                                                  // whileѭ�����������
        cout << currVal << " occurs " << cnt << " times." << endl;            // ��ӡ�ļ��е����һ��ֵ�ĸ���
    }                                                                          // ������if������������
    else
        cout << "No integer data was entered." << endl;                       // ��û�����ݿ��Դ�����������Ľ��
    return 0;
}
