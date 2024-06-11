class Solution
{
public:
  ListNode *sortList(ListNode *head)
  {
    vector<int> result;
    ListNode *cur = head;

    while (cur != NULL)
    {
      result.push_back(cur->val);
      cur = cur->next;
    }

    sort(result.begin(), result.end());

    ListNode *curs = head;
    int i = 0;
    while (curs != NULL)
    {
      curs->val = result[i];
      curs = curs->next;
      i++;
    }
    return head;
  }
};