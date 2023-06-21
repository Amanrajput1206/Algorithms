// Problem Statement: https://leetcode.com/problems/merge-two-sorted-lists/
// Solution Video: https://www.youtube.com/watch?v=bdWOmYL5d1g

// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        if(ptr1 == NULL){
            return list2;
        }
        if(ptr2 == NULL){
            return list1;
        }
        if(ptr1->val < ptr2->val){
            ptr1->next = mergeTwoLists(ptr1->next, ptr2);
            return ptr1;
        }
        else{
            ptr2->next = mergeTwoLists(ptr1, ptr2->next);
            return ptr2;
        }
    }
};
