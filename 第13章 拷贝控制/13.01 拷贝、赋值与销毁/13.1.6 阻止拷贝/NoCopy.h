#ifndef NOCOPY_H
#define NOCOPY_H

struct NoCopy{
    public:
        NoCopy() = default ;                                       // ʹ�úϳɵ�Ĭ�Ϲ��캯��
        NoCopy( const NoCopy &rhs ) = delete ;                     // ��ֹ����
        NoCopy &operator = ( const NoCopy &rhs ) = delete ;       // ��ֹ��ֵ
        ~NoCopy() = default;                                       // ʹ�úϳɵ���������
};

struct NoDtor{
    public:
        NoDtor() = default ;                                  // ʹ�úϳɵ�Ĭ�Ϲ��캯��
        ~NoDtor() = delete;                                   // ���ǲ�������NoDtor���͵Ķ���
};

class PrivateCopy{                                            // �˴���class�ṹ�壬��struct�ṹ���Ĭ�Ϸ���Ȩ�޲�ͬ
        PrivateCopy( const PrivateCopy& ) ;                   // �������Ƴ�Ա��private�ģ������ͨ�û������޷�����
        PrivateCopy &operator = ( const PrivateCopy& ) ;     // �û����Զ�������Ͷ��󣬵��ǲ��ܹ���������
    public:
        PrivateCopy() = default ;                             // ʹ�úϳɵ�Ĭ�Ϲ��캯��
        ~PrivateCopy() ;
};

#endif // NOCOPY_H
