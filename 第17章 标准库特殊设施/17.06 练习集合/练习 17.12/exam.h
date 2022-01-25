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
        void rewrite_answer( size_t ) ;                 // ��������������躯�������ذ汾��ֻ������ĳһ��ŵĴ𰸽��з�ת
        void rewrite_answer( size_t , bool ) ;          // �������Ҫ�Ľ��������źͱ�ʾ����ֵ���²�����ĺ���
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
    cout << "���Ĵ𰸼�дΪ��" << endl;
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
