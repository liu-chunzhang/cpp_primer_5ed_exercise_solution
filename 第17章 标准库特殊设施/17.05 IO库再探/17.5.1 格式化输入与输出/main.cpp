// ������������֤�̲���17.5.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iomanip>              // Ϊ��ʹ��setprecision���ݷ������
#include <iostream>
#include <cmath>                // Ϊ��ʹ�ú���sqrt�����
using namespace std;

bool get_status() ;

int main()
{   /*
    cout << "default bool values: " << true << " " << false << "\nalpha bool values: " << boolalpha << true << " " << false << endl;

    bool bool_val = get_status() ;
    cout << boolalpha << bool_val << noboolalpha << " " << bool_val ;
    */

    /*
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "octal: " << oct << 20 << " " << 1024 << endl;
    cout << "hex: " << hex << 20 << " " << 1024 << endl;
    cout << "decimal: " << dec << 20 << " " << 1024 << endl;
    */

    /*
    cout << showbase ;
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "in octal: " << oct << 20 << " " << 1024 << endl;
    cout << "in hex: " << hex << 20 << " " << 1024 << endl;
    cout << "in decimal: " << dec << 20 << " " << 1024 << endl;
    cout << noshowbase ;

    cout << uppercase << showbase << hex << "printed in hexadecimal: " << 20 << " " << 1024 << nouppercase << noshowbase << dec << endl;
    */

    /*
    cout << "Precision: " << cout.precision() << ",Value: " << sqrt( 2.0 ) << endl;     // cout.precision���ص�ǰ����ֵ
    cout.precision( 12 ) ;
    cout << "Precision: " << cout.precision() << ",Value: " << sqrt( 2.0 ) << endl;     // cout.precision(12)����ӡ��������Ϊ12λ����
    cout << setprecision( 3 ) ;
    cout << "Precision: " << cout.precision() << ",Value: " << sqrt( 2.0 ) << endl;     // ��һ�����þ��ȵķ�ʽ��ʹ��setprecision���ݷ�
    */

    /*
    cout << "default format: " << 100 * sqrt( 2.0 ) << endl;
    cout << "scientific: " << scientific << 100 * sqrt( 2.0 ) << endl;
    cout << "fixed decimal: " << fixed << 100 * sqrt( 2.0 ) << endl;
    cout << "hexadecimal: " << hexfloat << 100 * sqrt( 2.0 ) << endl;
    cout << "use default: " << defaultfloat << 100 * sqrt( 2.0 ) << endl;

    cout << 10.0 << endl;
    cout << showpoint << 10.0 << noshowpoint << endl;
    */

    /*
    int i = -16 ;
    double d = 3.14159 ;
    cout << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" ;                   // ���׵�һ�У�ʹ���������С12��λ��
    cout << left << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" << right ;          // ���׵�һ�У������������
    cout << right << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" ;                   // ���׵�һ�У��Ҷ���������
    cout << internal << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n"  ;                  // ���׵�һ�У���������ڲ�
    cout << setfill( '#' ) << "i: " << setw( 12 ) << i << "next col" << "\n"
          << "d: " << setw( 12 ) << d << "next col" << "\n" << setfill( ' ' ) ; // ���׵�һ�У���#��Ϊ�����ַ�
    */

    /*
    char ch ;                   // �ṩ�������У�a b     c
                                //               d
    while( cin >> ch )
        cout << ch ;
    */

    /*
    char ch ;
    cin >> noskipws ;           // ����cin��ȡ�հ׷�
    while( cin >> ch )
        cout << ch ;
    cin >> skipws ;             // ��cin�ָ�ΪĬ��״̬���Ӷ������հ׷�
    */

    return 0;
}

bool get_status() {
    return true ;
}
