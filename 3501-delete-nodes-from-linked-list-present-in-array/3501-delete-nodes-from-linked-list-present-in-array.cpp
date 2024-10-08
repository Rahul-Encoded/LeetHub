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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> to_remove(nums.begin(), nums.end());
        
        ListNode* temp = new ListNode(0);
        temp->next = head;
        
        ListNode* prev = temp;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (to_remove.count(curr->val)) {        
                prev->next = curr->next;
            } else {        
                prev = curr;
            }    
            curr = curr->next;
        }
        
        return temp->next;
    }
};
