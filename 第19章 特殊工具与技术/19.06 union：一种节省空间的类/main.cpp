// ������������֤�̲���19.6�����ݵĿɿ��ԣ����ṩ������֪
#include "Token.h"

int main() {
  //Token first_token = { 'a' } ;       // ��ʼ��cval��Ա
  //Token last_token ;                  // δ��ʼ����Token����
  //Token *pt = new Token ;             // ָ��һ��δ��ʼ����Token�����ָ��

  //last_token.cval = 'z' ;
  //pt->ival = 42 ;

    union {                     // ����union
        char cval ;
        int ival ;
        double dval ;
    };                          // ����һ��δ�����Ķ��󣬿���ֱ�ӷ������Ա
    cval = 'c' ;                // Ϊ�ոն����δ����������union����һ����ֵ
    ival = 42 ;                 // �ö���ǰ�����ֵ��42

  //delete pt ;
    return 0;
}
