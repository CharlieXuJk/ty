/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if (pHead == nullptr) return nullptr;
        ListNode* pFast = pHead;
        ListNode* pSlow = pHead;
        int count = 0;
        
        while(true){
            if(pFast -> next == nullptr || pFast -> next -> next == nullptr)
                return nullptr;
            pFast = pFast->next->next;
            pSlow = pSlow->next;
            count++;
            if(pFast == pSlow)
                break;
        }
        pFast = pHead;
        pSlow = pHead;
        for(auto i = 0; i < count; i++){
            pFast = pFast->next;
        }
        while(true){
            if(pFast == pSlow)
                return pFast;
            pFast = pFast->next;
            pSlow = pSlow->next;
            
        }
        return nullptr;
    }
};