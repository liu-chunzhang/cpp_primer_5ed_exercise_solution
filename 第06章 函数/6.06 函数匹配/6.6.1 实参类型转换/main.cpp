// ������������֤�̲���6.6.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

void ff( int i ) ;
void ff( short i ) ;

int main()
{   ff( 3 ) ;
    ff( short( 3 ) ) ;
    return 0;
}

void ff( int i ){
    cout << "ff( int " << i << " )" << endl;
}

void ff( short i ){
    cout << "ff( short " << i << " )" << endl;
}
