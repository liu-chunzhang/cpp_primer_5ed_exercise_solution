// ������������֤��������ϰ9.51�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "date.h"

int main() {
    string dates[] = { "March 14 2020" , "2/29/2020" , "Dec 25 1998" } ;
    try{
        for( date ds : dates ){
            date dl( ds ) ;
            cout << dl;
        }
    }catch( invalid_argument &e ){
        cout << e.what() << endl;
    }
    return 0;
}
