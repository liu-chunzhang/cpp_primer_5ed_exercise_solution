// 本程序用于验证读者在练习6.25中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main( int argc , char **argv ) {
    string str ;
    for( int i = 1 ; i != argc ; ++i )
        str += argv[i] ;
    cout << str << endl;
    system( "pause" ) ;
    return 0;
}
