// ������������֤��������ϰ16.41�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "promote.h"

int main() {
    cout << sum( numeric_limits<short int>::max() , numeric_limits<short int>::max() ) << endl;
    cout << sum( numeric_limits<unsigned short int>::max() , numeric_limits<unsigned short int>::max() ) << endl;
    cout << sum( numeric_limits<int>::max() , numeric_limits<int>::max() ) << endl;
    cout << sum( numeric_limits<unsigned int>::max() , numeric_limits<unsigned int>::max() ) << endl;
    cout << sum( numeric_limits<long int>::max() , numeric_limits<long int>::max() ) << endl;
    cout << sum( numeric_limits<unsigned long int>::max() , numeric_limits<unsigned long int>::max() ) << endl;
    cout << sum( numeric_limits<long long int>::max() , numeric_limits<long long int>::max() ) << endl;
    cout << sum( numeric_limits<unsigned long long int>::max() , numeric_limits<unsigned long long int>::max() ) << endl;
    cout << sum( numeric_limits<float>::max() , numeric_limits<float>::max() ) << endl;
    cout << sum( numeric_limits<double>::max() , numeric_limits<double>::max() ) << endl; // too large
    cout << sum( numeric_limits<long double>::max() , numeric_limits<long double>::max() ) << endl; // too large
    return 0 ;
}
