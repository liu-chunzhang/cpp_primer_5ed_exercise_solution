// 本程序用于验证读者在练习9.5.1中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    const char *cp = "Hello World!!!" ;     // 以空字符结束的数组
    char noNull[ ] = { 'H' , 'I' } ;        // 不是以空字符结束
    string s1( cp ) ;                       // 拷贝cp中的字符直到遇到空字符；s1 == "Hello World!!!"
    cout << s1 << endl;
    string s2( noNull , 2 ) ;               // 从noNull拷贝了两个字符
    cout << s2 << endl;
    string s3( noNull ) ;                   // 实际上是未定义的行为：noNull不是以空字符结束！
    cout << s3 << endl;
    string s4( cp + 6 , 5 ) ;               // 从cp[6]开始拷贝5个字符；s4 == "World"
    cout << s4 << endl;
    string s5( s1 , 6 , 5 ) ;               // 从s1[6]开始拷贝5个字符；s5 == "World"
    cout << s5 << endl;
    string s6( s1 , 6 ) ;                   // 从s1[6]开始拷贝，直至s1末尾；s6 == "World!!!"
    cout << s6 << endl;
    string s7( s1 , 6 , 20 ) ;              // 正确，只拷贝到s1末尾；s7 == "World!!!"
    cout << s7 << endl;
  //string s8( s1 , 16 ) ;                  // 抛出一个out_of_range异常
  //cout << s8 << " " << endl;

    string s( "hello world" ) ;
    cout << s << endl;
    string s22 = s.substr( 0 , 5 ) ;        // s22 == hello
    cout << s22 << endl;
    string s23 = s.substr( 6 ) ;            // s23 == world
    cout << s23 << endl;
    string s24 = s.substr( 6 , 11 ) ;       // s24 == world
    cout << s24 << endl;
  //string s25 = s.substr( 12 ) ;            // s25会抛出一个out_of_range异常
  //cout << s25 << endl;
    return 0;
}
