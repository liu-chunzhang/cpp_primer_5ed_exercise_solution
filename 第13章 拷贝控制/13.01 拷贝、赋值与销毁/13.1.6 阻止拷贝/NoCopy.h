#ifndef NOCOPY_H
#define NOCOPY_H

struct NoCopy{
    public:
        NoCopy() = default ;                                       // 使用合成的默认构造函数
        NoCopy( const NoCopy &rhs ) = delete ;                     // 阻止拷贝
        NoCopy &operator = ( const NoCopy &rhs ) = delete ;       // 阻止赋值
        ~NoCopy() = default;                                       // 使用合成的析构函数
};

struct NoDtor{
    public:
        NoDtor() = default ;                                  // 使用合成的默认构造函数
        ~NoDtor() = delete;                                   // 我们不能销毁NoDtor类型的对象
};

class PrivateCopy{                                            // 此处是class结构体，和struct结构体的默认访问权限不同
        PrivateCopy( const PrivateCopy& ) ;                   // 拷贝控制成员是private的，因此普通用户代码无法访问
        PrivateCopy &operator = ( const PrivateCopy& ) ;     // 用户可以定义此类型对象，但是不能够拷贝它们
    public:
        PrivateCopy() = default ;                             // 使用合成的默认构造函数
        ~PrivateCopy() ;
};

#endif // NOCOPY_H
