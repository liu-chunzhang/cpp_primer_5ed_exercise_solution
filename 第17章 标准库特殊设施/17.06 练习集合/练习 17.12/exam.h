#ifndef EXAM_H
#define EXAM_H

#include <iostream>
#include <bitset>
using namespace std;

template <size_t N>
class exam {
    public:
        exam() ;
        ~exam() ;

    public:
        bool get_answer( size_t ) const ;
        void rewrite_answer( size_t ) ;                 // 这是下面题干所需函数的重载版本，只用来将某一题号的答案进行反转
        void rewrite_answer( size_t , bool ) ;          // 这就是需要的接受问题编号和表示解答的值更新测验解答的函数
        constexpr size_t size() const ;
        bitset<N>& get_all_answer() ;
        unsigned score( const bitset<N>& ) ;

    private:
        bitset<N> bitN ;
};

template <size_t N>
bool exam<N>::get_answer( size_t n ) const {
    return bitN[ n ] ;
}

template <size_t N>
void exam<N>::rewrite_answer( size_t n ) {
    bitN[ n ].flip() ;
}

template <size_t N>
void exam<N>::rewrite_answer( size_t n , bool b ) {
    bitN[ n ] = b ;
}

template <size_t N>
constexpr size_t exam<N>::size() const {
    return N ;
}

template <size_t N>
bitset<N>& exam<N>::get_all_answer() {
    cout << "您的答案简写为：" << endl;
    return bitN ;
}

template <size_t N>
unsigned exam<N>::score( const bitset<N>& b ) {
    unsigned count_num = 0 ;
    for( size_t u = 0 ; u != N ; ++u )
        if( bitN[ u ] == b[ u ] )
            ++count_num ;
    return count_num ;
}

#endif // EXAM_H
