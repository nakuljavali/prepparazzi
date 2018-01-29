#include "../lib/basic.h"

using namespace std;

vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*> q;
    vector<vector<int>> ret;
    if(NULL == root)
        return ret;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        vector<int> vc;
        for(int i=0; i<s; i++){
            TreeNode* temp = q.front();
            q.pop();
            vc.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ret.push_back(vc);
    }
    return ret;
}

int main(){
    return 0;
}
