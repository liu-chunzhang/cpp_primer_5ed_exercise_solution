// ������������֤�̲���18.2.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

namespace blip{
    int i = 16 , j = 15 , k = 23 ;
}

int j = 0 ;

void manip() ;

int main() {
    manip() ;
    cout << blip::i << " " << blip::j << " " << blip::k << endl;
    return 0;
}

void manip() {
    using namespace blip ;  // usingָʾ��blip�е����ֱ�����ӡ���ȫ����������
    ++i ;                    // ��blip::i�趨Ϊ17
  //++j ;                    // �����Դ�����ȫ�ֵ�j����blip::j��
    ++::j ;                  // ��ȷ����ȫ�ֵ�j�趨Ϊi
    ++blip::j ;              // ��ȷ����blip::j�趨Ϊ16
    int k = 97 ;             // ��ǰ�ֲ���k������blip::k
    ++k ;                    // ����ǰ�ֲ���k�趨Ϊ98
}
