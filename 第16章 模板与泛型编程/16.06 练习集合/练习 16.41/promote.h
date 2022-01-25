#ifndef PROMOTE_H
#define PROMOTE_H

#include <limits>
#include <iostream>
using namespace std;

template <typename T> struct promote;

template <> struct promote<short int> {
    using type = int;
};

template <> struct promote<unsigned short int> {
    using type = unsigned int;
};

template <> struct promote<int> {
    using type = long long int;
};

template <> struct promote<unsigned int> {
    using type = unsigned long int;
};

template <> struct promote<long int> {
    using type = long long int;
};

template <> struct promote<unsigned long int> {
    using type = unsigned long int;
};

template <> struct promote<long long int> {
    using type = unsigned long long int;
};

template <> struct promote<unsigned long long int> {
    using type = unsigned long long int;
};

template <> struct promote<float> {
    using type = double;
};

template <> struct promote<double> {
    using type = long double;
};

template <> struct promote<long double> {
    using type = long double;
};

template <typename T> using promote_t = typename promote<T>::type;

template <typename T> auto sum( T lhs , T rhs ) -> promote_t<T> {
    return static_cast<promote_t<T>>( lhs ) + rhs;
}

#endif // PROMOTE_H
