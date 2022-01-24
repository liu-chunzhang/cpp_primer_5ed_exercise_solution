// 本程序用于验证教材中6.3.1节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

void exchange2Int( int &v1 , int &v2 ) ;

int main() {
    int i = 3 , j = 4 ;
    cout << "交换前i和j的值分别为" << i  << "、" << j << endl;
    exchange2Int( i , j) ;
    cout << "交换后i和j的值分别为" << i  << "、" << j << endl;
    return 0;
}

void exchange2Int( int &v1 , int &v2 ){
    if( v1 == v2 )
        return ;                                                  // 如果待比较的两个值是相等的，则不需要交换，直接退出
    int tem = v2 ;                                                // 如果程序执行到这里，说明还需要完成某些功能
    v2 = v1 ;
    v1 = tem ;                                                    // 此处无须显式的return语句
}
