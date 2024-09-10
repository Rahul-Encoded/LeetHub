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

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if (!head || !head->next) return head;

        ListNode* curr = head;
        ListNode* Next = curr->next;

        while(Next != NULL){
            int num1 = curr->val;
            int num2 = Next->val;

            ListNode* newNode = new ListNode(__gcd(num1, num2));
            
            curr->next = newNode;
            newNode->next = Next;
            
            curr = Next;
            Next = curr->next; 
        }

        return head;
    }
};
