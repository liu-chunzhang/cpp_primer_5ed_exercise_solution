// 本程序用于验证读者在练习3.20中的想法，并在必要的地方予以说明：读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vint;
    int i = 0 ;
    cout << "请输入任意数量的整数，按回车键确认输入，按Ctrl+C键表示停止：" << endl;
    while( cin >> i )
        vint.push_back( i ) ;
    if( vint.size() > 1 )
        for( size_t i = 0 ; i < ( vint.size() - 1 ); i += 2 )
            cout << vint[i] + vint[i+1] << " " ;
    else
        cout << "您没有输入至少两个整数！" << endl;
    return 0;
}
