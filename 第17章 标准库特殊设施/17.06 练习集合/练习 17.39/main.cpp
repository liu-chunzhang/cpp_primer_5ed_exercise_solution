// 本程序用于验证读者在练习17.39中的想法，并在必要的地方予以说明
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;        // 基本就是拷贝17.5.3节代码，只是删去注释并略作改动

int main()
{   fstream inOut( "data.dat" , fstream::ate | fstream::in | fstream::out | fstream::binary ) ;
    if( !inOut ){
        cerr << "Unable to open file!" << endl;
        return -1 ;
    }
    fstream::pos_type end_mark = inOut.tellg() ;
    inOut.seekg( 0 , fstream::beg ) ;
    size_t cnt = 0 ;
    string line ;
    while( inOut.tellg() != end_mark && getline( inOut , line ) ){
        cnt += line.size() ;
        fstream::pos_type mark = inOut.tellg() ;
        inOut.seekp( 0 , fstream::end ) ;
        inOut << cnt ;
        if( mark != end_mark )
            inOut << " " ;
        inOut.seekg( mark ) ;
    }
    inOut.seekp( 0 , fstream::end ) ;
    inOut << "\n" ;
    return 0;
}
