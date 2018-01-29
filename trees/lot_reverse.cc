#include "../lib/basic.h"

using namespace std;

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    queue<TreeNode*> q;
    vector<vector<int>> ret;
    if(NULL == root)
        return ret;
    q.push(root);
    stack<vector<int>> st;
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
        st.push(vc);
    }

    while(!st.empty()){
        ret.push_back(st.top());
        st.pop();
    }
    return ret;
}

int main(){
    return 0;
}
