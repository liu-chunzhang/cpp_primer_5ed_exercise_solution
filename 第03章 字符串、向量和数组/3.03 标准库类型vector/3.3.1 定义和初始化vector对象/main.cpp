// 本程序用于验证教材中3.3.1节内容的可靠性，并提供感性认知
#include <iostream>
#include <vector>
#include "Sales_item.h"
using namespace std;

int main() {
    /*
    vector<int> ivec;                                 // 创建了实体以后系统会默认初始化vector对象，但是这里面一个元素都没有！所以是不能够查看
    vector<Sales_item> Sales_vec ;                    // 其首值的，否则将发生错误，这个错误不会进行报错和警告！
    vector<vector<string>> file ;                     // 该向量的元素是vector对象
    cout << ivec[0] << endl;
    */

    /*
    vector<int> ivec;
    vector<int> ivec2( ivec );
    vector<int> ivec3 = ivec ;
    vector<string> svec{ ivec2 } ;                    // 错误：赋值两方的类型不匹配！
    */

    /*
    vector<string> v1{ "a" , "an" , "the" };          // 如果提供的是初始元素值的列表，则只能把初始值都放在花括号内进行初始化，而不能够放在圆
  //vector<string> v2( "a" , "an" , "the" );          // 括号内！
    */

    /*
    vector<int> ivec( 10 , -1 ) ;                     // 10个int元素，每个都初始化为-1
    vector<string> svec( 10 , "hi" );                 // 10个string元素，每个都初始化为"hi"
    */

    /*
    vector<int> ivec( 10 ) ;                          // 10个int元素，每个都初始化为0
    vector<string> svec( 10 ) ;                       // 10个string元素，每个都初始化为空的string
  //vector<int> vi = 10 ;                             // 错误：必须使用直接初始化的形式指定向量大小
    */

    /*
    vector<int> vi = 10 ;                             // 错误：必须使用直接初始化的形式指定vector大小
    */

    /*
    vector<int> v1( 10 ) ;                            // v1有10个元素，每个的值都为0
    vector<int> v2{ 10 } ;                            // v2有1个元素，该元素的值是10
    cout << v1.size() << " " << v2.size() << endl;

    vector<int> v3( 10 , 1 ) ;                        // v3有10个元素，每个的值都是1
    vector<int> v4{ 10 , 1 } ;                        // v4有2个元素，值分别是10和1
    cout << v3.size() << " " << v4.size() << endl;
    */

    /*
    vector<string> v5{ "hi" } ;                      // 列表初始化：v5有一个元素
    vector<string> v6( "hi" ) ;                      // 错误：不能使用字符串字面值构建vector！
    vector<string> v7{ 10 } ;                        // v7有10个默认初始值的元素
    vector<string> v8{ 10 , "hi" } ;                 // v8有10个值为"hi"的元素
    */

    return 0;
}
