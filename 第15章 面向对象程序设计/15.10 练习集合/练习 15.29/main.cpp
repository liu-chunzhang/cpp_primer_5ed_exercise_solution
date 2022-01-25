// 本程序用于验证读者在练习15.28中的想法，并在必要的地方予以说明
#include <fstream>
#include <memory>
#include <vector>
#include "Bulk_quote.h"

int main() {
    vector<shared_ptr<Quote>> pQvec ;
    ifstream in( "data.txt" ) ;
    Bulk_quote bq ;
    double sum = 0 ;
    while( in >> bq )
        pQvec.push_back( make_shared<Bulk_quote>( bq ) ) ;
    for( const shared_ptr<Quote> &t : pQvec )
        sum += t->net_price( 1 ) ;
    cout << sum << endl;                                        // 打印结果是257.16，与之前相同，因为降价最少也得购买量不小于3
    sum = 0 ;
    for( const shared_ptr<Quote> &t : pQvec )
        sum += t->net_price( 4 ) ;
    cout << sum << endl;                                        // 打印结果是937.578，与之前不同，原因是购买量4>3，可参考txt文件里的数据
    return 0;
}

// 程序产生的结果会产生差异，因为当通过Quote类的对象调用虚函数net_price时不存在动态绑定，调用Quote类中定义的版本；而通过Quote类型指针调用虚函数
// net_price进行的是动态绑定，而该指针实际指向Bulk_quote时会调用Bulk_quote类中的版本。
