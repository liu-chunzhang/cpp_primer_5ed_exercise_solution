// 本程序用于验证教材中17.5.3节内容的可靠性，并提供感性认知
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()                                                   // 本篇里面有不少坑，请务必注意！凡是前面带!!!的都是教材没提及的实现细节，具体的解释如下：
{   /*
    ostringstream writeStr ;                                 // 1.写二进制文件应该使用ofstream类，文件的打开模式一定要是binary，如果传入的不是binary, 文件将以ASCII方式打开；
    ostringstream::pos_type mark = writeStr.tellp() ;        // 2.保存二进制文件的格式为dat，所以弃用了以前常用的txt格式的输入文件，改为用dat；
    writeStr.seekp( mark ) ;                                 // 3.函数seekg与函数tellg在文档中定位某行很可能不正确，但可以使用tellg和seekg精肯定位的前提是，文档是以二进制形式打开的，即std::ios::binary。由于系统每次对文档中的符号的解读不同，因此会致使seekg(pos)时，不能定位到想要的位置！
    */

    fstream inOut( "copyOut.dat" , fstream::ate | fstream::in | fstream::out | fstream::binary ) ; // !!！in和out表示以读写方式打开，ate表示立即定位到文件末尾，binary表示以二进制方式进行IO
    if( !inOut ){                                       // !!!输入文件的内容除了教材上的那些字母以外，务必在j后只加上一个空行，且每次实验前记得重新设置才能够得到与教材目的相同的代码
        cerr << "Unable to open file!" << endl;
        return EXIT_FAILURE ;                           // EXIT_FAILURE表示机器通用的失败退出结束语
    }
    fstream::pos_type end_mark = inOut.tellg() ;        // auto指代的是一种新变量：流位置；这句话即记住原文件尾位置
    inOut.seekg( 0 , fstream::beg ) ;                   // 重定位到文件开始
    size_t cnt = 0 ;                                    // 字节数累加器
    string line ;                                       // 保存输入中的每行
    while( inOut && inOut.tellg() != end_mark && getline( inOut , line ) ){     // 且还可以获取一行输入
        cnt += line.size() ;                            // !!!教材上说+1表示换行符，但是此处并不需要+1，因为计算size的时候已经加过了
        fstream::pos_type mark = inOut.tellg() ;        // 记住输入流的读取位置
        inOut.seekp( 0 , fstream::end ) ;              // 将写标记移动到文件尾
        inOut << cnt ;                                  // 输出累计长度
        if( mark != end_mark )                          // 若非最后一行，打印一个分隔符
            inOut << " " ;
        inOut.seekg( mark ) ;                           // 恢复到读位置
    }
    inOut.seekp( 0 , fstream::end ) ;                  // 定位到文件尾
    inOut << "\n" ;                                     // 在文件尾输出一个换行符
    return EXIT_SUCCESS;
}
