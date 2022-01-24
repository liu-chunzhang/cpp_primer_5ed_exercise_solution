// ������������֤��������ϰ11.32�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
#include <map>
using namespace std;

void delete_author( multimap<string,string> &mssmap , const string &s ) ;
void print( multimap<string,string> &mssmap ) ;

int main() {
    multimap<string,string> bookstack ;
    bookstack.insert( { "����" , "����˫��" } ) ;
    bookstack.insert( { "����" , "����Ӣ��" } ) ;
    bookstack.insert( { "��ӹ" , "Ц������" } ) ;
    bookstack.insert( { "��ӹ" , "�����˲�" } ) ;
    bookstack.insert( { "��ӹ" , "¹����" } ) ;
    cout << "��������е�����Ϊ" << endl;
    print( bookstack ) ;
    cout << "���ɾ��Ŀǰ������������������Ļ������Ĳ������Ϊ��" << endl;
    delete_author( bookstack , "������" ) ;
    print( bookstack ) ;
    delete_author( bookstack , "����" ) ;
    cout << "���Ҫɾ��Ŀǰ���������������Ļ������Ĳ������Ϊ��" << endl;
    print( bookstack ) ;
    return 0;
}

void delete_author( multimap<string,string> &mssmap , const string &s ){
    if( mssmap.find( s ) == mssmap.end() )
        cout << "����ﻹû��" << s << "���鼮��" << endl;
    else
        mssmap.erase( mssmap.lower_bound( s ) , mssmap.upper_bound( s ) ) ;
}

void print( multimap<string,string> &mssmap ){
    for( const pair<string,string> &pss : mssmap )
        cout << pss.first << " " << pss.second << endl;
}

// ����ϰ11.31��ͬ���ҵ����˲���Ԫ�ص�˳�򣬵��Ǵ�ӡ�����Ȼ�ǡ���������ǰ������ӹ���ں󣬿��Կ�����ʵ��������������multimap����
// unordered_multimap��print������Ȼά�����ֵ������԰��ֵ����ӡ����Ҫ�����������
// ���ǣ�������Ҫ��Ĳ��ǹؼ��ֵ�Ĭ���������<�������ʱ�����Ҫ����һЩ������sort�㷨Ҫ�������������������������ʵ����������������ĵ���
// ����������һҪ��ֻ��˫��������������Բ���ֱ�Ӷ���ʹ��sort�㷨������������⣬���������ĸ���������ά���˹ؼ��ֵ�Ĭ���򣬴Ӷ�ʵ���˰��ؼ���
// �Ĳ��롢ɾ���Ͳ��ң���Ȼ�ǲ�����ͨ��sortʹ���ڲ�Ԫ�س��ֳ�����һ��˳��ģ���ֻ�б����ڲ�����Ԫ��ֵ��˳����������ſ������ⰲ��Ԫ��˳��λ�ã���
// ���ǿ��Զ���multimapʱʹ���Լ�����ıȽϲ���������Ĺؼ��ֵ��򣨶�����ʹ��<������򣩣�����ֻ����multimap����һ������ά���ؼ��֣���Ȼ��������
// ʹ��multimap�Ĺ��������ı�ؼ���˳��Ϊ�ˣ�����ֻ�ܽ�multimap�е�Ԫ�ؿ�����һ��˳����������vector������˳������ִ��sort�㷨������ùؼ��ֵ���
// ����
