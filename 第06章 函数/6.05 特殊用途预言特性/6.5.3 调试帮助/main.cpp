// ������������֤�̲���6.5.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <cassert>              // <cassert>�ǵ���assert������ͷ�ļ���
using namespace std;

void print( const int ia[] , size_t size0 ) ;

int main() {
    assert( 10 ) ;                                                       // ���ڶ�����NEDBUG������assertʲôҲ����
    string word( "Hello" ) ;
    constexpr unsigned threshold = 20 ;
    if( word.size() < threshold )
        cerr << "Error: " << __FILE__  << " : in function "              // __FILE__����ļ������ַ�������ֵ
              << __func__ << " at line " << __LINE__ << endl             // __LINE__��ŵ�ǰ�кŵ���������ֵ
              << "\tCompiled on " << __DATE__ << " at " << __TIME__      // __DATE__����ļ��������ڵ��ַ�������ֵ
              << endl << "\tWord read was \"" << word                    // __TIME__����ļ�����ʱ����ַ�������ֵ
              << "\": Length too short." << endl;
    return 0;
}

void print( const int ia[] , size_t size0 ) {
    #ifndef NDEBUG
    cerr << __func__ << ": array size is " << size0 << endl;             // __func__�Ǳ����������һ���ֲ����������ڴ�ź���������
    #endif // NDEBUG
}
