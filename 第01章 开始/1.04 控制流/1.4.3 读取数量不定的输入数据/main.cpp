// 本程序用于验证教材中1.4.3节内容的可靠性，并提供感性认知
#include <iostream>
using namespace std;

int main(){
    int sum = 0 , value = 0 ;
    while( cin >> value )
        sum += value ;
    cout << "Sum is " << sum << " ." << endl;
    return 0;
}
