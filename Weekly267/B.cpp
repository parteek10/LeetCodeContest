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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        vector<int> res, ans;
        while(head != nullptr)
        {
            res.push_back(head->val);
            head=head->next;
        }
        
        int c=1;
        for(int i=0; i<res.size(); i+=c-1)
        {
            vector<int> temp;
            int j=i, co=c;
            while(co-- && j<res.size())
            {
                temp.push_back(res[j]);
                j++;
            }
            if(temp.size()%2==0)
                reverse(temp.begin(), temp.end());
            ans.insert(ans.end(), temp.begin(), temp.end());
            c++;
        }
        
        ListNode* ptr = new ListNode(ans[0]);
        ListNode* h = ptr;
        
        for(int i=1; i<ans.size(); i++)
        {
            ListNode* node = new ListNode(ans[i]);
            ptr->next = node;
            ptr = node;
        }
        
        return h;
    }
};
