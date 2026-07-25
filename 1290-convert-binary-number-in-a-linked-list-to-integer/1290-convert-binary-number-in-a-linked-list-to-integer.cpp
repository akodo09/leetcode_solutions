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
    int getDecimalValue(ListNode* head) {
        string ans="";
        ListNode* curr=head;
        while(curr){
            ans.push_back(curr->val + '0');
            curr=curr->next;
        }
        cout << ans;
        int x = stoi(ans, nullptr, 2);;
        return x;
    }
};