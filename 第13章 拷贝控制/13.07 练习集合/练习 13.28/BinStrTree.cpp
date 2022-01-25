#include "BinStrTree.h"

BinStrTree::BinStrTree() : root( nullptr ) { }

BinStrTree::BinStrTree( const BinStrTree& bst ) : root( bst.root ) { root->CopyTree() ; }

BinStrTree::~BinStrTree(){
    if( !root->ReleaseTree() )
        delete root ;
}
