// ������������֤��������ϰ4.31�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;                                                         // �����н����˵��ʹ��ǰ�ð汾��ʹ�ú��ð汾ûʲô����

int main() {
    vector<int> ivec(10) ;                                                    // ������Ϊ�����ݼ������������ʹ�����������������λ�ڲ�ͬ�ı��ʽ
    vector<int>::size_type cnt = ivec.size() ;                               // �У����Բ�����ʲôӰ��
    for( vector<int>::size_type ix = 0 ; ix != ivec.size() ; ix++, cnt-- ){ // ֻ�轫forѭ�����ĵ����и�Ϊ���ð汾���У������������
        ivec[ix] = cnt ;                                                       // ��Ҫ��ʹ�ú��ð汾�����ĸ���ֵ���ڱ������в�����ʹ�ã�����˷ѣ�
        cout << ivec[ix] << " " ;                                             // ���Ծͱ�����ԣ�ʹ��ǰ�ð汾����õ�ѡ��
    }
    return 0;
}
