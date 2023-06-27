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
        ListNode* f = head;
        ListNode* s = head;

        // if(head==NULL || head->next==NULL)
        //     return false;

        while(s!=NULL && s->next!=NULL )
        {
            f=f->next;
            s=s->next->next;
            if(s==f)
                return true;
        }
        return false;
        
    }
};
