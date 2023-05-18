// Problem Statement: https://leetcode.com/problems/middle-of-the-linked-list/?envType=study-plan&id=algorithm-i

// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

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
    ListNode* middleNode(ListNode* head) {
      ListNode* slow=head; ListNode* fast=head->next;
      while(fast!=NULL){
          slow=slow->next;
          fast=fast->next;
        if(fast) fast=fast->next;
      }
      return slow;  
    }
};
