// ������������֤��������ϰ3.25�е��뷨�����ڱ�Ҫ�ĵط�����˵�����õ�����ʵ��3.3.3�ڻ��ַ�����
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<unsigned> uvec , scores( 11 , 0 ) ;                                    // uvec�������������scores��������������ε���
    int i = 0 ;                                                            // i�����н�����ķ�����k��Ϊ���շ����ν����ݷֿ���ƾ��
    cout << "������һ����Ҫ�����ķ�����" << endl;
    while( cin >> i )
        if( i > 101 )                                                              // �ɼ�Ӧ�ں���Χ֮��
           cout << "������������" << endl;
        else
           uvec.push_back( i ) ;
    cout << "���ܹ�������" << uvec.size() << "��������" << endl;

    for( vector<unsigned>::const_iterator j = uvec.cbegin() ; j != uvec.cend() ; ++j ){ // ���õ��������������Ѵ���ķ���
        unsigned k = ( *j )/10 ;
        ++scores[k] ;
    }

    i = 0 ;
    for( unsigned q : scores ){
        if( i != 10 )
           cout << "��" << 10*i << "~" << 10*(i+1)-1 << "��Χ��,��" << q << "��������" << endl;
        else
           cout << "100����" << q << "����" << endl;
        ++i ;
    }
    return 0;
}
