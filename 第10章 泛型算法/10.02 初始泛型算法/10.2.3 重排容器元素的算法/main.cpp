// ������������֤�̲���10.2.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elimDups( vector<string>& ) ;

int main() {
    vector<string> svec = { "the" , "quick" , "red" , "fox" , "jumps" , "over" , "the" , "slow" , "red" , "turtle" } ;
    for( const string &s : svec )
        cout << s << " " ;
    cout << endl;
    elimDups( svec ) ;
    for( const string &s : svec )
        cout << s << " " ;
    return 0;
}

void elimDups( vector<string>& words ){
    sort( words.begin() , words.end() ) ;                                                   // ���ֵ�������words���Ա�����ظ�����
    for( const string &i : words )
        cout << i << " " ;
    cout << endl;
    vector<string>::iterator end_unique = unique( words.begin() , words.end() ) ;        // unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
    for( const string &i : words )                                                         // �����ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��
        cout << i << " " ;                                                                  // λ�õĵĵ�����
    cout << endl;
    words.erase( end_unique , words.end() ) ;                                               // ʹ��vector����ɾ���ظ�����
}
