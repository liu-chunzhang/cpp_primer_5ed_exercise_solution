// 本程序用于验证读者在练习14.44中的想法，并在必要的地方予以说明
#include <iostream>
#include <map>
#include <functional>
using namespace std;

int main() {
    double i , j ;
    string f ;
    map<string,function<double(double,double)>> binops = { { "+" , plus<double>() } , { "-" , minus<double>() } , { "*" , multiplies<double>() } , { "/" , divides<double>() } } ;
    cin >> i >> f >> j ;
    cout << binops[ f ]( i , j ) << endl;
    system( "pause" ) ;
    return 0;
}

// 由于浮点数本身没有取模运算，所以不定义这个运算
