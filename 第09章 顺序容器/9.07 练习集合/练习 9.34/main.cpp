// ������������֤��������ϰ9.34�е��뷨�����ڱ�Ҫ�ĵط�����˵�������˵������ԭʼ�汾�����ڲ鿴��������ȷ��
#include <iostream>
#include <vector>
using namespace std;

int main() {                                                           // �����ǽ�++iter����ѭ���壬����Ȼ�Ǵ���ģ���������Ϊ�ջ����ż����
    vector<int> ivec = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;         // ���������Ȼ��������ѭ����ԭ���ǣ�������������ʱ��ִ��insert����ֵ
    vector<int>::const_iterator iter = ivec.cbegin() ;               // ���뵽��Ԫ��֮ǰ��������ָ����Ԫ�صĵ���������iter���ٵ���iter����
    string tmp ;                                                       // ʱiter��ָ���Ԫ�ء�����ִ���Ի��ظ��ż������裬����������ѭ������
    while( iter != ivec.cend() ){                                      // ȷ�ĳ���Ӧ���ǽ�++iter����ѭ���壬������һ��++iter���籾������ʾ��
        if( *iter & 1 ){                                               // ��iterָ������֮���Ԫ��
            iter = ivec.insert( iter , *iter ) ;
            ++iter ;
        }
        ++iter ;
        for( const int i : ivec )                                      // ��һ��Ч��ͬǰ�������Ľ����Ҫ��ִ�м������루����������10�Σ�
            cout << i << " " ;
        cout << endl;
        cin >> tmp ;
    }
    return 0;
}
