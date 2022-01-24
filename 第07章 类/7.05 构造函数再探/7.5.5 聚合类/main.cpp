// 本程序用于验证教材中7.5.5节内容的可靠性，并提供感性认知
#include "Data.h"

int main() {
    Data val1 = { 0 , "Anna" } ;
    Data val2 = { "Anna" , 0 } ;         // 错误：初始值的顺序必须与声明一致！
    return 0;
}
