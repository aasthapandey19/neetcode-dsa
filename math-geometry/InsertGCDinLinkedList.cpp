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
        if(!head||!head->next) return head;
        ListNode* first=head;
        ListNode* sec=head->next;
        while(sec!=NULL){
            ListNode* temp =new ListNode();
            temp->val=__gcd(first->val,sec->val);
            temp->next=first->next;
            first->next=temp;
            first=sec;
            sec=sec->next;
        }
        return head;
    }
};