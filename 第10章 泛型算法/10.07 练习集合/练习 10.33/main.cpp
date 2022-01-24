// ������������֤��������ϰ10.33�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <fstream>
#include <iterator>
using namespace std;

void partitionOddAndEven( ifstream &in , ofstream &odd , ofstream &even ) ;

int main() {
    ifstream infile( "int data.txt" ) ;
    ofstream oddfile( "odd data.txt" ) , evenfile( "even data.txt" ) ;
    partitionOddAndEven( infile , oddfile , evenfile ) ;
    return 0;
}

void partitionOddAndEven( ifstream &in , ofstream &odd , ofstream &even ) {
    istream_iterator<int> initer( in ) , eof ;
    ostream_iterator<int> odditer( odd , " " ) , eveniter( even , " " ) ;
    while( initer != eof )
        if( *initer & 1 )
            odditer++ = *initer++ ;
        else
            eveniter++ = *initer++ ;
}
