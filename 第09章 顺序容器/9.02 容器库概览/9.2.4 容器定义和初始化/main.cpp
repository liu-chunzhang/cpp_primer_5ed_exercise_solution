// ������������֤�̲���9.2.4�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <forward_list>
#include <array>
using namespace std;

int main(){
    list<string> authors = { "Milton" , "Shakespeare" , "Austen" } ;
    vector<const char*> articles = { "a" , "an" , "the" } ;
    list<string> list2( authors ) ;
  //deque<string> authlist( authors ) ;                                      // �����������Ͳ�ƥ�䣡
  //vector<string> words( articles ) ;                                       // �����������ͱ���ƥ�䣡
    forward_list<string> words( articles.begin() , articles.end() ) ;

    list<string>::const_iterator it = --authors.cend()  ;     // ��ط�����дauthors.end() - 1����Ϊ����ĵ�������֧�����ֲ���
    deque<string> authList( authors.cbegin() , it ) ;          // ʹ�õ���������ǰ��һ�£�Ҳ���Ƕ���const��������ʵ�Σ����߶�����ͨ��������ʵ��

    array<int,42> iarr ;                // ������42��int������
    array<string,10> sarr ;            // ������10��string������
    array<int,42>::size_type i = 32 ;
  //array<int>::size_type j ;                                                // ����array<int>������һ������

    int digs[10] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
  //int cpy[10] = digs ;                                                     // �����������鲻֧�ֿ�����ֵ
    array<int,10> digits = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 } ;
    array<int,10> cpy2 = digits ;                                           // array�Ŀ�����Ȼ�������ǿ���ǰ������array���ͱ�����ȫ��ͬ��
  //array<double,10> cpy3 = digits ;
  //array<int,32> cp4 = digits ;
    return 0;
}
