// ������������֤��������ϰ19.6�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "AndQuery.h"
#include "OrQuery.h"
#include "NotQuery.h"
#include <typeinfo>

int main() {
    Query_base *b = nullptr ;
    AndQuery *a = static_cast<AndQuery*>( b ) ;
    try{
        if( typeid( *a ) == typeid( Query_base ) )
            cout << "typeid( a ) == typeid( Query_base )" << endl;
        else
            cout << "Conversion failed." << endl;
    }catch( bad_typeid e ){
        cout << "bad_typeid" << endl;
    }
    return 0;
}

// ��ΪQuery_base�ǳ�����࣬���Բ��ܶ�������Ͷ�����Ӧ�Ķ�����ָ��ֻ���Ǹ�δ��ʼ������Чָ����߳�ʼ���Ŀ�ָ�룬�������Чָ�룬
// ���ٽ���ת���������ڲ��������в�����������Ȼ���벻���������Ϊ��֪������󶨵��������ͣ����Խ���ǰ󶨵�����Query_base��
// BinaryQuery��AndQuery�����ǣ����󶨵���ָ�����ͬ�̳�19.2.2����������׳�bad_typeid���쳣��
