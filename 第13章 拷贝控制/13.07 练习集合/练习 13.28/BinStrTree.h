#ifndef BINSTRTREE_H
#define BINSTRTREE_H

#include "TreeNode.h"
class TreeNode ;

class BinStrTree{
    public:
        BinStrTree();
        BinStrTree( const BinStrTree& ) ;
        virtual ~BinStrTree();

    private:
        TreeNode *root ;
};

#endif // BINSTRTREE_H
