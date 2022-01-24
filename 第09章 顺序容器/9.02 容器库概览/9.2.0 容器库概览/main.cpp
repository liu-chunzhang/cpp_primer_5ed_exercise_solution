// 本程序用于验证教材中9.2.0节内容的可靠性，并提供感性认知
#include <list>                             // 每个容器都定义在一个文件夹中，文件名与类型名相同
#include <deque>                            // 容器均定义为模板类
#include <vector>
#include "noDefault.h"

int main() {
    list<int> ilst ;
    deque<double> ddeque ;
    vector<vector<string>> ssvec ;

  //vector<noDefault> nDvec1( 10 ) ;        // 错误：必须提供一个元素初始化器
    vector<noDefault> nDvec2( 10 , 4 ) ;   // 正确：提供了一个元素初始化器
    return 0;
}
