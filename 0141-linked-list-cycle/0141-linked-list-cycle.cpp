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
    bool hasCycle(ListNode *head) {
        vector<ListNode*> visited;
        ListNode *temp = head;  
        bool cycle = false;  
        while (temp != NULL) {
            auto it = find(visited.begin(), visited.end(), temp);  

            if (it == visited.end()) {
                visited.push_back(temp);  
                temp = temp->next;
            } else {
                cycle = true;
                break;
            }    
        }
        return cycle;
    }
};
