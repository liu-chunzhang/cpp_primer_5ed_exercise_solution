// ������������֤��������ϰ3.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��������һ�������������Ǵ���һ��vector���󣬽�ÿ�����������ĺ�������õ�����ʵ�֣�
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec;
    int i = 0 ;
    cout << "�������������������������س���ȷ�����룬��Ctrl+C����ʾֹͣ��" << endl;
    while( cin >> i )
        ivec.push_back( i ) ;
    if( ivec.size() > 1 )
        for( vector<int>::iterator i = ivec.begin() ; i < ivec.end() - 1 ; i += 2 )
            cout << *i + *( i+1 ) << " " ;
    else{
        cerr << "��û��������������������" << endl;
        return -1;
    }
    return 0 ;
}
