// ������������֤��������ϰ9.38�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec ;
    for( size_t i = 1 ; i != 6 ; ++i ){
        for( vector<int>::size_type s = ivec.size() , c = ivec.capacity() ; s <= c ; ++s )
            ivec.push_back( 1 ) ;
        cout << "�ռ䣺" << ivec.capacity() << "Ԫ������" << ivec.size() << endl;
    }
    return 0;
}

// ��ӡ���˵������ǰ�ı������ɱ���������ռ�
