// ������������֤��������ϰ17.36�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;        // ��setwͬʱ����ǰ׺˵�����ֺ���ֵ��ʾ�Ϳ��Զ�����

int main()
{   cout << setw( 20 ) << "default format: " << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "scientific: " << scientific << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "fixed decimal: " << fixed << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "hexadecimal: " << hexfloat << setw( 20 ) << sqrt( 2.0 ) << endl;
    cout << setw( 20 ) << "use default: " << defaultfloat << setw( 20 ) << sqrt( 2.0 ) << endl;
    return 0;
}
