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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        ListNode* temp = head;
        int count = 0;  
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }

        vector<ListNode*> splits(k, NULL);  
        
        int divisions = count / k;          
        int remainder = count % k;          
        
        temp = head;
        ListNode* tempPre = NULL;

        for (int i = 0; i < k; i++) {
            if (temp == NULL) {
                splits[i] = NULL;  
                continue;
            }

            splits[i] = temp;  

            
            for (int j = 0; j < divisions + (remainder > 0 ? 1 : 0); j++) {
                tempPre = temp;
                temp = temp->next;
            }
            
            
            if (tempPre != NULL) {
                tempPre->next = NULL;
            }

            remainder--;  
        }

        return splits;
    }
};
