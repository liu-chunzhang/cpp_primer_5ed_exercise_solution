// ������������֤�̲���5.3.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    /*
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;
    char ch ;
    while( cin >> ch ){
         switch( ch ){
            case 'a' :
                ++aCnt ;
                break ;
            case 'e' :
                ++eCnt ;
                break;
            case 'i' :
                ++iCnt ;
                break;
            case 'o' :
                ++oCnt ;
                break;
            case 'u' :
                ++uCnt ;
                break;
         }
    }
    cout << "Ԫ����ĸa�������ǣ�" << aCnt << endl;
    cout << "Ԫ����ĸe�������ǣ�" << eCnt << endl;
    cout << "Ԫ����ĸi�������ǣ�" << iCnt << endl;
    cout << "Ԫ����ĸo�������ǣ�" << oCnt << endl;
    cout << "Ԫ����ĸu�������ǣ�" << uCnt << endl;                                        // ֻ����һ��e�������0 1 0 0 0
    */

    /*
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 ;                       // ����˵��©дbreak������ȱ��
    char ch;
    while(cin >> ch){
         switch(ch){
            case 'a' :
                ++aCnt ;
            case 'e' :
                ++eCnt ;
            case 'i' :
                ++iCnt ;
            case 'o' :
                ++oCnt ;
            case 'u' :
                ++uCnt ;
         }
    }
    cout << "Ԫ����ĸa�������ǣ�" << aCnt << endl;
    cout << "Ԫ����ĸe�������ǣ�" << eCnt << endl;
    cout << "Ԫ����ĸi�������ǣ�" << iCnt << endl;
    cout << "Ԫ����ĸo�������ǣ�" << oCnt << endl;
    cout << "Ԫ����ĸu�������ǣ�" << uCnt << endl;                                        // ֻ����һ��e�������0 1 1 1 1
    */

    /*
    unsigned vowelCnt = 0 , otherCnt = 0 ;                                                // ����˵��switch�ڲ��Ŀ�������default���ô�
    char ch;
    while( cin >> ch ){
         switch( ch ){
            case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
               ++vowelCnt ;
               break ;
            default:
               ++otherCnt;
               break;
         }
    }
    cout << vowelCnt << " " << otherCnt << endl;
    */

    /*
    bool flag = false ;
    switch(flag){                                                        // ��Ϊswitch��û�е�������������޶�����ival������
        case true:                                                       // ���ڣ����Ա������������ǳ�ʼ����switch���Ľ�β
            string file_name ;                                           // �����޸ķ��������֣�
            int ival = 0 ;                                               // 1.����С�����򡿽�case 1�Ĵ�����{}���������趨��
            int jval ;                                                   // �������������򣬱��ⱻ����case���ʣ�
            break;                                                       // 2.�����������򡿽���������switch���֮ǰ��ʹ����
        case false:                                                      // ÿ��case�����Է�����
            int jval = 3 ;
            string file_name ;
            if( file_name.empty() )
               cout << jval ;
            break;
        }
    */
    return 0;
}
