// ������������֤��������ϰ16.5�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
using namespace std;

template<typename Array> void print( const Array &arr ) ;

int main() {
    vector<int> ivec = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    print( ivec ) ;
    int arr[] = { 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 } ;
    print( arr ) ;
    return 0;
}

template<typename Array> void print( const Array &arr ) {
    for( const auto &i : arr )                               // ��ط���ֻ����auto���Ͼ�t��Ϊ�������ͱ���Ԫ�����;Ͳ�֪������ô�ƶ�i���ͣ�
        cout << i << " " ;
    cout << endl;
}

// ����趨����template<typename T, unsigned N> void print( const T(&)[N] )�Ļ�����ô��ʵֻ�ܹ������������顣������������array����ĵ��£��ⲻ��
// ���Ž⡣
