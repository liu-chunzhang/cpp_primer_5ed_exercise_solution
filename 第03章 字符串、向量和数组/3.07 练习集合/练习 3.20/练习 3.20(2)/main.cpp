// ������������֤��������ϰ3.20�е��뷨�����ڱ�Ҫ�ĵط�����˵��������һ�������������Ǵ���һ��vector���󣬽�ÿ��˳�������������ĺ����
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vint;
    int i = 0 ;
    cout << "�������������������������س���ȷ�����룬��Ctrl+C����ʾֹͣ��" << endl;
    while( cin >> i )
        vint.push_back( i ) ;
    if( vint.size() > 1 )
        for( unsigned i = 0 ; i < vint.size()/2; ++i )
            cout << vint[i] + vint[vint.size()-i-1] << " " ;
    else
        cout << "��û��������������������" << endl;
    return 0;
}
