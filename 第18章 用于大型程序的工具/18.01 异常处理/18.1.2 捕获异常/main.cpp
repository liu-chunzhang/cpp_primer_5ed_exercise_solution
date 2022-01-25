// 本程序用于验证教材中18.1.2节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

void manip() ;

int main()
{   /*
    try{
    }catch( my_error &eObj ){                   // 引用类型
        eObj.status = errCodes::severeErr ;     // 修改了异常对象
        throw ;                                 // 异常对象的status成员是severeErr
    }catch( other_error eObj ){                 // 非引用类型
        eObj.status = errCodes::badErr ;        // 只修改了异常对象的局部版本
        throw ;                                 // 异常对象的status成员没有改变
    }
    */

    return 0;
}

void manip() {
    try{
        // 假定这里的操作将引发并抛出一个异常
    }
    catch(...){
        // 处理异常的某些特殊操作
        throw ;
    }
}
