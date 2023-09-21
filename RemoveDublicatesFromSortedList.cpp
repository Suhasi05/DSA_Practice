class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *current = head;
        while(current->next)
        {
            if(current->val == current->next->val)
            {
                ListNode *d = current->next;
                current->next = d->next;
                delete d;
            }
            else {
                current = current->next;
            }
        }
        return head;
    }
};