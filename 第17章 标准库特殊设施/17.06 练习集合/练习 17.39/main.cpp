// ������������֤��������ϰ17.39�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;        // �������ǿ���17.5.3�ڴ��룬ֻ��ɾȥע�Ͳ������Ķ�

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
