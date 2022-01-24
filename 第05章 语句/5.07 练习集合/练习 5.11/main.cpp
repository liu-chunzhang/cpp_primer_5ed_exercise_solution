// 本程序用于验证读者在练习5.11中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 , spaceCnt = 0 , tabCnt = 0 , newlineCnt = 0;
    char ch ;
    while( cin.get( ch ) ){                                             // get()函数是cin输入流对象的成员函数，它有三种形式：无参数的，
         switch( ch ){                                                   // 有一个参数的，有三个参数的。
            case 'a' : case 'A' :                                        // 1) 不带参数的get函数
                ++aCnt ;                                                 // 其调用形式为cin.get()，用来从指定的输入流中提取一个字符（包括
                break ;                                                  // 空白字符），函数的返回值就是读入的字符。若遇到输入流中的文件
            case 'e' : case 'E' :                                       // 结束符，则函数值返回文件结束标志EOF(End Of File)，一般以-1代
                ++eCnt ;                                                 // 表EOF，用-1而不用0或正值，是考虑到不与字符的ASCII代码混淆，但
                break;                                                  // 不同的C++系统所用的EOF值有可能不同。
            case 'i' : case 'I' :                                       // 2) 有一个参数的get函数（见教程表17.19）
                ++iCnt ;                                                // 其调用形式为cin.get(ch),其作用是从输入流中读取一个字符，赋给字
                break;                                                  // 符变量ch。如果读取成功则函数返回true(真)，如失败(遇文件结束符)
            case 'o' : case 'O' :                                      // 则函数返回false(假)。
                ++oCnt ;                                                // 3) 有3个参数的get函数（见教程表17.20）
                break;                                                 // 其调用形式为cin.get(字符数组, 字符个数n, 终止字符)
            case 'u' : case 'U' :                                      // 或cin.get(字符指针, 字符个数n, 终止字符)
                ++uCnt ;                                               // 其作用是从输入流中读取n-1个字符，赋给指定的字符数组(或字符指针指
                break;                                                 // 向的数组)，如果在读取n-1个字符之前遇到指定的终止字符，则提前结束
            case ' ' :                                                 // 读取。如果读取成功则函数返回true(真)，如失败(遇文件结束符) 则函
                ++spaceCnt ;                                           // 数返回false(假)。
                break;
            case '\t' :
                ++tabCnt ;
                break;
            case '\n' :
                ++newlineCnt ;
                break;
         }
    }
    cout << "元音字母a和A的数量是：" << aCnt << endl;
    cout << "元音字母e和E的数量是：" << eCnt << endl;
    cout << "元音字母i和I的数量是：" << iCnt << endl;
    cout << "元音字母o和O的数量是：" << oCnt << endl;
    cout << "元音字母u和U的数量是：" << uCnt << endl;
    cout << "空格的数量是：" << spaceCnt << endl;
    cout << "制表符的数量是：" << tabCnt << endl;
    cout << "换行符的数量是：" << newlineCnt << endl;
    return 0;
}
