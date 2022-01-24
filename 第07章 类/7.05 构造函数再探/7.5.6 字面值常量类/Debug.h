#ifndef DEBUG_H
#define DEBUG_H

#include <iostream>
using namespace std;

class Debug{
    public:
        constexpr Debug( bool b = true ) : hw( b ) , io( b ) , other( b ) { }
        constexpr Debug( bool h , bool i , bool o ) : hw( h ) , io( i ) , other( o ) { }
        constexpr bool any() const { return hw || io || other ; }                          // �˴��̲��ϵĴ�������Ӧ�ü���const������main
        void set_io( bool b ) { io = b ; }                                                   // �����еĴ������޷��������еģ�ԭ�����ڣ����õ�
        void set_hw( bool b ) { hw = b ; }                                                   // ��ʽ����this��һ���ǳ���ָ�룬���ܹ���ָ����
        void set_other( bool b ) { other = b ;}                                              // Debug���󣬶�main�����еĶ�����constexpr�ģ���
                                                                                              // ��Ϊ�˳����������ݴ�͵��ñ���ʹ�ó���ָ�룬��
    private:                                                                                 // �����constʹ֮��Ϊָ�����ĵ�ָ�롣��������
        bool hw ;       // Ӳ�����󣬶���IO����                                              // �̲�P268���һ�δ��룬���򽫱���
        bool io ;       // IO����
        bool other ;    // ��������
};

#endif // DEBUG_H
