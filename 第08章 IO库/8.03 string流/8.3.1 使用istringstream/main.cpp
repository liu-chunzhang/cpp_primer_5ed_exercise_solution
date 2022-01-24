// 本程序用于验证教材中8.3.1节内容的可靠性，并提供感性认知
#include "PersonInfo.h"

int main() {
    string line , word ;                        // 分别保存来自输入的一行和单词
    vector<PersonInfo> people ;                 // 保存来自输入的所有记录
    while( getline( cin , line ) ){
        PersonInfo info ;                        // 创建一个保存此记录的对象
        istringstream record( line ) ;           // 将记录绑定在刚读入的行
        record >> info.name ;                    // 读取名字
        while( record >> word )                 // 读取电话号码
            info.phones.push_back( word ) ;     // 保持它们
        people.push_back( info ) ;              // 将此纪录追加到people末尾
    }
    return 0;
}
