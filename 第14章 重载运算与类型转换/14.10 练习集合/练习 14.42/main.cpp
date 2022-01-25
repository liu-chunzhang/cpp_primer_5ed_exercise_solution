// ������������֤��������ϰ14.42�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>
using namespace std;
using std::placeholders::_1 ;                                                                        // ��Ԫ������Ҫռλ��

int main() {
    /* (a) */
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 1024 , 2048 , 4096 } ;
    ostream_iterator<int> os( cout , " " ) ;                                                       // �����������������Ҫ����Ϸ����㷨
    size_t i = count_if( ivec.cbegin() , ivec.cend() , bind( greater<int>() , _1 , 1024 ) ) ;        // �˴�ʹ��bind�������̲�P354��
    cout << i << endl;                                                                              // �˴���ӡivec�����1024��ֵ����Ŀ
    /* (b) */
    vector<string> svec = { "pooh" , "pooh" , "welcome" , "to" , "C++" , "pooh" , "family" } ;
    vector<string>::const_iterator iter = find_if( svec.cbegin() , svec.cend() , bind( not_equal_to<string>() , _1 , "pooh" ) ) ; // �ؼ���bind��ռλ����Ӧ��
    cout << *iter << endl;                                                                           // ��ӡ�鿴�������
    /* (c) */
    copy( ivec.cbegin() , ivec.cend() , os ) ;                                                      // �����ǰivec����Ԫ��
    cout << endl;
    transform( ivec.begin() , ivec.end() , ivec.begin() , bind( multiplies<int>() , _1 , 2 ) ) ;  // transform�Ǽ�д��д�㷨�����bind
    copy( ivec.cbegin() , ivec.cend() , os ) ;                                                      // �����ǰivec����Ԫ����Ϊ����
    return 0;
}
