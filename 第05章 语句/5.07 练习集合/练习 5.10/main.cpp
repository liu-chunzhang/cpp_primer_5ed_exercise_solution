// ������������֤��������ϰ5.10�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;
    char ch;
    while( cin >> ch ){
        switch(ch){
            case 'a' : case 'A' :
                ++aCnt ;
                break ;
            case 'e' : case 'E' :
                ++eCnt ;
                break;
            case 'i' : case 'I' :
                ++iCnt ;
                break;
            case 'o' : case 'O' :
                ++oCnt ;
                break;
            case 'u' : case 'U' :
                ++uCnt ;
                break;
         }
    }
    cout << "Ԫ����ĸa��A�������ǣ�" << aCnt << endl;
    cout << "Ԫ����ĸe��E�������ǣ�" << eCnt << endl;
    cout << "Ԫ����ĸi��I�������ǣ�" << iCnt << endl;
    cout << "Ԫ����ĸo��O�������ǣ�" << oCnt << endl;
    cout << "Ԫ����ĸu��U�������ǣ�" << uCnt << endl;
    return 0 ;
}
