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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		// Get Total Number of ListNode
		int iTotal = 0;
		ListNode* pTemp = head;
		while (NULL != pTemp)
		{
			if (NULL != pTemp)
			{
				iTotal++;
			}
			pTemp = pTemp->next;
		}
		// Remove
		ListNode* pStart = NULL;
		ListNode* pRemove = NULL;
		ListNode* pNext = NULL;
		pTemp = head;
		int iCount = iTotal - n;
		if (0 == iCount)
		{
			pStart = pTemp->next;
			pRemove = pTemp;
		}
		else
		{
			pStart = head;
			for (int i = 0; i<iTotal - n - 1; i++)
			{
				pTemp = pTemp->next;
			}
			pRemove = pTemp->next;
		}
		if (NULL == pRemove)
		{
			return NULL;
		}
		else
		{
			pNext = pRemove->next;
		}
		pTemp->next = pNext;
		return pStart;
	}
};