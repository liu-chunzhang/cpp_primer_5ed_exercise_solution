// 本程序用于验证读者在练习17.2.2中的想法，并在必要的地方予以说明
#include <iostream>
#include <bitset>
using namespace std;

int main() {

    bitset<32> bitvec( 1U ) ;                                                   // 32位：低位为1，其余位为0
    cout << bitvec << endl;
    bool is_set = bitvec.any() ;
    cout << boolalpha ;                                                         // 控制IO库的输出格式，将bool值以string打印
    cout << "is_set: " << is_set << endl;                                       // 得到true，因为有低位被置位
    bool is_not_set = bitvec.none() ;
    cout << "is_not_set: " << is_not_set << endl;                               // 得到false，因为有一位置位
    bool all_set = bitvec.all() ;
    cout << "all_set: " << all_set << endl;                                     // 得到false，因为只有1位置位
    size_t onBits = bitvec.count() ;
    cout << "onBits: " << onBits << endl;                                      // 只有1位置位，故返回1
    size_t sz = bitvec.size() ;
    cout << "sz: " << sz << endl;                                              // 返回大小32
    bitvec.flip() ;                                                             // 翻转所有位
    cout << bitvec << endl;
    bitvec.reset() ;                                                            // 将所有位复位
    cout << bitvec << endl;
    bitvec.set() ;                                                              // 将所有位置位
    cout << bitvec << endl;
    cout << endl;

    bitvec.flip( 0 ) ;                                                                     // 翻转第一位
    cout << bitvec << endl;
    bitvec.set( bitvec.size() - 3 , false ) ;                                             // 置位最后一位
    cout << bitvec << endl;
    bitvec.set( 0 , true ) ;                                                              // 将低位复位
    cout << bitvec << endl;
    bitvec.reset( 3 ) ;                                                                    // 将第3位复位
    cout << bitvec << endl;
    cout << "bitvec.test( 0 ): " << bitvec.test( 0 ) << endl;      // 返回false，因为第一位复位
    cout << endl;

    bitvec[ 0 ] = 0 ;                                                          // 将低位复位
    cout << bitvec << endl;
    bitvec[ 31 ] = bitvec[ 0 ] ;                                               // 将高位复位
    cout << bitvec << endl;
    bitvec[ 0 ].flip() ;                                                       // 翻转第一位
    cout << bitvec << endl;
    cout << endl << endl;
    ~bitvec[ 0 ] ;                                                             // 取反位运算符~对于bitset失灵，以后需要注意！！
    cout << bitvec << endl;
    ~bitvec ;
    cout << bitvec << endl;
  //bitvec = bitvec & 1UL ;                                                    // 取位与运算也是一样的！所以不要用位运算符作用到bitset对象上。
    cout << "bitvec[0]: " << bitvec[ 0 ] << endl;       // bitvec[0]可以转换为bool值
    cout << endl;

    unsigned long ulong = bitvec.to_ulong() ;
    cout << "ulong = " << ulong << endl;
    cout << endl;

    bitset<16> bits ;
    cin >> bits ;                           // 从cin读取最多16个0或1
    cout << "bits:" << bits << endl;       // 打印刚刚读取的内容

    bool status ;
    unsigned long quizA = 0 ;              // 此值被当作位集合使用
    quizA |= 1UL << 27 ;                    // 指出了第27个学生通过了测验
    status = quizA & ( 1UL << 27 ) ;        // 检查第27个学生通过了测验
    quizA &= ~( 1UL << 27 ) ;               // 第27个学生未通过测验
    cout << endl;

    bitset<30> quizB ;                      // 每个学生分配一位
    quizB.set( 27 ) ;                       // 指出第27个学生通过了测验
    status = quizB[ 27 ] ;                  // 检查第27个学生是否通过了测验
    quizB.reset( 27 ) ;                     // 第27个学生未通过测验

    return 0;
}
