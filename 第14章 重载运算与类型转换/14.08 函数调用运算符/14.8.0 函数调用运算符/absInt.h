#ifndef ABSINT_H
#define ABSINT_H

struct absInt{
    int operator() ( int val ) const { return val < 0 ? -val : val ; }
};

#endif // ABSINT_H
