// 本程序用于验证读者在练习3.16中的想法，并在必要的地方予以说明：检验练习3.13的答案
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1 ;
    cout << "v1的元素个数是：" << v1.size() << endl;
    if( v1.size() > 0 ){                                   // 当vector里有元素时逐个输出
        cout << "v1的元素分别是：" ;
        for( auto i : v1 )                                  // 使用范围for语句遍历每一个元素
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v1没有元素。" << endl;

    vector<int> v2( 10 ) ;
    cout << "v2的元素个数是：" << v2.size() << endl;
    if( v2.size() > 0 ){                                   // 当vector里有元素时逐个输出
        cout << "v2的元素分别是：" ;
        for( auto i : v2 )                                  // 使用范围for语句遍历每一个元素
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v2没有元素。" << endl;

    vector<int> v3( 10 , 42 ) ;
    cout << "v3的元素个数是：" << v3.size() << endl;
    if( v3.size() > 0 ){                                   // 当vector里有元素时逐个输出
        cout << "v3的元素分别是：" ;
        for( auto i : v3 )                                  // 使用范围for语句遍历每一个元素
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v3没有元素。" << endl;

    vector<int> v4{ 10 };
    cout << "v4的元素个数是：" << v4.size() << endl;
    if( v4.size() > 0 ){                                   // 当vector里有元素时逐个输出
        cout << "v4的元素分别是：" ;
        for( auto i : v4 )                                  // 使用范围for语句遍历每一个元素
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v4没有元素。" << endl;

    vector<int> v5{ 10 , 42 };
    cout << "v5的元素个数是：" << v5.size() << endl;
    if( v5.size() > 0 ){                                   // 当vector里有元素时逐个输出
        cout << "v5的元素分别是：" ;
        for( auto i : v5 )                                  // 使用范围for语句遍历每一个元素
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v5没有元素。" << endl;

    vector<string> v6{ 10 };
    cout << "v6的元素个数是：" << v6.size() << endl;
    if( v6.size() > 0 ){                                   // 当vector里有元素时逐个输出
        cout << "v6的元素分别是：" ;
        for( auto i : v6 )                                  // 使用范围for语句遍历每一个元素
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v6没有元素。" << endl;

    vector<string> v7{ 10 , "Hi" } ;
    cout << "v7的元素个数是：" << v7.size() << endl;
    if( v7.size() > 0 ){                                   // 当vector里有元素时逐个输出
        cout << "v7的元素分别是：" ;
        for( auto i : v7 )                                  // 使用范围for语句遍历每一个元素
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v7没有元素。" << endl;

    return 0;
}
