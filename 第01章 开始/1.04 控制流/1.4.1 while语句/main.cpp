// ������������֤�̲���1.4.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

int main() {
    int sum = 0 , val = 1;
    while ( val <= 10 ){                            // ֻҪval��ֵС�ڵ���10��whileѭ���ͻ����ִ��
        sum += val ;                                // ��sum + val ����sum
        ++val ;                                     // val����(��val��1)
    }
    cout << "��Ȼ��1�ӵ�10�ĺ�Ϊ" << sum << "��" << endl;
    return 0;
}
