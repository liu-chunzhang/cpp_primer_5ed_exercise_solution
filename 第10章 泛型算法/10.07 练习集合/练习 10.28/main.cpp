// ������������֤��������ϰ10.28�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <list>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    list<int> ilst1 , ilst2 , ilst3 ;
    copy( ivec.cbegin() , ivec.cend() , inserter( ilst1 , ilst1.begin() ) ) ;
    copy( ivec.cbegin() , ivec.cend() , back_inserter( ilst2 ) ) ;
    copy( ivec.cbegin() , ivec.cend() , front_inserter( ilst3 ) ) ;                // ����vector��֧��push_front������ͳһʹ����list��Ϊ����
    copy( ilst1.cbegin() , ilst1.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    copy( ilst2.cbegin() , ilst2.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    copy( ilst3.cbegin() , ilst3.cend() , ostream_iterator<int>( cout , " " ) ) ; cout << endl;
    return 0;
}

// ������Ŀ������Ϊ�գ�����Ȼinserter��back_inserter����������"1 2 3 4 5 6 7 8 9 "����front_inserter�Ľ����"9 8 7 6 5 4 3 2 1 "����Ŀ������
// ���գ���inserter�Ľ����ȡ���ڴ������ʼ��������λ�á�
