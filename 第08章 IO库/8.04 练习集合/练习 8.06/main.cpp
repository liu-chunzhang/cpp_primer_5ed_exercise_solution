// 本程序用于验证读者在练习8.6中的想法，并在必要的地方予以说明：本节使用的教程版本的Sales_data而非自定义版本，目的是使用已有数据
#include <fstream>
#include "Sales_data.h"

int main( int argc , char **argv ) {
    if( argc != 2 ){
        cerr << "请给出文件名：" << endl;
        return -1 ;
    }
    ifstream in( argv[1] ) ;
    if( !in ){
        cerr << "无法打开输入文件！" << endl;
        return -2 ;
    }
    Sales_data total ;
    if( in >> total ){
        Sales_data trans ;
        while( in >> trans ){
            if( total.isbn() == trans.isbn() )
                total += trans ;
            else {
                cout << total << endl;
                total = trans ;
            }
        }
    }
    else {
        cerr << "No data?!" << endl;
    }
    return 0;
}
