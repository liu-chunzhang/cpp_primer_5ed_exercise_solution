// ������������֤�̲���3.3.1�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <vector>
#include "Sales_item.h"
using namespace std;

int main() {
    /*
    vector<int> ivec;                                 // ������ʵ���Ժ�ϵͳ��Ĭ�ϳ�ʼ��vector���󣬵���������һ��Ԫ�ض�û�У������ǲ��ܹ��鿴
    vector<Sales_item> Sales_vec ;                    // ����ֵ�ģ����򽫷�������������󲻻���б���;��棡
    vector<vector<string>> file ;                     // ��������Ԫ����vector����
    cout << ivec[0] << endl;
    */

    /*
    vector<int> ivec;
    vector<int> ivec2( ivec );
    vector<int> ivec3 = ivec ;
    vector<string> svec{ ivec2 } ;                    // ���󣺸�ֵ���������Ͳ�ƥ�䣡
    */

    /*
    vector<string> v1{ "a" , "an" , "the" };          // ����ṩ���ǳ�ʼԪ��ֵ���б���ֻ�ܰѳ�ʼֵ�����ڻ������ڽ��г�ʼ���������ܹ�����Բ
  //vector<string> v2( "a" , "an" , "the" );          // �����ڣ�
    */

    /*
    vector<int> ivec( 10 , -1 ) ;                     // 10��intԪ�أ�ÿ������ʼ��Ϊ-1
    vector<string> svec( 10 , "hi" );                 // 10��stringԪ�أ�ÿ������ʼ��Ϊ"hi"
    */

    /*
    vector<int> ivec( 10 ) ;                          // 10��intԪ�أ�ÿ������ʼ��Ϊ0
    vector<string> svec( 10 ) ;                       // 10��stringԪ�أ�ÿ������ʼ��Ϊ�յ�string
  //vector<int> vi = 10 ;                             // ���󣺱���ʹ��ֱ�ӳ�ʼ������ʽָ��������С
    */

    /*
    vector<int> vi = 10 ;                             // ���󣺱���ʹ��ֱ�ӳ�ʼ������ʽָ��vector��С
    */

    /*
    vector<int> v1( 10 ) ;                            // v1��10��Ԫ�أ�ÿ����ֵ��Ϊ0
    vector<int> v2{ 10 } ;                            // v2��1��Ԫ�أ���Ԫ�ص�ֵ��10
    cout << v1.size() << " " << v2.size() << endl;

    vector<int> v3( 10 , 1 ) ;                        // v3��10��Ԫ�أ�ÿ����ֵ����1
    vector<int> v4{ 10 , 1 } ;                        // v4��2��Ԫ�أ�ֵ�ֱ���10��1
    cout << v3.size() << " " << v4.size() << endl;
    */

    /*
    vector<string> v5{ "hi" } ;                      // �б��ʼ����v5��һ��Ԫ��
    vector<string> v6( "hi" ) ;                      // ���󣺲���ʹ���ַ�������ֵ����vector��
    vector<string> v7{ 10 } ;                        // v7��10��Ĭ�ϳ�ʼֵ��Ԫ��
    vector<string> v8{ 10 , "hi" } ;                 // v8��10��ֵΪ"hi"��Ԫ��
    */

    return 0;
}
