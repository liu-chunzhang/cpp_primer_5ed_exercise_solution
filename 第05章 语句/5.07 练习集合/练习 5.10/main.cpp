// 本程序用于验证读者在练习5.10中的想法，并在必要的地方予以说明
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
    cout << "元音字母a和A的数量是：" << aCnt << endl;
    cout << "元音字母e和E的数量是：" << eCnt << endl;
    cout << "元音字母i和I的数量是：" << iCnt << endl;
    cout << "元音字母o和O的数量是：" << oCnt << endl;
    cout << "元音字母u和U的数量是：" << uCnt << endl;
    return 0 ;
}
