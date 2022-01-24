// 本程序用于验证读者在练习3.21中的想法，并在必要的地方予以说明；用迭代器重做练习3.16
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1 ;
    cout << "v1的元素个数是：" << v1.size() << endl;
    if( v1.cbegin() != v1.cend() ){                             // 用迭代器判断元素有无：头迭代器与尾迭代器相等，则说明没有元素；反之亦然。下同
        cout << "v1的元素分别是：" ;
        for( int i : v1 )                                        // 使用范围for语句遍历每一个元素是可以的（因为我们并没在这个循环里向vector对象添
            cout << i << " " ;                                   // 加元素）
        cout << endl;
    }
    else
       cout << "v1没有元素。" << endl;

    vector<int> v2( 10 ) ;
    cout << "v2的元素个数是：" << v2.size() << endl;
    if( v2.cbegin() != v2.cend() ){
        cout << "v2的元素分别是：" ;
        for( vector<int>::const_iterator it = v2.cbegin() ; it != v2.cend() ; ++it )    // 用传统for语句执行循环也是可以的，此处可以使用循环迭代器                            //
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v2没有元素。" << endl;

    vector<int> v3( 10 , 42 ) ;
    cout << "v3的元素个数是：" << v3.size() << endl;
    if( v3.cbegin() != v3.cend() ){
        cout << "v3的元素分别是：" ;
        for( vector<int>::const_iterator it = v3.cbegin() ; it != v3.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v3没有元素。" << endl;

    vector<int> v4{ 10 };
    cout << "v4的元素个数是：" << v4.size() << endl;
    if( v4.cbegin() != v4.cend() ){
        cout << "v4的元素分别是：" ;
        for( vector<int>::const_iterator it = v4.cbegin() ; it != v4.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v4没有元素。" << endl;

    vector<int> v5{ 10 , 42 } ;
    cout << "v5的元素个数是：" << v5.size() << endl;
    if( v5.cbegin() != v5.cend() ){
        cout << "v5的元素分别是：" ;
        for( vector<int>::const_iterator it = v5.cbegin() ; it != v5.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v5没有元素。" << endl;

    vector<string> v6{ 10 } ;
    cout << "v6的元素个数是：" << v6.size() << endl;
    if( v6.cbegin() != v6.cend() ){
        cout << "v6的元素分别是：" ;
        for( vector<string>::const_iterator it = v6.cbegin() ; it != v6.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v6没有元素。" << endl;

    vector<string> v7{ 10 , "Hi" } ;
    cout << "v7的元素个数是：" << v7.size() << endl;
    if( v7.cbegin() != v7.cend() ){
        cout << "v7的元素分别是：" ;
        for( vector<string>::const_iterator it = v7.cbegin() ; it != v7.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v7没有元素。" << endl;

    return 0;
}
