// 本程序用于验证读者在练习9.27中的想法，并在必要的地方予以说明
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ivec ;
  //cout << ivec.at(0) << endl;
  //cout << ivec[0] << endl;
  //cout << ivec.front() << endl;
  //cout << *(ivec.cbegin()) << endl;
    return 0;
}

// 本节的程序容易异常终止，可选择依次去掉相应的//来分别实现相应语句的效果。
// 因为vector为空，此时用at访问容器的第一个元素会抛出一个out_of_range异常，而此程序未捕获此异常，因此程序会因异常而退出。正确的编程方式是捕获可能
// 的异常，进行相应的处理。但对于后三种获取容器中首元的方法，当容器为空时，不会抛出out_of_range异常，而是导致程序直接退出。因此正确的编程方式是，
// 采取这几种获取容器的方法时，检查下标的合法性（对front和begin只需检查容器是否为空），确定没有问题后再获取元素。当然这种方法对at也适用。
