// ������������֤��������ϰ10.37�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 } ;
    list<int> ilst ;
    copy( ivec.crbegin() + 2 , ivec.crend() - 3 , back_inserter( ilst ) ) ;   // �ɲο��̲�ͼ10.1��ͼ10.2�����Ϊ�����ѡ���ӡ�ĵ�����
    copy( ilst.cbegin() , ilst.cend() , ostream_iterator<int>( cout , " " ) ) ;
    return 0;
}
