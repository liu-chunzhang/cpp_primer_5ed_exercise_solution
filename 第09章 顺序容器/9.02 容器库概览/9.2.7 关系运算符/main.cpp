// ������������֤�̲���9.2.7�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include "Sales_data.h"
using namespace std;

int main() {
    vector<int> v1 = { 1 , 3 , 5 , 7 , 9 , 12 } ;
    vector<int> v2 = { 1 , 3 , 9 } ;
    vector<int> v3 = { 1 , 3 , 5 , 7 } ;
    vector<int> v4 = { 1 , 3 , 5 , 7 , 9 , 12 } ;
    if( v1 < v2 )
        cout << " v1 < v2 " << endl;    // true��v1��v2��Ԫ��[2]����ͬ����v1[2] < v2[2]
    if( v1 < v3 )
        cout << " v1 < v3 " << endl;    // false������Ԫ�ض���ȣ�����v3��Ԫ�ظ��١�
    if( v1 == v4 )
        cout << " v1 == v4" << endl;    // true��ÿ��Ԫ�ض���ȣ��Ҵ�С��ͬ
    if( v1 == v2 )
        cout << " v1 == v2 " << endl;   // false��v2��Ԫ����ĿС��v1

    vector<Sales_data> storeA , storeB ;
    if( storeA < storeB )
        cout << " storeA < storeB " << endl;    // ����Sales_dataû�ж���<�����
    return 0;
}
