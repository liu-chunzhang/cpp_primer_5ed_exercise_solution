// ������������֤�̲���7.3.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
using namespace std;

class Screen ;
class Link_screen ;

int main() {

    return 0;
}

class Link_screen{
    private:
        Screen window ;                   // ����Screen�ǲ���ȫ���ͣ����Ա��벻��ͨ��
        Link_screen *next ;
        Link_screen *prev ;
};
