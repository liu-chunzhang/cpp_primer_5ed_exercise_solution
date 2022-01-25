// 本程序用于验证教材中14.5节内容的可靠性，并提供感性认知
#include "StrVec.h"

int main() {
    StrVec svec = { "a" , "an" , "the" } ;          // 随便定义的一个svec，方便下面代码运行
    const StrVec cvec = svec ;                      // 把svec的元素拷贝到cvec中
    if( svec.size() && svec[0].empty() ){          // 若svec中含有元素，则对首元运行stting的empty函数
        svec[0] = "zero" ;                          // 下标运算符返回对string的引用
      //cvec[0] = "zip" ;                           // 错误：对cvec取下标运算返回的是常量引用！
    }
    for( const string &s : svec )
        cout << s << " " ;
    cout << endl;
    return 0;
}
