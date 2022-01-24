// ������������֤��������ϰ11.19�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <set>
#include "Sales_data.h"

typedef bool ( *pf )( const Sales_data& , const Sales_data& ) ;

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) ;

int main() {
    multiset<Sales_data,pf> bookstore( compareIsbn ) ;
    multiset<Sales_data,pf>::iterator it = bookstore.begin() ;
    return 0;
}

bool compareIsbn( const Sales_data &lhs , const Sales_data &rhs ) {
    return lhs.isbn() == rhs.isbn() ;
}

// �ع˽̲�P379���������͵�multiset�ṹ�У���������Ҫ�ṩһ��ƫ�����������ʱ���ǿ���ʹ�ú���ָ�����ṩ����ıȽϲ������ͣ�������ʹ��decltype������
// ʹ��decltypeʱ��Ҫע�����ȡָ���*����Ϊdecltypeȡ�õĽ���ǲ�����ָ��ģ���
