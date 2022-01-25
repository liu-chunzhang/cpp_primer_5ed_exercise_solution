#ifndef EXAM_H
#define EXAM_H

#include <iostream>
#include <bitset>
using namespace std;

template <size_t N>
class exam {
    public:
        exam() = default ;
        ~exam() = default ;

    public:
        bool get_answer( size_t ) const ;
        void rewrite_answer( size_t ) ;
        void rewrite_answer( size_t , bool ) ;
        size_t size() const ;
        bitset<N>& get_all_answer() ;
        unsigned score( const bitset<N>& ) ;        // 用于获取解答分数的函数

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
size_t exam<N>::size() const {
    return N ;
}

template <size_t N>
bitset<N>& exam<N>::get_all_answer() {
    cout << "您的答案简写为：" << endl;
    return bitN ;
}

template <size_t N>
unsigned exam<N>::score( const bitset<N>& b ) {
    unsigned sum = 0 ;
    for( size_t u = 0 ; u != N ; ++u )
        if( bitN[ u ] == b[ u ] )
            ++sum ;
    return sum ;
}

#endif // EXAM_H
