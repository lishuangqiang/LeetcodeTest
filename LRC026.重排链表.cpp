class Solution
{
public:
  void reorderList(ListNode *head)
  {
    if (head == nullptr)
    {
      return;
    }
    int cnt;

    deque<ListNode *> dq;

    ListNode *t = head;
    while (t)
    {
      dq.push_back(t);
      t = t->next;
    }
    cnt = 0;

    ListNode *temphead = new ListNode();

    t = temphead;
    while (dq.size())
    {
      if (cnt % 2 == 0)
      {
        t->next = dq.front();
        dq.pop_front();
      }
      else
      {
        t->next = dq.back();
        dq.pop_back();
      }
      cnt++;
      t = t->next;
    }
    t->next = nullptr;
    head = temphead->next;
    temphead->next = nullptr;

    delete temphead;
  }
};