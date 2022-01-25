#include "TreeNode.h"

TreeNode::TreeNode() : value( "" ) , count0( 1 ) , left( nullptr ) , right( nullptr ) { }  // ��ʵ����ָ����Ϊ������count0��Ϊ���ü�����Ĭ��
                                                                                            // ���캯��дΪ����
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
