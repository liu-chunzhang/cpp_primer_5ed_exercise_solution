// ������������֤�̲���3.2.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>                          // �˴��Ҷ�������һ�����ļ���fstream�⣬���ڶ�дtxt�ļ��������������е����ο��Կ������ô�
using namespace std;

int main() {
    /*
    string s ;                              // Ĭ�ϳ�ʼ��Ϊ���ַ���
    cin >> s ;                              // ��string�������s�������հ׼�ֹͣ��ȡ
    cout << s << endl;                      // ���s
    */

    /*
    string s1 , s2 ;
    cin >> s1 >> s2 ;                       // �ѵ�һ���������s1���ڶ����������s2��
    cout << s1 << s2 << endl;               // �����������string�����м䲻�Ӽ��
    */

    /*
    string word ;                           // ��string����word�н����������
    ifstream readFile( "data1.txt" ) ;      // �˴�Ϊ��͹�Զ�ȡ����δ֪����˼���˴�������һ����Ҫ�Ĳ�������C++��дtxt�ļ���������ļ�Ϊ
    ofstream OutFile( "data2.txt" ) ;       // data1.txt��������ļ�Ϊdata2.txt��data1.txt���������д�����ɵ��ַ��������Ƕ�ȡ��δ֪��
    while( readFile >> word )               // ����string����while���ִָ�������ǻ����������룬ֱ�ӽ������д��txt�ļ��С�
          OutFile << word << "\n" ;         // ��Ȼ���������������ļ�Ҳ�ǿ��Եģ�����˵���docҲ���ܹ���õ��ġ�
    */

    /*
    string line;
    while( getline( cin ,line ) )           // ÿ�ζ���һ���У�ֱ�������ļ�ĩβ
        cout << line << endl;
    */

    /*
    string line;
    while( getline( cin , line ) )          // ÿ�ζ���һ���У���������ֱ������
        if( !line.empty() )
            cout << line << endl;
    */

    /*
    string line;
    while( getline( cin , line ) )          // ����size������Ϊ����������ɸѡ���Ⱦ�������Ҫ���string����
        if( line.size() > 80 )
            cout << line << endl;
    */

    /*
    string str = "Hello" ;                  // �ַ����Ĵ�С�Ƚϵ�һ������ǣ�
    string phrase = "Hello world" ;         // 1.������string������ĳЩ��Ӧλ���ϲ�һ�£���string����ȽϵĽ����ʵ��string�����е�һ��
    string slang = "Hiya" ;                 // �����ַ��ȽϵĽ����
    if( str < phrase )                      // 2.������string����ĳ��Ȳ�ͬ�����ҽ϶̵�string�����ÿ���ַ�����ϳ�string�����Ӧλ�õ�
        cout << phrase << endl ;            // �ַ���ͬ����˵�϶�string����ĳ���С�ڽϳ�string����
    else                                    // �����ܽ�Ϊ��ASCii��û���ַ���Ϊͬһλ�����0����
        cout << str << endl ;
    if( phrase < slang )
        cout << slang << endl ;
    else
        cout << phrase << endl ;
    */

    /*                                      // ����string������ӵõ�һ���µ�string�����������ǰ��������������Ҳ��������󴮽Ӷ��ɡ�
    string s1 = "hello" , s2 = "world\n" ;  // ���ϸ�ֵ�����+=�����Ҳ����׷�ӵ�������ĺ��档
    string s3 = s1 + s2 ;
    cout << s3 << endl;
    s1 += s2;
    cout << s1 << endl;
    */

    /*
    string s1 = "hello" , s2 = "world" ;
    string s3 = s1 + "," + s2 + "\n" ;      // �˴�������������ֵ�����ṩ��
    string s4 = s1 + "," ;                  // ��ȷ�����Խ�string������ַ�����ֵ��������һ������н���������㣬ֻ����һ�㣺����ȷ��ÿ����
                                            // �������������������������һ����string��
    string s5 = "hello" + "," ;             // ��������������󶼲���string��
    string s6 = s1 + "," + "world" ;        // ��ȷ����Ϊ��ִ�д���ʱ��������ÿ��+ǰ��������һ��string��
    string s7 = "hello" + "," + s2 ;        // ������Υ����ÿ��+ǰ��������һ��string��������ֱ���������ֵ��
    */
    return 0;
}
