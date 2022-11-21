ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
  // WRITE CODE HERE
  ListNode* list3 = NULL;
  ListNode* prev = NULL;
  ListNode* temp = NULL;

  while (list1 != NULL || list2 != NULL) {
    if (list1 == NULL) {
      temp = list2;
      list2 = list2->next;
    } else if (list2 == NULL) {
      temp = list1;
      list1 = list1->next;
    } else {
      if (list1->val < list2->val) {
        temp = list1;
        list1 = list1->next;
      } else {
        temp = list2;
        list2 = list2->next;
      }

    }


    if (list3 == NULL) {
      list3 = temp;
      prev = list3;
    } else {
      prev->next = temp;
      prev = temp;
    }
  }

  // list3 = new ListNode(1);
  // list3->next = new ListNode(1);
  // list3->next->next = new ListNode(2);
  // list3->next->next->next = new ListNode(3);
  // list3->next->next->next->next = new ListNode(4);
  // list3->next->next->next->next->next = new ListNode(4);

  return list3;
}