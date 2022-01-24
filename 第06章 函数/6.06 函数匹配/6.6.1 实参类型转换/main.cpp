// 本程序用于验证教材中6.6.1节内容的可靠性，并提供感性认知
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
