// ������������֤�̲���3.4.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    string text{ "abcdeghjlmnorstvyz" } ;
    string::const_iterator beg = text.cbegin() , ter = text.cend() , mid = text.cbegin() + ( ter - beg ) / 2 ;
    char sought = 'e' ;
    while( mid != ter && *mid != sought ){
        if( sought < *mid )
            ter = mid ;
        else
            beg = mid + 1 ;
        mid = beg + ( ter - beg ) / 2 ;
    }
    cout << mid - text.cbegin() << endl;
    return 0;
}
