// ������������֤��������ϰ13.31�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "HasPtr.h"
#include <vector>
#include <fstream>                                             // ʹ���ļ���������Ϊ����������Ч��
#include <algorithm>

int main() {
    size_t u = 20 ;
    vector<HasPtr> hvec ;
    ifstream in( "data.txt" ) ;
    string str ;
    for( unsigned i = 0 ; in >> str && i != u ; ++i )
        hvec.push_back( str ) ;
    for( const HasPtr &h : hvec )
        cout << *h << " " ;
    cout << endl;
    sort( hvec.begin() , hvec.end() ) ;
    for( const HasPtr &h : hvec )
        cout << *h << " " ;
    cout << endl;
    return 0;
}

// ���Գ��Ե���ѭ���������鿴�������ѡ������10��15��16��17��20��30��50���ᷢ������������ͬ��ԭ������dm-gcc8.1.0��STLʵ���У���Ԫ����������
// 16ʱ��sortʹ�õ��ǲ��������㷨����δʹ��swap����Ԫ�أ��������ڴ��������Ƭ�ƶ�����Ԫ������С��17ʱ��sort������swap�����õ��ǿ������򣬾�����
// �ˣ�������Ԫ�صĴ����Կ��ܱ�Ԥ��ʹ�ÿ��������٣�ԭ������������лָ������Ȳ�����16������ת��������򣬶���������ݹ鵽�����г���Ϊ1��
// �˴��ܹ�ʹ��const����������ΪHasPtr���Զ���Ľ����ò����涨��thisָ���ǳ���ָ�룬��һ�������Ѿ������˳����汾�����Կ���ʹ��const����������ֻ
// ����û��const�İ汾��
