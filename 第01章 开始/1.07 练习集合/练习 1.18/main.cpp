// ������������֤��������ϰ1.18�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int currVal = 0 , val = 0 ;
    if( cin >> currVal ){
        int cnt = 1 ;
        while( cin >> val ){
            if( val == currVal )
                ++cnt ;
            else{
                cout << currVal << " occurs " << cnt << " times." << endl;
                cnt = 1 , currVal = val ;
            }
        }
        cout << currVal << " occurs " << cnt << " times." << endl;
    }
    else
        cout << "No integer data was entered." << endl;
    return 0;
}
