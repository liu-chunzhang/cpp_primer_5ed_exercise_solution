// ������������֤�̲���18.1.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

void manip() ;

int main()
{   /*
    try{
    }catch( my_error &eObj ){                   // ��������
        eObj.status = errCodes::severeErr ;     // �޸����쳣����
        throw ;                                 // �쳣�����status��Ա��severeErr
    }catch( other_error eObj ){                 // ����������
        eObj.status = errCodes::badErr ;        // ֻ�޸����쳣����ľֲ��汾
        throw ;                                 // �쳣�����status��Աû�иı�
    }
    */

    return 0;
}

void manip() {
    try{
        // �ٶ�����Ĳ������������׳�һ���쳣
    }
    catch(...){
        // �����쳣��ĳЩ�������
        throw ;
    }
}
