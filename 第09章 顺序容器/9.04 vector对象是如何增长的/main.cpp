// ������������֤�̲���9.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // �˱�׼�����2^min�Ŀռ䣬����Ϊ���ڵ�ǰ�ռ��2��
    for( vector<int>::size_type ix = 0 ; ix != 24 ; ++ix )                               // ������������С��
        ivec.push_back( ix ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;

    ivec.reserve( 30 ) ;                                                                   // ��reserve���ڱ�׼������capacity��������Ҫ���
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // ��ռ䣬������capacity����
    ivec.reserve( 50 ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;

    while( ivec.size() != ivec.capacity() )                                               // ���Ԫ���ù���Ԥ���ռ�
        ivec.push_back( 0 ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;
    ivec.push_back( 42 ) ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // �����vector��ʵ�ֲ����ƺ�����ÿ����Ҫ�������ڴ�
                                                                                           // �ռ��Ͻ���ǰ����������
    ivec.shrink_to_fit() ;
    cout << " ivec: size:" << ivec.size() << " capacity:" << ivec.capacity() << endl;    // ��ǰ��׼��ȷʵ�˻��ڴ���
    return 0;
}
