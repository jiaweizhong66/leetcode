/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *reverseList(struct ListNode *head)
{
    if (!head || !head->next)
    {
        return head;
    }

    struct ListNode *cur = head;
    struct ListNode *prev = NULL;
    struct ListNode *succ = NULL;

    while (cur)
    {
        succ = cur->next;
        cur->next = prev;
        prev = cur;
        cur = succ;
    }

    head = prev;
    return head;
}