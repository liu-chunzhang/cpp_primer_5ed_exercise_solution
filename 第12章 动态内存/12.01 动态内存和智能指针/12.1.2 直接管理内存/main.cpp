// ������������֤�̲���12.1.2�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int *pi = new int ;
    string *ps = new string ;
    cout << *pi << endl;                                                             // int��Ĭ�ϳ�ʼ����û�г�ʼ����ֵ��ȷ��

    int *pi0 = new int( 1024 ) ;
    string *ps2 = new string( 10 , '9' ) ;
    vector<int> *pvi = new vector<int> { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;  // �б��ʼ��

    string *ps3 = new string ;
    string *ps4 = new string() ;
    int *pi1 = new int ;                                                              // pi1ָ��Ķ�̬�ڴ����Ĭ�ϳ�ʼ����*pi1��ֵû�ж���
    int *pi2 = new int() ;                                                            // ֵ��ʼ��Ϊ0��*pi2 = 0
    cout << *pi1 << " " << *pi2 << endl;

    int obj = 3 ;
    auto p1 = new auto( obj ) ;                                                       // pָ��һ����obj������ͬ�Ķ��󣬸ö�����obj���г�ʼ��

    const int *pci = new const int( 1024 ) ;
    const string *pcs = new const string ;

    int *p4 = new int ;                                                               // �������ʧ�ܣ�new�׳�std::bad_alloc
    int *p5 = new ( nothrow ) int ;                                                  // �������ʧ�ܣ�new����һ����ָ��
    delete p1 ;

    int i , *pi6 = &i , *pi7 = nullptr ;
    double *pd = new double( 33 ) , *pd2 = pd ;
  //delete i ;                                                                        // ����i����һ��ָ��
    delete pi6 ;                                                                     // δ������Ϊ��pi1ָ��һ���ֲ���������������������������
    delete pd ;                                                                      // ��ȷ
    delete pd2 ;                                                                     // δ������Ϊ��pd2ָ����ڴ��Ѿ����ͷ��ˣ����������ֱ�һ��
                                                                                      // ָ����ָ��Ŀռ��Ƿ��ѱ��ͷ�
    delete pi7 ;                                                                     // ��ȷ���ͷ�һ����ָ�����������
    const int *pci2 = new const int( 1024 ) ;
    delete pci2 ;                                                                    // ��ȷ���ͷ�һ��const����

    int *p( new int( 42 ) ) ;                                                        // pָ��̬�ڴ�
    auto q = p ;                                                                     // p��qָ����ͬ���ڴ�
    delete p ;                                                                       // p��q����Ϊ��Ч
    p = nullptr ;                                                                    // ָ��p����ָ���κζ��󣬵��Ƕ���qû���κ�����
    return 0;
}
