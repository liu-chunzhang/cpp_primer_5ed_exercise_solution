// ������������֤��������ϰ5.17�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec1{ 0 , 3 , 1 , 2 } , ivec2{ 0 , 1 , 1 , 2 , 3 , 5 , 8 } ;   // ����ͨ����������ĳ�ʼ��vector�����жϳ����Ƿ������������
    if( ivec1.size() < ivec2.size() ){
        if( mismatch( ivec1.cbegin() , ivec1.cend() , ivec2.cbegin() ).first == ivec1.cend() )
            cout << "vector1������vector2��ǰ׺��" << endl;
        else{
            cerr << "vector1��Ȼ�̣������޷���vector2��ǰ׺��" << endl;
            return -1 ;
        }
    }
    else{
        if( mismatch( ivec2.cbegin() , ivec2.cend() , ivec1.cbegin() ).first == ivec2.cend() )
            cout << "vector2������vector1��ǰ׺��" << endl;
        else{
            cerr << "vector2��Ȼ�̣������޷���vector1��ǰ׺��" << endl;
            return -1 ;
        }
    }
    return 0 ;
}
