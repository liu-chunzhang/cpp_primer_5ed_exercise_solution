// ������������֤��������ϰ10.4�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<double> ivec = { 0 , 1.1 , 2 , 3 , 4.6 , 5 , 6 , 7 , 8 , 9.5 } ;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 0 ) << endl;
    cout << accumulate( ivec.cbegin() , ivec.cend() , 0.0 ) << endl;
    return 0 ;
}

// accumulate�ĵ����������Ǻ͵ĳ�ֵ�����������˺����ķ������ͣ��Լ�������ʹ���ĸ��ӷ����������ˣ������еĵ����Ǵ���ģ�����������0��֪accumulate
// �����������ͱ�����ʹ�����ͼӷ������������Ĵ�ӡ���˵���������ص���һ����������ȷ�ĵ��÷���ʱ��0.0��Ϊ�������������ݸ�accumulate����ڶ�����ӡ
// ���
