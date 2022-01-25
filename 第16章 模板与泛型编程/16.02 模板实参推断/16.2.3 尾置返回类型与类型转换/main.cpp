// ������������֤�̲���16.2.3�����ݵĿɿ��ԣ����ṩ������֪
#include "Blob.h"
#include <type_traits>

template <typename It> auto fcn( It beg , It ter ) -> decltype( *beg ) ;     // β�÷������������ڲ����б�֮��������������
template <typename It> auto fcn2( It beg , It ter ) -> typename remove_reference<decltype(*beg)>::type ;

int main() {
    vector<int> ivec = { 1 , 2 , 3 , 4 , 5 } ;
    int i = fcn( ivec.cbegin() , ivec.cend() ) ;                                   // fcn��ʱ����int&
    Blob<string> sblob = { "hi" , "bye" } ;
    string s = fcn( sblob.begin() , sblob.end() ) ;                                  // fcn��ʱ����string&
    cout << i << " " << s ;
    return 0;
}

template <typename It> auto fcn( It beg , It ter ) -> decltype( *beg ) {     // ��������
    return *beg ;                                                              // ���������е�һ��Ԫ�ص�����
}

template <typename It> auto fcn2( It beg , It ter ) -> typename remove_reference<decltype(*beg)>::type {
    return *beg ;
}
