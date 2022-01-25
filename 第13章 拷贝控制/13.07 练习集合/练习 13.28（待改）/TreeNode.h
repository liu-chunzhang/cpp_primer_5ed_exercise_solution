#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
using namespace std;

class TreeNode{                                  // 这是一个二叉树数据结构
    public:
        TreeNode();
        void CopyTree() ;
        TreeNode( const TreeNode& tn ) ;
        int ReleaseTree() ;
        virtual ~TreeNode();

    private:
        string value ;
        int count0 ;
        TreeNode* left ;
        TreeNode* right ;
};

#endif // TREENODE_H
