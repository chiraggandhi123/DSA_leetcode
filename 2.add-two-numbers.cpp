/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
class Solution {
public:
    void insertNode(ListNode* &root,int n)
    {
        // First value needs to be inserted
        if(root==NULL)
        {
            root = new ListNode(n);
            return;
        }
        else if(root!=NULL)
        {
            ListNode *temp = root;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = new ListNode(n);
            return;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // let head point to NULL
        ListNode *l3_head=NULL;
        int carry = 0;
        while(l1!=NULL and l2!=NULL)
        {
            int sum = l1->val + l2->val + carry;

            insertNode(l3_head,sum%10);
            carry = sum/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL)
        {
         int sum = l1->val +  carry;

            insertNode(l3_head,sum%10);
            carry = sum/10;   
            l1 = l1->next;
        }
        while(l2!=NULL)
        {
         int sum =  l2->val + carry;

            insertNode(l3_head,sum%10);
            carry = sum/10; 
            l2 = l2->next;  
        }        
        if(carry!=0)
        {
            insertNode(l3_head,carry);
        }
        return l3_head;
    }
};
// @lc code=end

