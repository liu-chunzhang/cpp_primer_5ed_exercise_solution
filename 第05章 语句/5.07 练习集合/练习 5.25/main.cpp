// ������������֤��������ϰ5.25�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    cout << "���������뱻�����ͳ�����" << endl;               // �ڱ����У��趨����⵽����Ϊ0ʱ�׳�һ��runtime_error�쳣����Ϊû��catch��䣬
    int ival1 , ival2 ;                                       // ���ϵͳֻ�����쳣������������
    while( cin >> ival1 >> ival2 ){
        try{
            if( ival2 == 0 )
                throw runtime_error( "����������0" ) ;
            cout << "��������Ľ���ǣ�" << static_cast<double>( ival1 ) / ival2 << endl;
            cout << "��Ҫ������?�����밴Y��ͣ���밴N��" << endl;
            char ch1 ;
            cin >> ch1 ;
            if( ch1 != 'Y' && ch1 !='y' )
                break ;
            cout << "���ٴ��������뱻�����ͳ�����" << endl;
        }catch( runtime_error err ) {
            cout << err.what() << endl;
            cout << "��Ҫ������?�����밴Y��ͣ���밴N��" << endl;
            char ch2 ;
            cin >> ch2 ;
            if( ch2 != 'Y' && ch2 !='y' )
                break ;
            cout << "���ٴ��������뱻�����ͳ�����" << endl;
        }
    }
    return 0;
}
