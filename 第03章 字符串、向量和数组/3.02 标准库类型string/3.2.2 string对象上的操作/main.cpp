// 本程序用于验证教材中3.2.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>                          // 此处我多增加了一个库文件：fstream库，用于读写txt文件，下面主函数中第三段可以看到其用处
using namespace std;

int main() {
    /*
    string s ;                              // 默认初始化为空字符串
    cin >> s ;                              // 将string对象读入s，遇到空白即停止读取
    cout << s << endl;                      // 输出s
    */

    /*
    string s1 , s2 ;
    cin >> s1 >> s2 ;                       // 把第一个输入读入s1，第二个输入读入s2中
    cout << s1 << s2 << endl;               // 依次输出两个string对象，中间不加间隔
    */

    /*
    string word ;                           // 用string变量word承接下面的输入
    ifstream readFile( "data1.txt" ) ;      // 此处为了凸显读取数量未知的意思，此处增加了一个重要的操作：用C++读写txt文件。读入的文件为
    ofstream OutFile( "data2.txt" ) ;       // data1.txt，输出的文件为data2.txt。data1.txt里我随便书写了若干的字符串，算是读取了未知数
    while( readFile >> word )               // 量的string对象，while语句指执行条件是还在向里输入，直接将读入的写入txt文件中。
          OutFile << word << "\n" ;         // 当然，换成其他类型文件也是可以的，比如说输出doc也是能够办得到的。
    */

    /*
    string line;
    while( getline( cin ,line ) )           // 每次读入一整行，直到到达文件末尾
        cout << line << endl;
    */

    /*
    string line;
    while( getline( cin , line ) )          // 每次读入一整行，遇见空行直接跳过
        if( !line.empty() )
            cout << line << endl;
    */

    /*
    string line;
    while( getline( cin , line ) )          // 利用size函数作为条件，可以筛选长度具有特殊要求的string对象
        if( line.size() > 80 )
            cout << line << endl;
    */

    /*
    string str = "Hello" ;                  // 字符串的大小比较的一般规则是：
    string phrase = "Hello world" ;         // 1.若两个string对象在某些对应位置上不一致，则string对象比较的结果其实是string对象中第一对
    string slang = "Hiya" ;                 // 相异字符比较的结果；
    if( str < phrase )                      // 2.若两个string对象的长度不同，而且较短的string对象的每个字符都与较长string对象对应位置的
        cout << phrase << endl ;            // 字符相同，就说较短string对象的长度小于较长string对象
    else                                    // 个人总结为看ASCii表，没有字符视为同一位置填充0即可
        cout << str << endl ;
    if( phrase < slang )
        cout << slang << endl ;
    else
        cout << phrase << endl ;
    */

    /*                                      // 两个string对象相加得到一个新的string对象，其内容是把左侧的运算对象和右侧的运算对象串接而成。
    string s1 = "hello" , s2 = "world\n" ;  // 复合赋值运算符+=负责将右侧对象追加到左侧对象的后面。
    string s3 = s1 + s2 ;
    cout << s3 << endl;
    s1 += s2;
    cout << s1 << endl;
    */

    /*
    string s1 = "hello" , s2 = "world" ;
    string s3 = s1 + "," + s2 + "\n" ;      // 此处标点符号由字面值常量提供了
    string s4 = s1 + "," ;                  // 正确：可以将string对象和字符字面值常量混在一条语句中进行相加运算，只是有一点：必须确保每个加
                                            // 法运算符两侧的运算对象至少有一个是string！
    string s5 = "hello" + "," ;             // 错误：两个运算对象都不是string！
    string s6 = s1 + "," + "world" ;        // 正确：因为逐步执行代码时，可满足每个+前后至少有一个string。
    string s7 = "hello" + "," + s2 ;        // 错误：它违反了每个+前后至少有一个string！不可以直接相加字面值！
    */
    return 0;
}
