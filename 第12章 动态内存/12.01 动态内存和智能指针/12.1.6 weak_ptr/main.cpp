// ������������֤�̲���12.1.6�����ݵĿɿ��ԣ����ṩ������֪
#include "StrBlobPtr.h"

int main() {
    shared_ptr<int> ip = make_shared<int>( 42 ) ;
    weak_ptr<int> wp( ip ) ;
    return 0;
}
