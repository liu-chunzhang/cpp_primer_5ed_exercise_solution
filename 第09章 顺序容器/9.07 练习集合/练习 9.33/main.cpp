// ������������֤��������ϰ9.33�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec = { 0 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 } ;  // ����������ص����������⣬�Ʊ���֤
    vector<int>::const_iterator sta = ivec.cbegin() ;
    while( sta != ivec.cend() ){
        ++sta ;
        ivec.insert( sta , 42 ) ;
        ++sta ;
    }
    for( const int i : ivec )
        cout << i << " " ;
    return 0;
}

// �����vector�в�����Ԫ�أ��Ҵ洢�ռ䱻���·��䣬��ԭ�е���������ʧЧ����˲���insert���صĵ���������sta�����ʹstaʧЧ������ʹ��sta�ᵼ�³���
// �������Դ˳�����ԣ�����β��������Ͳ���sta��ֵ�������������һ�ͻ�ʹ�ó��������
