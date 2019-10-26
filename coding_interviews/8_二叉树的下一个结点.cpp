class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode == nullptr){
            return nullptr;
        }
        TreeLinkNode* temp = pNode;
        if(pNode->right!=nullptr){
            pNode = pNode->right;
            while(pNode->left !=nullptr){
                pNode = pNode->left;
            }
            return pNode;
        }
        if(pNode->next != nullptr){
            pNode = pNode ->next;
            while(pNode!=nullptr && pNode->right == temp){
                temp = pNode;
                pNode = pNode->next;
            }
            return pNode;        
        }
    }
};