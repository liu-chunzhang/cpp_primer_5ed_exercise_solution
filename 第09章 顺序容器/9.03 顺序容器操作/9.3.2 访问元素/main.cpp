// ������������֤�̲���9.3.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <forward_list>
#include <vector>
using namespace std;

int main() {
    vector<int> c = { 0 , 1 , 2 , 3 , 5 } ;
    forward_list<int> iflst = { 0 , 1 , 2 , 3 , 5 } ;

    if( !c.empty() ){
        int val = *c.begin() , val2 = c.front() ;         // �̲ĵ�һ�е�autoָ����int
        vector<int>::iterator last = c.end() ;           // �̲ĵڶ��е�autoָ����vector<int>::iterator
        int val3 = *(--last) ;
      //int val4 = iflst.back() ;
        int val5 = iflst.front() ;
    }

    if( !c.empty() ){
        c.front() = 42 ;
        int &v = c.back() ;                               // ���ָ�����һ��Ԫ�ص�����
        v = 1024 ;                                         // �ı���c�е�Ԫ�أ��˴�autoָ����������int
        int v2 = c.back() ;                               // v2����һ�����ã�����c.back()��һ������
        v2 = 0 ;                                           // û�ı�c�е�Ԫ��
        for( const int i : c )
            cout << i << " " ;
    }

    vector<string> svec ;
  //cout << svec[0] ;                                      // ����ʱ����svec��û��Ԫ�أ�
    cout << svec.at(0) ;                                  // �׳�һ��out_of_range�쳣
    return 0;
}
