// 本程序用于验证读者在练习6.26中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main( int argc , char **argv ) {   
    for( int i = 0 ; i != argc ; ++i )
        cout << "argv[" << i << "]:" << argv[i] << endl;
    system( "pause" ) ;
    return 0;
}
