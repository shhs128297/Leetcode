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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode();
        ListNode* cur = dummy;
        if(head){
            dummy->next = head;
        }
        while(cur->next && cur->next->next){
            ListNode* tmp = cur->next;//暫存1
            cur->next = cur->next->next;//虛擬接2
            tmp->next = tmp->next->next;//1接3
            cur->next->next = tmp;//2接1
            cur = tmp;//虛擬改1
        }
        return dummy->next;
    }
};