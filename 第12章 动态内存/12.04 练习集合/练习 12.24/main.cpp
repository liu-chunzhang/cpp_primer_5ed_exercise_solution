// 本程序用于验证读者在练习12.24中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    char *r = new char[ 20 ] , c ;
    for( size_t l = 0 ; cin.get( c ) ; ++l ){                   // 从标准输入中不断读取
        try{                                                     // 这里是非常罕见的我尝试使用try语块进行编写
            if( isspace( c ) )                                   // 这里是如果是空格则不计入容量
                break ;
            r[l] = c ;                                           // 一边赋值，一遍自增。
            if( l == 20 )                                        // 如果到达了容量，那么就抛出运行错误
                throw runtime_error( "到达数组容量上限！" ) ;  // catch语句收集并且处理错误
        }catch( runtime_error err ){
            cout << err.what() << endl;                         // what函数用来返回C风格字符串格式的错误信息，不可删去
            cout << "截断后的字符串为：" ;
            break ;
        }
    }
    cout << r << endl;                                          // 此处打印输入后的存储结果
    delete[] r ;                                                // 最后记得用delete[]释放动态数组！！！
    return 0;
}
