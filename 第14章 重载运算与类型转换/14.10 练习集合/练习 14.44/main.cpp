// ������������֤��������ϰ14.44�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <map>
#include <functional>
using namespace std;

int main() {
    double i , j ;
    string f ;
    map<string,function<double(double,double)>> binops = { { "+" , plus<double>() } , { "-" , minus<double>() } , { "*" , multiplies<double>() } , { "/" , divides<double>() } } ;
    cin >> i >> f >> j ;
    cout << binops[ f ]( i , j ) << endl;
    system( "pause" ) ;
    return 0;
}

// ���ڸ���������û��ȡģ���㣬���Բ������������
