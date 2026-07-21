class Solution {
private:
//function to reverse the linked list
ListNode* revlist(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    while (curr) {
        ListNode* next = curr->next; 
        curr->next = prev;            
        prev = curr;                  
        curr = next;                  
    }
    return prev;
}
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;
        // find the middle node
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // reverse the second half
        ListNode* second = revlist(slow);
        ListNode* first = head;
        // compare the first and second half
        while(second){
            if(first->val != second->val){
                return false;
            }
            first=first->next;
            second = second-> next;
        }
        return true;

    }
};