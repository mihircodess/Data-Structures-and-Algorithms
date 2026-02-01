struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        int middle = 0;

        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        
        middle = (count/2) + 1;

        while(middle!=1){
           head=head->next;
           middle--;
        }
        return head;
    }
};