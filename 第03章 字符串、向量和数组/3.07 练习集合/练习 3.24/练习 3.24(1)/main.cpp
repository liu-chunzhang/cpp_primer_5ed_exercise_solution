// 本程序用于验证读者在练习3.24中的想法，并在必要的地方予以说明：读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出（用迭代器实现）
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec;
    int i = 0 ;
    cout << "请输入任意数量的整数，按回车键确认输入，按Ctrl+C键表示停止：" << endl;
    while( cin >> i )
        ivec.push_back( i ) ;
    if( ivec.size() > 1 )
        for( vector<int>::iterator i = ivec.begin() ; i < ivec.end() - 1 ; i += 2 )
            cout << *i + *( i+1 ) << " " ;
    else{
        cerr << "您没有输入至少两个整数！" << endl;
        return -1;
    }
    return 0 ;
}
