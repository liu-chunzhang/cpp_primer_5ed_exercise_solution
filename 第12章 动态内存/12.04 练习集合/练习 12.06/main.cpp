// 本程序用于验证读者在练习12.6中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

void read( vector<int> &ivec , istream &in ) ;
void print( vector<int> &ivec ) ;

int main() {
    vector<int> *ivec = new ( nothrow ) vector<int>() ;
    read( *ivec , cin ) ;
    print( *ivec ) ;
    delete ivec ;                                   // 释放掉动态内存指针
    return 0;
}

void read( vector<int> &ivec , istream &in ){      // 将刚刚创建的动态ivec赋给read函数，读取标准输入，并加以保存
    int i ;
    while( in >> i )
        ivec.push_back( i ) ;
}

void print( vector<int> &ivec ){                   // 打印读入的vector
    for( const int i : ivec )
        cout << i << " " ;
    cout << endl;
}

// 直接内存管理的关键是谁分配了内存就要记得释放。在主程序中，主函数调用分配函数在动态内存空间中创建了int的vector，因此在读入数据、打印数据之后，
// 主函数应负责释放vector对象。
