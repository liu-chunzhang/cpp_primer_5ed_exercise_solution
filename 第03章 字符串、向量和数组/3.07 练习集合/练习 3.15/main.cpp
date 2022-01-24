// 本程序用于验证读者在练习3.15中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <fstream>                                       // 此处使用外置文档中提供的数据进行基本性能测试
using namespace std;

int main() {
    vector<string> vint ;                               // 代码拷贝了练习3.14，只是一些变量类型稍加改变。
    ifstream readFile( "data.txt" ) ;
    ofstream OutFile ;                                  // 此处用输出txt与输入txt是否相同检验程序的有效性
    OutFile.open( "output data.txt" ) ;
    string temp ;                                       // temp是承接输入流的中间变量
    char y = 'Y' ;                                      // y是开关变量，用于控制程序的中断
    for( size_t i = 0 ; readFile >> temp ; ++i ){      // 输入先流入temp，再随即压到vint后面
        cout << "继续输入请按Y，否则按N：" << endl;
        cin >> y ;
        if( y == 'Y' )
            vint.push_back( temp ) , OutFile << vint[i] << endl;                     // 输出同种信息，以便检验
        else
            break;
    }
    return 0;
}
