// ������������֤��������ϰ10.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char *p[] = { "Hello" , "world" , "!" } , *q[] = { strdup( p[0] ) , strdup( p[1] ) , strdup( p[2] ) } , *r[] = { p[0] , p[1] , p[2] } ;                                  //
    cout << equal( begin( p ) , end( p ) , q ) << endl;
    cout << equal( begin( p ) , end( p ) , r ) << endl;
    return 0;
}

// equalʹ��==������Ƚ����������е�Ԫ�ء�string������==���ɱȽ����ַ����Ƿ񳤶����������Ԫ�ض�Ӧλ����ȡ���C����ַ����ı�����char*������==
// ȥ�Ƚ�����char*����ֻ�Ǽ������ָ��ֵ�Ƿ���ȣ�����ַ�Ƿ���ȣ�������Ƚ������ַ��Ƿ���ͬ�����ԣ�ֻ�е����������е�ָ�붼ָ����ͬ�ĵ�ַʱ��
// equal�Ż᷵��true������ʹ�ַ���������ȫ��ͬҲ�᷵��false��
// strdup������c�����г��õ�һ���ַ��������⺯����һ���free�����ɶԳ��֡�������Ҫʹ��ͷ�ļ�<cstring>��<string.h>��ԭ����
//                                                  extern char *strdup(char *s);
// �����ǽ����������½���λ�ô���strdup()���ڲ�������malloc()Ϊ���������ڴ棬����Ҫʹ�÷��ص��ַ���ʱ����Ҫ��free()�ͷ���Ӧ���ڴ�ռ䣬�������
// ���ڴ�й©��
