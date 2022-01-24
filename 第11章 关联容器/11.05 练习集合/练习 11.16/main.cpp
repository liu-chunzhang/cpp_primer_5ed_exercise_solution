// 本程序用于验证读者在练习11.16中的想法，并在必要的地方予以说明
#include <map>
using namespace std;

int main() {
    map<string,int> simap{ { "hello" , 3 } } ;
    map<string,int>::iterator simap_iter = simap.begin() ;
    simap_iter->second = 3 ;
    return 0;
}

// 解引用关联容器的迭代器，得到的是value_type的值的引用。因此对map而言，得到的是pair类型的引用，其first成员保存const的关键字，second成员保存值。
// 因此，只能通过迭代器去修改值，而不能改变关键字。
