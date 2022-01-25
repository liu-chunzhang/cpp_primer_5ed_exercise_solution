#include "SizeComp.h"

SizeComp::SizeComp( size_t n ) : sz( n ) { }                // 该形参对应捕获的变量

bool SizeComp::operator() ( const string &s ) const {     // 该调用运算符的返回类型、形参和函数体都与lambda一致
    return s.size() >= sz ;
}
