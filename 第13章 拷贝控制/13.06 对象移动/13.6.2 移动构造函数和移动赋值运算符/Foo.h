#ifndef FOO_H
#define FOO_H

class Foo {
    public:
        Foo() = default ;
        Foo( const Foo &f ) : i( f.i ) { cout << "Using function Foo::Foo( const Foo &f )" << endl; }
    private:
        int i = 0 ;
};

#endif // FOO_H
