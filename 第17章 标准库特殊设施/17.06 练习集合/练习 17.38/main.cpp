// ������������֤��������ϰ17.38�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
        in.getline( c , sz ) ;              // �����߼����£�
        cout << c ;                         // ������sz���ַ��Ժ��������һ�У�����if��֧���Σ����ĺϷ��Բ�ɥʧ���Ӷ�ֱ�Ӵ�ӡ���з����ɣ�
        if( in.good() )                     // ������sz���ַ��Ժ���ʵ����û�ж�����һ�У�����getline���ԣ����ĺϷ���ɥʧ������else��֧��
            cout << endl;                  // ��ʵ����ֻ�Ƕ�ȡ�ַ������㣬ֻ��Ҫ�ָ����ĺϷ��Լ��ɣ���ʵ�����Ѿ���ȡ��EOF��ֹͣ��������
        else                               // ѭ�����ж�ѭ��ʧЧ���������򼴿ɡ�
            if( in.gcount() == sz - 1 )
                in.clear() ;
            else
                break ;
    }
    return 0;
}
