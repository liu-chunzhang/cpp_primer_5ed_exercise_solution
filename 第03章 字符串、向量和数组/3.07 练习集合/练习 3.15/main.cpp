// ������������֤��������ϰ3.15�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <vector>
#include <fstream>                                       // �˴�ʹ�������ĵ����ṩ�����ݽ��л������ܲ���
using namespace std;

int main() {
    vector<string> vint ;                               // ���뿽������ϰ3.14��ֻ��һЩ���������ԼӸı䡣
    ifstream readFile( "data.txt" ) ;
    ofstream OutFile ;                                  // �˴������txt������txt�Ƿ���ͬ����������Ч��
    OutFile.open( "output data.txt" ) ;
    string temp ;                                       // temp�ǳн����������м����
    char y = 'Y' ;                                      // y�ǿ��ر��������ڿ��Ƴ�����ж�
    for( size_t i = 0 ; readFile >> temp ; ++i ){      // ����������temp�����漴ѹ��vint����
        cout << "���������밴Y������N��" << endl;
        cin >> y ;
        if( y == 'Y' )
            vint.push_back( temp ) , OutFile << vint[i] << endl;                     // ���ͬ����Ϣ���Ա����
        else
            break;
    }
    return 0;
}
