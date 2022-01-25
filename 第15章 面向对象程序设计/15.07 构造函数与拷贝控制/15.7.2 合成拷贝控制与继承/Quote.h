#ifndef QUOTE_H
#define QUOTE_H

#include <iostream>
using namespace std;

class Quote{
    public:
        Quote() = default ;                                     // �Գ�Ա���ν���Ĭ�ϳ�ʼ��
        Quote( const string &book , double sales_price ) ;
        Quote( const Quote &quote ) = default ;                 // �Գ�Ա���ο���
        Quote& operator = ( const Quote &quote ) = default ;   // ��������
        Quote( Quote &&quote ) = default ;                      // �Գ�Ա���ο���
        Quote& operator = ( Quote &&quote ) = default ;        // �ƶ�����
        virtual ~Quote() = default ;

    public:
        string isbn() const ;
        virtual double net_price( size_t n ) const ;

    protected:
        double price = 0.0 ;

    private:
        string bookNo ;
};

#endif // QUOTE_H
