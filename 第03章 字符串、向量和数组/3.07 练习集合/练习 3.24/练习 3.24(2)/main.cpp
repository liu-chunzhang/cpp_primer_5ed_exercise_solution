// ������������֤��������ϰ3.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��������һ�������������Ǵ���һ��vector���󣬽�ÿ����������������ĺ�������õ�����ʵ�֣�
#include <iostream>
#include <vector>
using namespace std;        // ��Ȿ��ʱӦ�ر�ע�������begin��end�ĺ��壬��������д�ɴ���

int main() {
    vector<int> vint;
    int i = 0 ;
    cout << "�������������������������س���ȷ�����룬��Ctrl+C����ʾֹͣ��" << endl;
    while( cin >> i )
        vint.push_back( i ) ;
    vector<int>::iterator ter = vint.end();
    if( vint.size() > 1 )
        for( vector<int>::iterator iter = vint.begin() ; iter < vint.begin() + ( ter - vint.begin() )/2 ; ++iter )
            cout << *iter + *( vint.begin() + ( ter - iter ) - 1 ) << " " << endl;
    else{
        cerr << "��û��������������������" << endl;
        return -1;
    }
    return 0 ;
}
