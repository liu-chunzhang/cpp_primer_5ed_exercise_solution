// ������������֤��������ϰ2.10�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

string global_str ;
int global_int ;

int main() {
    string local_str ;
    int local_int ;
    cout << global_int << endl;      // ����string���͵ı�������Ϊstring���ͱ�������޲����ĳ�ʼ�����������Բ��۱��������ں����ڻ��Ǻ����⣬
    cout << local_int << endl;       // ����Ĭ�ϳ�ʼ��Ϊ�մ���������������int��˵������global_int���������к�����֮�⣬Ĭ�ϳ�ʼ��Ϊ0��������
    cout << global_str << endl;      // local_int������main�������ڲ�����������ʼ������Ȼû�������Ǹ����˾��棩���������ʩͼ���������δ
    cout << local_str << endl;       // ����ʼ���ı�����������һ��δ���������ֵ��
    return 0;
}
