/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


//1-->2-->3-->4-->5-->6
// head = 1, res = 2
// We want to find that now head will point to which node
// It will ask recursion to find the node that head must point to after passing 3 as head
// Recursion level 1 
// head = 3 ,res = 4
// Recursion level 2
// head  = 5 , res = 6
// Recursion level 3
// head  = NULL 
// return NULL
// head-->5-->NULL, res-->6
// res->next = head
// 6-->5
// head->next = return res
// 3(head-level2)->next = return (6-->5)res
// 4-->3-->6-->5
// Similarly
// 2-->1-->4-->3-->6-->5
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode *res = head->next;
        
        
        head->next = swapPairs(res->next);
        res->next = head;
        return res;
    
    }
};
// @lc code=end

