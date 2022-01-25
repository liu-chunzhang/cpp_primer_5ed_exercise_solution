// 本程序用于验证读者在练习15.26中的想法，并在必要的地方予以说明
#include "Bulk_quote.h"

int main()                                                              // 编写并运行此程序，可以看清楚如教材P556中所述的逐级构造和析构顺序
{   Quote base( "C++ Primer 5th edition" , 128.00 ) ;
    Bulk_quote bulk( "Core Python Programming" , 89.00 , 5 , 0.19 ) ;
    cout << base << endl;
    cout << bulk << endl;
    return 0;
}
