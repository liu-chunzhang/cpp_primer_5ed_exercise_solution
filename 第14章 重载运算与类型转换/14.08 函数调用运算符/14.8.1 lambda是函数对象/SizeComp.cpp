#include "SizeComp.h"

SizeComp::SizeComp( size_t n ) : sz( n ) { }                // ���βζ�Ӧ����ı���

bool SizeComp::operator() ( const string &s ) const {     // �õ���������ķ������͡��βκͺ����嶼��lambdaһ��
    return s.size() >= sz ;
}
