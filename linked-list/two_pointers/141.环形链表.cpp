/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        ListNode *fast = head, *slow = head;
        while(true){
            if(fast->next == nullptr|| fast->next->next == nullptr)
                return false;
            if(fast->next == slow || fast->next->next == slow)
                return true;
            fast = fast->next->next;
            slow = slow->next;
        }
    }
};

