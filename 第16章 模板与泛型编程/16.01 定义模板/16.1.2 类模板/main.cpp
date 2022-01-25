// ������������֤�̲���16.1.2�����ݵĿɿ��ԣ����ṩ������֪
#include "Blob.h"
#include "C.h"
#include "Foo.h"

template <typename T> using twin = pair<T,T> ;                         // ���ܰ���һ�����ͱ������ں���������ڲ�
template <typename T> using partNo = pair<T,unsigned> ;

int main() {
    Blob<int> ia , ia2 = { 0 , 1 , 2 , 3 , 4  } ;
    Blob<string> names ;
    Blob<double> prices ;

    Blob<string> articles = { "a" , "an" , "the" } ;

    Blob<int> squares = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;     // ʵ����Blob<int>�ͽ���initializer_list<int>�Ĺ��캯��
    for( size_t i = 0 ; i != squares.size() ; ++i )
        squares[i] = i * i ;                                            // ʵ����Blob<int>::operator[]( size_t )
    for( size_t i = 0 ; i != squares.size() ; ++i )
        cout << i << " " ;
    cout << endl;

    Blob<char> ca ;
    Blob<int> ia3 ;
    cout << ( ia == ia2 ? "ia == ia2" : "ia != ia2" ) << endl;
    cout << ( ia == ia3 ? "ia == ia3" : "ia != ia3" ) << endl;

    twin<string> authors = { "first" , "second" };
    twin<int> win_loss ;
    twin<double> area ;

    partNo<string> books = { "cpp primer 5ed"  , 30 } ;

    Foo<string> fs ;
    Foo<int> fi , fi2 , fi3 ;
    size_t ct = Foo<int>::count() ;     // ʵ����Foo<int>::count
    ct = fi.count() ;                    // ʹ��Foo<int>::count
  //ct = Foo::count() ;                  // ����ʹ���ĸ�ģ��ʵ����count
    return 0;
}
