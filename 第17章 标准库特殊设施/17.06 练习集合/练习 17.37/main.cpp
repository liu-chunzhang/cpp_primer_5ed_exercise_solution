// ������������֤��������ϰ17.37�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

const size_t sz = 100 ;

int main()
{   ifstream in( "data.txt" ) ;
    if( !in ){
        cerr << "Can not open input file!" << endl;
        return -1 ;
    }
    char c[ sz ] ;
    while( !in.eof() ){
        in.getline( c , sz ) ;
        cout << left << setw( 100 ) << c << " " << in.gcount() << endl;
        if( !in.good() )                                // ����good�����ж����Ƿ�����Ч״̬�����򷵻�true������һ�����ж����Ƿ��Ѳ��Ϸ�
            if( in.gcount() == sz - 1 )                 // �����Ϸ�����Ϊ��ȡ���Ȳ�����Ƕ�ȡ��ɣ����������ĺϷ��ԣ���ѭ���ٴζ�ȡ
                in.clear() ;                   // ֵ��ע����ǣ�ʹ��getline��ȡ���ַ����ﵽָ������ʱ��û�������ֽ������Ὣ
            else                               // ����״̬��Ϊfail����Ҫ��clear������������Ϊvalid״̬
                break ;
    }
    return 0;
}
