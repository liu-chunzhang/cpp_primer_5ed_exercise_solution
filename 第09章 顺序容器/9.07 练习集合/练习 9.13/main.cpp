// ������������֤��������ϰ9.13�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<int> ilst = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<double> dvec( ilst.cbegin() , ilst.cend() ) ;
    vector<int> ivec = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    vector<double> dvec2( ivec.cbegin() , ivec.cend() ) ;
    for( const double i : dvec )
        cout << i << " " ;
    cout << endl;
    for( const double i : dvec2 )
        cout << i << " " ;
    return 0;
}

// ����list<int>��vector<double>�ǲ�ͬ���������ͣ�����޷���������������ʼ����ʽ������ǰ�ߵ�Ԫ��������int������ߵ�Ԫ������double���ݡ����
// ���Բ��÷�Χ��ʼ����ʽ������һ��vector<double>��������Ԫ��ֵ��list<int>��ȫ��ͬ����vector<int>Ҳ��ͬ����˼·��
