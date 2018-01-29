#include "../lib/basic.h"

using namespace std;

vector<double> averageOfLevels(TreeNode* root) {
    vector<double> ret;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        long value=0;
        int s=q.size();
        for(int i=0; i<s; i++){
            TreeNode* tempNode = q.front();
            q.pop();
            value += tempNode->val;
            if(tempNode->left)  q.push(tempNode->left);
            if(tempNode->right) q.push(tempNode->right);
        }
        ret.push_back((double)value/s);

    }
    return ret;
}

int main(){
    return 0;
}
