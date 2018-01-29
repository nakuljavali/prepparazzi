#include "../lib/basic.h"

using namespace std;

TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
    TreeNode* temp = NULL;
    while (root){
        if(root->val > p->val){
            temp = root;
            root = root->left;
        }
        else
            root = root->right;
    }
    return temp;
}

int main(){
    return 0;
}
