// ������������֤�̲���11.2.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

pair<string,int> process( vector<string> &v ) ;

int main() {
    pair<string,string> anon ;
    pair<string,size_t> word_count ;
    pair<string,vector<int>> line ;
    pair<string,string> author = { "James" , "Joyce" } ;
    cout << author.first << " " << author.second << endl;
    return 0;
}

pair<string,int> process( vector<string> &v ){
    if( !v.empty() )
        return { v.back() , v.back().size() } ;     // �б��ʼ��
    else
        return pair<string,int>() ;                 // ��ʽ���췵��ֵ
}
