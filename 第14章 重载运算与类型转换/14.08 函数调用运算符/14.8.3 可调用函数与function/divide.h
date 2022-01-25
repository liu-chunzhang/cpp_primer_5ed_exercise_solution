#ifndef DIVIDE_H
#define DIVIDE_H

#include <iostream>
using namespace std;

struct divide{
    int operator() ( int denominator , int divisor ){ return denominator / divisor ; }
};

#endif // DIVIDE_H
