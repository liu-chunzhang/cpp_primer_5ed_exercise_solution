// ������������֤��������ϰ2.38�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    int a = 3 ;
    auto c1 = a ;                                    // c1���ƶϽ�������ͱ�����
    decltype( a ) c2 = a ;                          // c2���ƶϽ�������ͱ���
    decltype(( a )) c3 = a ;                        // c3���ƶϽ������������
    cout << typeid( c1 ).name() << endl;
    cout << typeid( c2 ).name() << endl;
    cout << typeid( c3 ).name() << endl;
    ++c1 ;
    ++c2 ;
    ++c3 ;                                           // ����c3�����ȼ���a�������Ӷ���һ������������a��c1��c2��c3��ֵ����4
    cout << c1 << " " << c2 << " " << c3 << endl;

    const int d = 5 ;
    auto f1 = d ;                                    // f1���ƶϽ�������ͱ���
    decltype( d ) f2 = d ;                           // f2���ƶϽ�������ͳ���
    cout << typeid( f1 ).name() << endl;
    cout << typeid( f2 ).name() << endl;
    ++f1 ;
    ++f2 ;                                            // ����f2�����������ǷǷ���
    cout << f1 << " " << f2 << endl;
    return 0;
}
