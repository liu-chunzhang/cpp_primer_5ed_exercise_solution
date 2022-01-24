// 本程序用于验证教材中9.3.2节内容的可靠性，并提供感性认知
#include <iostream>
#include <forward_list>
#include <vector>
using namespace std;

int main() {
    vector<int> c = { 0 , 1 , 2 , 3 , 5 } ;
    forward_list<int> iflst = { 0 , 1 , 2 , 3 , 5 } ;

    if( !c.empty() ){
        int val = *c.begin() , val2 = c.front() ;         // 教材第一行的auto指的是int
        vector<int>::iterator last = c.end() ;           // 教材第二行的auto指的是vector<int>::iterator
        int val3 = *(--last) ;
      //int val4 = iflst.back() ;
        int val5 = iflst.front() ;
    }

    if( !c.empty() ){
        c.front() = 42 ;
        int &v = c.back() ;                               // 获得指向最后一个元素的引用
        v = 1024 ;                                         // 改变了c中的元素，此处auto指代的类型是int
        int v2 = c.back() ;                               // v2不是一个引用，而是c.back()的一个拷贝
        v2 = 0 ;                                           // 没改变c中的元素
        for( const int i : c )
            cout << i << " " ;
    }

    vector<string> svec ;
  //cout << svec[0] ;                                      // 运行时错误：svec中没有元素！
    cout << svec.at(0) ;                                  // 抛出一个out_of_range异常
    return 0;
}
