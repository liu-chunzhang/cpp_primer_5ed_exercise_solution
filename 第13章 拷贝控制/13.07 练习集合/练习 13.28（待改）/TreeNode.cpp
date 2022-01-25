#include "TreeNode.h"

TreeNode::TreeNode() : value( "" ) , count0( 1 ) , left( nullptr ) , right( nullptr ) { }  // 若实现类指针行为，且以count0作为引用计数，默认
                                                                                            // 构造函数写为这样
void TreeNode::CopyTree(){
    if( left )
        left->CopyTree() ;
    if( right )
        right->CopyTree() ;
    ++count0 ;
}

TreeNode::TreeNode( const TreeNode& tn ) : value( tn.value ) , count0( 1 ) , left( tn.left ) , right( tn.right ){
    if( left )
        left->CopyTree() ;
    if( right )
        right->CopyTree() ;
}

int TreeNode::ReleaseTree(){
    if( left ){
        if( !left->CopyTree() )
    delete left ;
    }
    if( right ){
        if( !right->CopyTree() )
    delete right ;
    }
    --count0 ;
    return count0 ;
}

TreeNode::~TreeNode(){
    if( count0 )
        ReleaseTree() ;
}
