// 本程序用于验证读者在练习8.8中的想法，并在必要的地方予以说明
#include <fstream>
#include "Sales_data.h"

int main( int argc , char **argv ) {               // 这里的代码基本都是从练习8.6拷贝的，只有一小段是新加的
    if( argc != 3 ) {
        cerr << "请给出文件名：" << endl;
        return -1 ;
    }

    ifstream in( argv[1] ) ;
    if( !in ){
        cerr << "无法打开输入文件。" << endl;
        return -1 ;
    }

    ofstream out( argv[2] , ios::app ) ;          // 新加部分
    if( !out ){
        cerr << "无法打开输出文件。" << endl;
        return -1 ;
    }

    Sales_data total ;
    if( in >> total ){
        Sales_data trans ;
        while( in >> trans ){
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else {
                out << total << endl;
                total = trans ;
            }
        }
    }
    else
        cerr << "没有数据?!" << endl;
    return 0;
}
