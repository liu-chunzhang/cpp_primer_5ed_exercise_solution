// 本程序用于验证读者在练习3.14中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
#include <fstream>                                       // 此处使用外置文档中提供的数据进行基本性能测试
using namespace std;

int main() {
    vector<long long int> vint ;                       // 此处需要注意，使用long int会使得文档中断，因为提供文档中最大的数超过了2^32-1，只有
    ifstream readFile( "data.txt" ) ;                   // 用long long int才可以承接的住。
    ofstream OutFile ;                                  // 此处用输出txt与输入txt是否相同检验程序的有效性
    OutFile.open( "output data.txt" ) ;
    long long int temp = 0 ;                            // temp是承接输入流的过渡变量
    char y = 'Y' ;                                      // 此处y是开关变量，用于控制程序的及时中断
    for( size_t i = 0 ; readFile >> temp ; ++i ){      // 输入先流入temp，再随即压到vint后面
        cout << "还要输入请按Y，否则按N。" << endl;
        cin >> y ;
        if( y == 'Y' )
            vint.push_back( temp ) , OutFile << vint[i] << endl;   // 输出同种信息，以便检验
        else
            break;                                      // 不想再要输出，就中断循环
    }
    return 0;
}
