/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<int> store;
        vector<int> ans;
        ListNode *node = head;
        if(head == nullptr){
            return ans;
        }
        while(node != nullptr){
            store.push(node->val);
            node = node->next;
        }
        while(store.size()!= 0){
            ans.push_back(store.top());
            store.pop();
        }
        return ans;
    }
};