// Problem Statement: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = new ListNode();
        prev->next = head;
        ListNode* itr=prev;
        while(itr->next !=NULL && itr->next->next!=NULL){
            if( itr->next->val==itr->next->next->val){
                int var = itr->next->val;
                while(itr->next!=NULL && itr->next->val==var){
                    itr->next=itr->next->next;
                }
            }
            else itr=itr->next;
        }
        return prev->next;
    }
};
