/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){return nullptr;}

        ListNode* q = head, *p = head;
        if(n == 1){
            while(p->next->next != nullptr){
                p = p->next;
            }
            p->next = nullptr;
            return head;
        }
        for(auto i = 0; i<n-1;i++){
            q = q->next;
        }
        while(q->next!= nullptr){
            p = p->next;
            q = q->next;
        }
        p->val = p->next->val;
        p->next=p->next->next;
        return head;
        
    }
};

