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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
        int len = 0; // Start from 0
        while(temp != NULL){
            temp = temp->next;
            len++;
        }

        int i = 0;
        int j = len - 1;
        ListNode *temp2 = head;
        while(i < j){
            // Move temp to the correct node to swap with
            temp = temp2;
            int k = j;
            while(k > i) {
                temp = temp->next;
                k--;
            }

            swap(temp2->val, temp->val);
            i++;
            j--;
            temp2 = temp2->next;
        }
        return head; // Correct return value
    }
};