
class Solution {
public:
    Node*dfs(Node* curr, unordered_map<Node*, Node*> &mp){
        Node* clone = new Node (curr->val);
        vector<Node*>neighbour;

        mp[curr]=clone;
        for(auto it: curr->neighbors){
            if(mp.find(it)==mp.end()){
                neighbour.push_back(dfs(it,mp));
            }
            else{
                neighbour.push_back(mp[it]);
            }
        }
        clone->neighbors=neighbour;
        return clone;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> mp;
        if(node==NULL){
            return NULL;
        }
        if(node->neighbors.size()==0){
            Node* clone = new Node(node->val);
            return clone;
        }
        return dfs(node,mp);
    }
};
