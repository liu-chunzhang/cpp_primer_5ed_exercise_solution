// ������������֤��������ϰ5.14�е��뷨�����ڱ�Ҫ�ĵط�����˵��
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
            cout << "�����ַ�����������1�Ρ�" << endl;
    }
    else{
        cerr << "δ��⵽һ���ַ������������룡" << endl;
        return -1 ;
    }
    return 0;
}
