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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* lReturn=new ListNode(0);
        ListNode* lTemp=lReturn;
        ListNode* l1Temp=l1;
        ListNode* l2Temp=l2;
        while(l1Temp!=NULL||l2Temp!=NULL)
        {
            int iTemp=lTemp->val;
            if(l1Temp==NULL&&l2Temp!=NULL)
            {
                iTemp=iTemp+l2Temp->val;
            }
            if(l2Temp==NULL&&l1Temp!=NULL)
            {
                iTemp=iTemp+l1Temp->val;
            }
            if(l1Temp!=NULL&&l2Temp!=NULL)
            {
                iTemp=iTemp+l1Temp->val+l2Temp->val;
            }
            lTemp->val=iTemp%10;
            if(l1Temp!=NULL)
            {
                l1Temp=l1Temp->next;
            }
            if(l2Temp!=NULL)
            {
                l2Temp=l2Temp->next;
            }
            if(l1Temp==NULL&&l2Temp==NULL&&iTemp<10)
            {
                break;
            }
            else
            {
                ListNode* lNew=new ListNode(iTemp/10);
                lTemp->next=lNew;
                lTemp=lTemp->next;
            }
        }
        return lReturn;
    }
};