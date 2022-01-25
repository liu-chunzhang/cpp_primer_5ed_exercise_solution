// ������������֤�̲���16.4.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

template <typename T> ostream& print( ostream &os , const T &t ) ;
template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) ;

int main() {
    print( cout , 35 , "string" , 'c' , -0.35 ) ;
    return 0;
}

template <typename T> ostream& print( ostream &os , const T &t ) {
    cout << "Using function template <typename T> ostream& print( ostream &os , const T &t )" << endl;
    return os << t ;
}

template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest ) {
    cout << "Using function template <typename T,typename... Args> ostream& print( ostream &os , const T &t , const Args&... rest )" << endl;
    os << t << ", " ;
    return print( os , rest... ) ;
}
