// ������������֤��������ϰ5.11�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include <iostream>
using namespace std;

int main() {
    unsigned aCnt = 0 , eCnt = 0 , iCnt = 0 , oCnt = 0 , uCnt = 0 , spaceCnt = 0 , tabCnt = 0 , newlineCnt = 0;
    char ch ;
    while( cin.get( ch ) ){                                             // get()������cin����������ĳ�Ա����������������ʽ���޲����ģ�
         switch( ch ){                                                   // ��һ�������ģ������������ġ�
            case 'a' : case 'A' :                                        // 1) ����������get����
                ++aCnt ;                                                 // �������ʽΪcin.get()��������ָ��������������ȡһ���ַ�������
                break ;                                                  // �հ��ַ����������ķ���ֵ���Ƕ�����ַ����������������е��ļ�
            case 'e' : case 'E' :                                       // ������������ֵ�����ļ�������־EOF(End Of File)��һ����-1��
                ++eCnt ;                                                 // ��EOF����-1������0����ֵ���ǿ��ǵ������ַ���ASCII�����������
                break;                                                  // ��ͬ��C++ϵͳ���õ�EOFֵ�п��ܲ�ͬ��
            case 'i' : case 'I' :                                       // 2) ��һ��������get���������̳̱�17.19��
                ++iCnt ;                                                // �������ʽΪcin.get(ch),�������Ǵ��������ж�ȡһ���ַ���������
                break;                                                  // ������ch�������ȡ�ɹ���������true(��)����ʧ��(���ļ�������)
            case 'o' : case 'O' :                                      // ��������false(��)��
                ++oCnt ;                                                // 3) ��3��������get���������̳̱�17.20��
                break;                                                 // �������ʽΪcin.get(�ַ�����, �ַ�����n, ��ֹ�ַ�)
            case 'u' : case 'U' :                                      // ��cin.get(�ַ�ָ��, �ַ�����n, ��ֹ�ַ�)
                ++uCnt ;                                               // �������Ǵ��������ж�ȡn-1���ַ�������ָ�����ַ�����(���ַ�ָ��ָ
                break;                                                 // �������)������ڶ�ȡn-1���ַ�֮ǰ����ָ������ֹ�ַ�������ǰ����
            case ' ' :                                                 // ��ȡ�������ȡ�ɹ���������true(��)����ʧ��(���ļ�������) ��
                ++spaceCnt ;                                           // ������false(��)��
                break;
            case '\t' :
                ++tabCnt ;
                break;
            case '\n' :
                ++newlineCnt ;
                break;
         }
    }
    cout << "Ԫ����ĸa��A�������ǣ�" << aCnt << endl;
    cout << "Ԫ����ĸe��E�������ǣ�" << eCnt << endl;
    cout << "Ԫ����ĸi��I�������ǣ�" << iCnt << endl;
    cout << "Ԫ����ĸo��O�������ǣ�" << oCnt << endl;
    cout << "Ԫ����ĸu��U�������ǣ�" << uCnt << endl;
    cout << "�ո�������ǣ�" << spaceCnt << endl;
    cout << "�Ʊ���������ǣ�" << tabCnt << endl;
    cout << "���з��������ǣ�" << newlineCnt << endl;
    return 0;
}
