// 本程序用于验证读者在练习11.32中的想法，并在必要的地方予以说明
#include <iostream>
#include <map>
using namespace std;

void delete_author( multimap<string,string> &mssmap , const string &s ) ;
void print( multimap<string,string> &mssmap ) ;

int main() {
    multimap<string,string> bookstack ;
    bookstack.insert( { "古龙" , "绝代双骄" } ) ;
    bookstack.insert( { "古龙" , "欢乐英雄" } ) ;
    bookstack.insert( { "金庸" , "笑傲江湖" } ) ;
    bookstack.insert( { "金庸" , "天龙八部" } ) ;
    bookstack.insert( { "金庸" , "鹿鼎记" } ) ;
    cout << "书库里现有的著作为" << endl;
    print( bookstack ) ;
    cout << "如果删除目前书库里梁羽生的著作的话，书库的藏书情况为：" << endl;
    delete_author( bookstack , "梁羽生" ) ;
    print( bookstack ) ;
    delete_author( bookstack , "古龙" ) ;
    cout << "如果要删除目前书库里古龙的著作的话，书库的藏书情况为：" << endl;
    print( bookstack ) ;
    return 0;
}

void delete_author( multimap<string,string> &mssmap , const string &s ){
    if( mssmap.find( s ) == mssmap.end() )
        cout << "书库里还没有" << s << "的书籍！" << endl;
    else
        mssmap.erase( mssmap.lower_bound( s ) , mssmap.upper_bound( s ) ) ;
}

void print( multimap<string,string> &mssmap ){
    for( const pair<string,string> &pss : mssmap )
        cout << pss.first << " " << pss.second << endl;
}

// 和练习11.31不同，我调整了插入元素的顺序，但是打印结果依然是“古龙”在前，“金庸”在后，可以看到，实际上由于容器是multimap而非
// unordered_multimap，print函数依然维护了字典序，所以按字典序打印不需要做额外调整。
// 但是，当我们要求的不是关键字的默认序（运算符<定义的序）时，这就要复杂一些。由于sort算法要求给定的两个迭代器是随机访问迭代器，关联容器的迭代
// 器不符合这一要求（只是双向迭代器），所以不能直接对其使用sort算法（并不难以理解，关联容器的根本特征是维护了关键字的默认序，从而实现了按关键字
// 的插入、删除和查找，自然是不可能通过sort使其内部元素呈现出另外一种顺序的）。只有本身在不关心元素值的顺序的容器，才可能随意安排元素顺序（位置）。
// 我们可以定义multimap时使用自己定义的比较操作所定义的关键字的序（而不是使用<定义的序），但这只是令multimap以另一种序来维护关键字，仍然不可能在
// 使用multimap的过程中来改变关键字顺序。为此，我们只能将multimap中的元素拷贝到一个顺序容器（如vector），对顺序容器执行sort算法，来获得关键字的其
// 他序。
