// ������������֤�̲���9.2.0�����ݵĿɿ��ԣ����ṩ������֪
#include <list>                             // ÿ��������������һ���ļ����У��ļ�������������ͬ
#include <deque>                            // ����������Ϊģ����
#include <vector>
#include "noDefault.h"

int main() {
    list<int> ilst ;
    deque<double> ddeque ;
    vector<vector<string>> ssvec ;

  //vector<noDefault> nDvec1( 10 ) ;        // ���󣺱����ṩһ��Ԫ�س�ʼ����
    vector<noDefault> nDvec2( 10 , 4 ) ;   // ��ȷ���ṩ��һ��Ԫ�س�ʼ����
    return 0;
}
