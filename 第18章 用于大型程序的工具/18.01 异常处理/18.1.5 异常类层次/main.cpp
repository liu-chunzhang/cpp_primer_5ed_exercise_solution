// ������������֤�̲���18.1.5�����ݵĿɿ��ԣ����ṩ������֪
#include "Sales_data.h"

int main() {
    Sales_data item1 , item2 , sum ;
    cin >> item1 >> item2 ;                                  // Ϊ�˽�����ԣ���΢��һ��
    try{
        sum = item1 + item2 ;
        cout << sum << endl;
    }catch( const isbn_mismatch &e ){
        cerr << e.what() << ": left isbn(" << e.left << ") right isbn(" << e.right << ")" << endl;
    }
    return 0 ;
}
