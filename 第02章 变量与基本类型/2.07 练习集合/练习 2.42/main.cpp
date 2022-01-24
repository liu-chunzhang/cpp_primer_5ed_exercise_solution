// 本程序用于验证读者在练习2.42中的想法，并在必要的地方予以说明
#include "Sales_data.h"

int main() {
    Sales_data book ;
    cout << "请输入销售记录：" << endl;
    while( cin >> book )
        cout << "ISBN、售出本数、原始价格、实售价格、折扣分别为" << book << endl;

    Sales_data trans1 , trans2 ;
    cout << "请输入两条ISBN相同的销售记录：" << endl;
    cin >> trans1 >> trans2 ;
    if( compareIsbn( trans1 , trans2 ) )
        cout << "汇总信息：ISBN、售出本数、原始价格、实售价格、折扣分别为 " << trans1 + trans2 << endl;
    else
        cerr << "两条销售记录的ISBN不同！" << endl;

    Sales_data total , trans ;
    cout << "请输入几条ISBN相同的销售记录：" << endl;
    if( cin >> total ){
        while( cin >> trans ){
            if( compareIsbn( total , trans ) )
                total += trans ;
            else
                cerr << "当前书籍的ISBN信息不同！" << endl;
            break;
        }
        cout << "有效汇总信息：ISBN、售出本数、原始价格、实售价格、折扣为" << total << endl;
    }else{
        cerr << "没有数据。" << endl;
        return -1 ;
    }

    int num = 1 ;
    cout << "请输入若干销售记录：" << endl;
    if( cin >> trans1 ){
        while( cin >> trans2 )
            if( compareIsbn( trans1 ,trans2 ) )
                num++ ;
            else{
                cout << trans1.isbn() << "共有" << num << "条销售记录。" << endl;
                trans1 = trans2 , num = 1;
            }
        cout << trans1.isbn() << "共有" << num << "条销售记录" << endl;
    }
    else{
        cerr << "没有数据！" << endl;
        return -1 ;
    }
    return 0;
}
