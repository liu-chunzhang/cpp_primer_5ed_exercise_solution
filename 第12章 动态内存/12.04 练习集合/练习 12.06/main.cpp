// ������������֤��������ϰ12.6�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

void read( vector<int> &ivec , istream &in ) ;
void print( vector<int> &ivec ) ;

int main() {
    vector<int> *ivec = new ( nothrow ) vector<int>() ;
    read( *ivec , cin ) ;
    print( *ivec ) ;
    delete ivec ;                                   // �ͷŵ���̬�ڴ�ָ��
    return 0;
}

void read( vector<int> &ivec , istream &in ){      // ���ոմ����Ķ�̬ivec����read��������ȡ��׼���룬�����Ա���
    int i ;
    while( in >> i )
        ivec.push_back( i ) ;
}

void print( vector<int> &ivec ){                   // ��ӡ�����vector
    for( const int i : ivec )
        cout << i << " " ;
    cout << endl;
}

// ֱ���ڴ����Ĺؼ���˭�������ڴ��Ҫ�ǵ��ͷš����������У����������÷��亯���ڶ�̬�ڴ�ռ��д�����int��vector������ڶ������ݡ���ӡ����֮��
// ������Ӧ�����ͷ�vector����
