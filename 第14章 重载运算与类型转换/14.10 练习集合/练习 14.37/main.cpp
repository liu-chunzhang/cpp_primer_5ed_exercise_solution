// ������������֤��������ϰ14.37�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <algorithm>
#include <vector>
#include "doublecompare.h"

int main() {
    vector<double> dvec = { 1 , 2 , 3 , 7 , 3 , 3.2 , 4 , 5 } ;
    replace_if( dvec.begin() , dvec.end() , doublecompare( 3 ) , 6 ) ;  // ������dcmp����������һԪν�ʣ�����dcmp(3)�Ѿ�����Ϊ������������ν��
    for( const double d : dvec )                                        // ��ӡ�������ȷ���������ȷ��
        cout << d << " " ;
    return 0;
}
