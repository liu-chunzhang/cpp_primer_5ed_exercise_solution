// ������������֤��������ϰ11.16�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <map>
using namespace std;

int main() {
    map<string,int> simap{ { "hello" , 3 } } ;
    map<string,int>::iterator simap_iter = simap.begin() ;
    simap_iter->second = 3 ;
    return 0;
}

// �����ù��������ĵ��������õ�����value_type��ֵ�����á���˶�map���ԣ��õ�����pair���͵����ã���first��Ա����const�Ĺؼ��֣�second��Ա����ֵ��
// ��ˣ�ֻ��ͨ��������ȥ�޸�ֵ�������ܸı�ؼ��֡�
