// ������������֤�̲���3.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using std::cin;                            // using������������ʹ������cinʱ���������ռ�std�л�ȡ��
// using namespace::std;                    // ��ʵ��ǰ�漸�����г����õ���һ�д�����usingָʾ������һ����using������usingָʾ����ϸ���ݼ�
                                            // �̲�P702�ġ�usingָʾ��һ�ڡ�Ϊ��͹��using��������������������ȥ��һ��

int main() {
    int i ;
    cin >> i ;                              // ��ȷ��cin��std::cin������ͬ
    cout << i ;                             // ����û�ж�Ӧ��using����������ʹ������������
    std::cout << i;                        // ��ȷ����ʽ�ش�std��ʹ��cout
    return 0;
}
