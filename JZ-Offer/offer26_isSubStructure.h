//
// Created by 10372 on 2021/7/25.
//

#ifndef MYLEETCODE_OFFER26_ISSUBSTRUCTURE_H
#define MYLEETCODE_OFFER26_ISSUBSTRUCTURE_H

struct TreeNode
{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x),left(nullptr), right(nullptr){};
};

class offer26_isSubStructure {
public:
    bool isSubStructure(TreeNode * A, TreeNode * B);
    bool confirmSub(TreeNode * node_in_A, TreeNode * B);
    bool findSub(TreeNode * A, TreeNode *B);

};


#endif //MYLEETCODE_OFFER26_ISSUBSTRUCTURE_H
