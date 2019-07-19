/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode dummy(-1);
        dummy.next = head;
        ListNode *p = head, *q = head;
        int cnt = 0;
        while(p != nullptr && p->next != nullptr){
            p = p->next;             //尾指针
            cnt++;
        }
        if(cnt == 0  || k == 0){
            return head;
        }
        cnt++;
        p->next = head; 
        int temp = cnt - k  % cnt -1;    //新头指针前一个指针
        for(auto i = 0; i < temp; i ++){
            q = q->next;
        }
        dummy.next = q->next;
        q->next = nullptr;
        return dummy.next;        
        
    }
};

