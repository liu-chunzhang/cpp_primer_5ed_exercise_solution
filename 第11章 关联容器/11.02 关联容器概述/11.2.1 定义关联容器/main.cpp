// ������������֤�̲���11.2.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    map<string,size_t> word_count ;
    set<string> exclude = { "The" , "But" , "And" , "Or" , "An" , "A" , "the" , "but" , "and" , "or" , "an" , "a" } ;
    map<string,string> authors = { { "Joyce" , "James" } , { "Austen" , "Jane" } , { "Dicken" , "Charles" } } ;

    vector<int> ivec ;
    for( vector<int>::size_type i = 0 ; i != 10 ; ++i ){                                     // ����һ����20��Ԫ�ص�vector������0��9ÿ������
        ivec.push_back( i ) ;                                                                 // ����������
        ivec.push_back( i ) ;
    }
    set<int> iset( ivec.cbegin() , ivec.cend() ) ;
    multiset<int> miset( ivec.cbegin() , ivec.cend() ) ;
    cout << ivec.size() << endl;                                                              // ��ӡΪ20�����������ǵ�Ԥ��
    cout << iset.size() << endl;                                                              // ��ӡ��10��iset��������ivec�Ĳ��ظ���Ԫ��
    cout << miset.size() << endl;                                                             // ��ӡ��20��miset�������е�20��Ԫ��
    return 0;
}
