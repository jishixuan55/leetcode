// threesum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "vector"
#include "algorithm"
#include <unordered_map>
using namespace std;



 struct ListNode {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

 class Solution {
 public:


	 ListNode* mergeKLists(vector<ListNode*>& lists) {
		 ListNode* L1 = NULL;
		 for (int i = 0; i < lists.size(); i++)
		 {

			 
		 }
		 return L1;
	 }
 };
int _tmain(int argc, _TCHAR* argv[])
{
	Solution solu;
	ListNode* l1 = new ListNode(1);
	ListNode* l2 = new ListNode(2);
	ListNode* l3 = new ListNode(4);
	l1->next = l2;
	l2->next = l3;

	ListNode* l4 = new ListNode(1);
	ListNode* l5 = new ListNode(3);
	ListNode* l6 = new ListNode(4);
	l4->next = l5;
	l5->next = l6;
	vector<ListNode*> lists;
	lists.push_back(l1);
	lists.push_back(l4);
	ListNode* aa = solu.mergeKLists(lists);

	return 0;
}

