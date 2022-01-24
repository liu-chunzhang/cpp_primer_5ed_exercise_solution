// 本程序用于验证读者在练习3.24中的想法，并在必要的地方予以说明：读入一组整数并把它们存入一个vector对象，将每对正序和逆序整数的和输出（用迭代器实现）
#include <iostream>
#include <vector>
using namespace std;        // 求解本题时应特别注意迭代器begin和end的含义，否则将难以写成代码

int main() {
    vector<int> vint;
    int i = 0 ;
    cout << "请输入任意数量的整数，按回车键确认输入，按Ctrl+C键表示停止：" << endl;
    while( cin >> i )
        vint.push_back( i ) ;
    vector<int>::iterator ter = vint.end();
    if( vint.size() > 1 )
        for( vector<int>::iterator iter = vint.begin() ; iter < vint.begin() + ( ter - vint.begin() )/2 ; ++iter )
            cout << *iter + *( vint.begin() + ( ter - iter ) - 1 ) << " " << endl;
    else{
        cerr << "您没有输入至少两个整数！" << endl;
        return -1;
    }
    return 0 ;
}
