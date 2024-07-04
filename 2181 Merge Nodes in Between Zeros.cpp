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
    ListNode* mergeNodes(ListNode* head) {

        ListNode *curr = new ListNode();
        auto res = curr;
        int sum = 0;
        while(head != NULL and head->next != NULL){

            while(head->next != NULL and head->val != 0){
                sum += head->val;
                head = head->next;
            }

            curr->next = new ListNode(sum);
            curr = curr->next;
            sum = 0;
            if(head) head = head->next;
        }


        return res->next->next;
    }
};