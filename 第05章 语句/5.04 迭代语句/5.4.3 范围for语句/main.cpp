// ������������֤�̲���5.4.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec{ 0 , 1, 2 , 3 ,4 , 5 , 6 , 7 , 8, 9 } ;
    for( int &r : ivec )                                       // �˴���auto��int�����ǿ��Եģ�����һ�㣬Ϊ�˸�д��ֵ�����������α���
        r *= 2 ;
    return 0;
}
