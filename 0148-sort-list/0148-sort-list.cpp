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
    ListNode* vectorToList(vector<int>& nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* curr = head;
    for (int i = 1; i < nums.size(); i++) {
        curr->next = new ListNode(nums[i]);
        curr = curr->next;
    }
    return head;
    }
    ListNode* sortList(ListNode* head) {
        vector<int> n;
        ListNode* curr=head;
        while(curr){
            n.push_back(curr->val);
            curr=curr->next;
        }
        sort(n.begin(),n.end());
        ListNode* ans=vectorToList(n);
        return ans;
    }
};