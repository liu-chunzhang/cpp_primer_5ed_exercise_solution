// 本程序用于验证教材中9.2.4节内容的可靠性，并提供感性认知
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <array>
using namespace std;

int main(){
    list<string> authors = { "Milton" , "Shakespeare" , "Austen" } ;
    vector<const char*> articles = { "a" , "an" , "the" } ;
    list<string> list2( authors ) ;
  //deque<string> authlist( authors ) ;                                      // 错误：容器类型不匹配！
  //vector<string> words( articles ) ;                                       // 错误：容器类型必须匹配！
    forward_list<string> words( articles.begin() , articles.end() ) ;

    list<string>::const_iterator it = --authors.cend()  ;     // 这地方不能写authors.end() - 1，因为链表的迭代器不支持这种操作
    deque<string> authList( authors.cbegin() , it ) ;          // 使用迭代器必须前后一致，也就是都用const迭代器做实参，或者都用普通迭代器做实参

    array<int,42> iarr ;                // 保存了42个int的数组
    array<string,10> sarr ;            // 保存了10个string的数组
    array<int,42>::size_type i = 32 ;
  //array<int>::size_type j ;                                                // 错误：array<int>并不是一个类型

    int digs[10] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
  //int cpy[10] = digs ;                                                     // 错误：内置数组不支持拷贝或赋值
    array<int,10> digits = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    array<int,10> cpy2 = digits ;                                           // array的拷贝虽然允许，但是拷贝前后两个array类型必须完全相同！
  //array<double,10> cpy3 = digits ;
  //array<int,32> cp4 = digits ;
    return 0;
}
