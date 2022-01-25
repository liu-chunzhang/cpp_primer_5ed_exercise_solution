// ������������֤��������ϰ12.7�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <memory>                                                  // ���Ȼ���Ҫ����ͷ�ļ�<memory>
using namespace std;

void read( shared_ptr<vector<int>> ivec , istream &in ) ;
void print( shared_ptr<vector<int>> ivec ) ;

int main() {
    shared_ptr<vector<int>> ivec = make_shared<vector<int>>() ;
    read( ivec , cin ) ;
    print( ivec ) ;
    return 0;
}

void read( shared_ptr<vector<int>> ivec , istream &in ) {
    int i ;
    while( in >> i )
        ivec->push_back( i ) ;
}

void print( shared_ptr<vector<int>> ivec ){
    for( const int i : *ivec )                                  // �˴�������Ҫ������
        cout << i << " " ;
    cout << endl;
}
