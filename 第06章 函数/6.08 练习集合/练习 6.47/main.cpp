// ������������֤��������ϰ6.47�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>                               // �򿪵�����ʱ��ÿ�εݹ����print�������������vector<string>������ܴ�СΪ4�����رյ�����ʱ��
using namespace std;                          // ����ֻ���vector��������ݣ�����������С��

void add_string( vector<string> s , unsigned index ) ;

int main() {
    vector<string> svec{ "Hello" , " " , "world" , "!" } ;
    add_string( svec , 0 ) ;
    system( "pause" ) ;
    return 0;
}

void add_string( vector<string> s , unsigned index ) {   // �籾��������������NDEBUG�꣺NDEBUG0��NEDBUG1�������Գ�����ж��NDEBUG������
    if( index != s.size() && !s.empty() ){
        #ifndef NDEBUG0
            cout << "��ε��õĶ���Ĵ�СΪ" << s[index].size() << ": ";
        #endif // NDEBUG0
        #ifndef NDEBUG1
            cout << s[index] << endl;
        #endif // NDEBUG1
        add_string( s , ++index ) ;
    }
}
