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
        if(head == NULL) return head;

        

        /*
        Using Address reversal - 
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;

        
        Using Stack -
        stack<int> s;
        ListNode* temp = head;
        while(temp){
            s.push(temp->val);
            temp = temp -> next;
        } 
        temp = head;
        while(temp){
            temp -> val = s.top();
            s.pop();
            temp = temp -> next;
        } 
        return head;

        Using Linked List - 
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* newHead = nullptr;
        while(temp){
            if(temp->next == nullptr){
                newHead = new ListNode(temp->val);
                newHead->next = prev;
            }else{
                ListNode* node = new ListNode(temp->val);
                node -> next = prev;
                prev = node;
            }
            temp = temp->next;
        }
        return newHead;
        */
    }
};
