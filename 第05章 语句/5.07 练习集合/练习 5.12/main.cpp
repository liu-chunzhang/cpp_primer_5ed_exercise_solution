// ������������֤��������ϰ5.12�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;                                           // �����趨��һ���ַ�������ͳ��һ�Σ�

int main() {
    unsigned ffCnt = 0 , flCnt = 0 , fiCnt = 0 ;
    char ch ;
    vector<char> cvec ;
    while( cin.get( ch ) )
         cvec.push_back( ch ) ;
    for( vector<char>::const_iterator citer = cvec.cbegin() ; citer != cvec.cend() - 1 ; ++citer ){
        if( *citer == 'f' )
            switch( *( citer + 1 ) ){
                case 'f' :
                    ++ffCnt ; ++citer ; break ;
                case 'i' :
                    ++fiCnt ; break ;
                case 'l' :
                    ++flCnt ; break ;
            }
    }
    cout << "ff���ֵĴ����ǣ�" << ffCnt << endl;
    cout << "fl���ֵĴ����ǣ�" << flCnt << endl;
    cout << "fi���ֵĴ����ǣ�" << fiCnt << endl;
    return 0;
}
