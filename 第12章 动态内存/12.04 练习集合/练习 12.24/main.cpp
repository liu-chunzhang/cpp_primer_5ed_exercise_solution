// ������������֤��������ϰ12.24�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    char *r = new char[ 20 ] , c ;
    for( size_t l = 0 ; cin.get( c ) ; ++l ){                   // �ӱ�׼�����в��϶�ȡ
        try{                                                     // �����Ƿǳ��������ҳ���ʹ��try�����б�д
            if( isspace( c ) )                                   // ����������ǿո��򲻼�������
                break ;
            r[l] = c ;                                           // һ�߸�ֵ��һ��������
            if( l == 20 )                                        // �����������������ô���׳����д���
                throw runtime_error( "���������������ޣ�" ) ;  // catch����ռ����Ҵ������
        }catch( runtime_error err ){
            cout << err.what() << endl;                         // what������������C����ַ�����ʽ�Ĵ�����Ϣ������ɾȥ
            cout << "�ضϺ���ַ���Ϊ��" ;
            break ;
        }
    }
    cout << r << endl;                                          // �˴���ӡ�����Ĵ洢���
    delete[] r ;                                                // ���ǵ���delete[]�ͷŶ�̬���飡����
    return 0;
}
