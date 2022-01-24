// 本程序用于验证读者在练习8.11中的想法，并在必要的地方予以说明
#include "PersonInfo.h"

int main() {
    string line , word ;
    vector<PersonInfo> people ;
    istringstream record ;                          // 相比于教材8.3.1节的程序，第一个变动是将变量移动位置，并且不再初始化

    while( getline( cin , line ) ){
        PersonInfo info ;
        record.clear() ;                           // 第二个变动是重复使用字符串流时，每次都要调用clear重置流的状态，每次重新创建则不必重置状态了
        record.str( line ) ;                       // 第三个变动是将记录绑定在刚读入的行
        record >> info.name ;
        while( record >> word )
            info.phones.push_back( word ) ;
        people.push_back( info ) ;
    }
    return 0;
}
