/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == nullptr) return pListHead;
        ListNode* head = pListHead;
        ListNode* tail = pListHead;
        for(auto i = 0; i<k;i++){
            if(head == nullptr) return nullptr;
            head = head->next;
            
        }
        while(head != nullptr){
            head = head ->next;
            tail = tail ->next;
        }
    return tail;
    }
};