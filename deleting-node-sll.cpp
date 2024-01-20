// sol des

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *p, *q;
        p = node;
        while(p->next->next){
            p->val = p->next->val;
            p = p->next;
        }
        p->val = p->next->val;
        p->next = NULL;
    }
};