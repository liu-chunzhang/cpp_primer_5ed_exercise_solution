// ������������֤��������ϰ3.14�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <fstream>                                       // �˴�ʹ�������ĵ����ṩ�����ݽ��л������ܲ���
using namespace std;

int main() {
    vector<long long int> vint ;                       // �˴���Ҫע�⣬ʹ��long int��ʹ���ĵ��жϣ���Ϊ�ṩ�ĵ���������������2^32-1��ֻ��
    ifstream readFile( "data.txt" ) ;                   // ��long long int�ſ��Գнӵ�ס��
    ofstream OutFile ;                                  // �˴������txt������txt�Ƿ���ͬ����������Ч��
    OutFile.open( "output data.txt" ) ;
    long long int temp = 0 ;                            // temp�ǳн��������Ĺ��ɱ���
    char y = 'Y' ;                                      // �˴�y�ǿ��ر��������ڿ��Ƴ���ļ�ʱ�ж�
    for( size_t i = 0 ; readFile >> temp ; ++i ){      // ����������temp�����漴ѹ��vint����
        cout << "��Ҫ�����밴Y������N��" << endl;
        cin >> y ;
        if( y == 'Y' )
            vint.push_back( temp ) , OutFile << vint[i] << endl;   // ���ͬ����Ϣ���Ա����
        else
            break;                                      // ������Ҫ��������ж�ѭ��
    }
    return 0;
}
