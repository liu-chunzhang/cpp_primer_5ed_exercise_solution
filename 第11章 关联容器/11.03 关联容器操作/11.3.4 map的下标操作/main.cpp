// ������������֤�̲���11.3.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,size_t> word_count ;
    word_count["Anna"] = 1 ;                 // ����һ���ؼ���ΪAnna��Ԫ�أ�����ֵ����ֵ��ʼ����Ȼ��1������
    cout << word_count["Anna"] << endl;     // ��Anna��Ϊ�±���ȡԪ�أ����ӡ��1
    ++word_count["Anna"] ;                   // ��ȡԪ�ز�����1
    cout << word_count["Anna"] << endl;     // ��ȡԪ�ز���ӡ�������ӡ��2
    return 0;
}
