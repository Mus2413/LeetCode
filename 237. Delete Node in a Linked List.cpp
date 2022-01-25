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
    void deleteNode(ListNode* node) {
       ListNode* walk = node;
        while (walk && walk->next) {
            walk->val = walk->next->val;
            if (walk->next->next == NULL) {
                walk->next = NULL;
            }
            walk = walk->next;
        }
      
    }
};