/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void checkTree(vector<int>& result, Node* root) {
        if (root->children.size() != 0) {
            for (Node* n : root->children) {
                checkTree(result, n);
            }
        }
        result.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> result;

        if (root != nullptr)
            checkTree(result, root);

        return result;
    }
};