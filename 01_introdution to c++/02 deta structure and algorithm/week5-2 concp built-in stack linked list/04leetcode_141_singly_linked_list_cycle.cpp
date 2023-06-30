#include<bits/stdc++.h>
using namespace std;
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

        ListNode *fast = head;
        ListNode *slow = head;

        while(slow != NULL && fast->next != NULL)
        {

            slow = slow->next;  // one node kore pass korbe.
            fast = fast->next->next; // tow node kore pass korbe.

            if(slow == NULL || fast == NULL) // slow and fast er jkono ekta null hoilei false.
                return false;

            if(slow == fast) // slow and fast ek jaygay match hoilei true.
                return true;

        }
        return false;
    }

};

int main()
{


    return 0;
}
