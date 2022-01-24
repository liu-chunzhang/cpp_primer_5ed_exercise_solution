// 本程序用于验证读者在练习5.14中的想法，并在必要的地方予以说明
#include <iostream>
using namespace std;

int main() {
    string transtr ;
    if( cin >> transtr ){
        unsigned curr_count = 1 , result_count = 1 ;
        string currstr , resultstr ;
        while( cin >> currstr )
            if( currstr == transtr )
                ++curr_count ;
            else{
                if( curr_count > result_count )
                    resultstr = transtr , result_count = curr_count ;
                transtr = currstr ;
                curr_count = 1 ;
            }
        if( result_count > 1 )
            cout << resultstr << " occurs " << result_count << " times." << endl;
        else
            cout << "所有字符串均出现了1次。" << endl;
    }
    else{
        cerr << "未检测到一个字符串，请检查输入！" << endl;
        return -1 ;
    }
    return 0;
}
