// 本程序用于验证读者在练习3.25中的想法，并在必要的地方予以说明：用迭代器实现3.3.3节划分分数段
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<unsigned> uvec , scores( 11 , 0 ) ;                                    // uvec用来储存分数，scores用来储存各分数段的人
    int i = 0 ;                                                            // i用来承接输入的分数，k作为按照分数段将数据分开的凭借
    cout << "请输入一组想要分区的分数：" << endl;
    while( cin >> i )
        if( i > 101 )                                                              // 成绩应在合理范围之内
           cout << "分数输入有误！" << endl;
        else
           uvec.push_back( i ) ;
    cout << "您总共输入了" << uvec.size() << "个分数。" << endl;

    for( vector<unsigned>::const_iterator j = uvec.cbegin() ; j != uvec.cend() ; ++j ){ // 利用迭代器遍历所有已储存的分数
        unsigned k = ( *j )/10 ;
        ++scores[k] ;
    }

    i = 0 ;
    for( unsigned q : scores ){
        if( i != 10 )
           cout << "在" << 10*i << "~" << 10*(i+1)-1 << "范围内,有" << q << "个分数。" << endl;
        else
           cout << "100分有" << q << "个。" << endl;
        ++i ;
    }
    return 0;
}
