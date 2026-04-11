// Problem Statement: https://leetcode.com/problems/remove-nth-node-from-end-of-list/?envType=study-plan&id=algorithm-i

// Given the head of a linked list, remove the nth node from the end of the list and return its head.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        if(head==NULL){
            return head;
        }
        while(temp){
            temp=temp->next;
            count++;
        }
        if(count==n){
            head=head->next;
            return head;
        }

        temp=head;

        for(int i=0;i<count-n-1;i++){
            temp=temp->next;
        }

        temp->next=temp->next->next;
        return head;
    }
};
