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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        /**
         * dummy_head is a fixed node,
         * dummy_head->next is the head of newly merged list
         */
        ListNode dummy_head(0);
        // curr represents current newly merged node
        ListNode* curr = &dummy_head;

        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                curr->next = l1;
                l1 = l1->next;
            }
            else
            {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        /**
         * If l1 is nullptr, which means we have already looped 
         * through all nodes of l1, we simply link/merge l2.
         * If l2 is nullptr, we simply link/merge l1.
         */
        curr->next = l1 == nullptr ? l2 : l1;
        return dummy_head.next;
    }
};