// ������������֤��������ϰ18.30�е��뷨�����ڱ�Ҫ�ĵط�����˵������Ӧ��Ķ����ͷ�ļ���Դ�ļ�������Ϊcbp�Ǳ��ڲ���
#include <iostream>
#include "garbage.h"

int main() {
    Final b1( -3 ) , b2 ;
    std::cout << b1.getival() << " " << b1.getiival() << std::endl;     // �Ӳ��Խ�������������ֻ�ᱻ��ʼ��һ�Σ����ᱻ����������ĳ�ʼ������
    b2 = b1 ;
    std::cout << b1.getival() << " " << b1.getiival() << std::endl;
    return 0;
}
