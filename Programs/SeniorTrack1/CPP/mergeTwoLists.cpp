#include <iostream>

using namespace std;

class ListNode{
  public:
    int val;
    ListNode* next = NULL;
    ListNode(int userVal) {
      val = userVal;
    }
};


ListNode* mergeTwoLists(ListNode* list1,ListNode* list2){
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}








// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
// |                                                                        |
// --------------------------------------------------------------------------

int main(){
  // TEST CASE 1
  
  ListNode* list1 = NULL;
  ListNode* list2 = NULL;
  ListNode* userList = NULL;
  ListNode* temp = NULL;

  list1 = new ListNode(1);
  list1->next = new ListNode(2);
  list1->next->next = new ListNode(4);

  list2 = new ListNode(1);
  list2->next = new ListNode(3);
  list2->next->next = new ListNode(4);

  bool resMatching = true;

  userList = mergeTwoLists(list1, list2);
  temp = userList;

  resMatching = resMatching && userList != NULL && userList->val == 1 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 1 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 2 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 3 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 4 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 4 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList == NULL ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "List1: [1,2,4]" << endl;
    cout << "List2: [1,3,4]" << endl;
    cout << "Expected result: [1,1,2,3,4,4]" << endl;
    cout << "Acquired result: [";
    while (temp != NULL) {
      cout << temp->val;
      if (temp->next != NULL) {
        cout << ',';
      }
      temp = temp->next;
    }
    cout << ']' << endl;
    return 0;
  }



  // TEST CASE 2
  list1 = NULL;

  list2 = new ListNode(1);
  list2->next = new ListNode(4);
  list2->next->next = new ListNode(8);
  list2->next->next->next = new ListNode(12);

  userList = mergeTwoLists(list1, list2);
  temp = userList;

  resMatching = resMatching && userList != NULL && userList->val == 1 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 4 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 8 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 12 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList == NULL ? true : false;
  
  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "List1: []" << endl;
    cout << "List2: [1,4,8,12]" << endl;
    cout << "Expected result: [1,4,8,12]" << endl;
    cout << "Acquired result: [";
    while (temp != NULL) {
      cout << temp->val;
      if (temp->next != NULL) {
        cout << ',';
      }
      temp = temp->next;
    }
    cout << ']' << endl;
    return 0;
  }

  // TEST CASE 3
  list1 = new ListNode(6);
  list1->next = new ListNode(18);

  list2 = NULL;

  userList = mergeTwoLists(list1, list2);
  temp = userList;

  resMatching = resMatching && userList != NULL && userList->val == 6 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 18 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList == NULL ? true : false;
  
  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "List1: [6,18]" << endl;
    cout << "List2: []" << endl;
    cout << "Expected result: [6,18]" << endl;
    cout << "Acquired result: [";
    while (temp != NULL) {
      cout << temp->val;
      if (temp->next != NULL) {
        cout << ',';
      }
      temp = temp->next;
    }
    cout << ']' << endl;
    return 0;
  }

  // TEST CASE 4
  list1 = new ListNode(6);
  list1->next = new ListNode(10);
  list1->next->next = new ListNode(11);
  list1->next->next->next = new ListNode(15);

  list2 = new ListNode(4);
  list2->next = new ListNode(9);
  list2->next->next = new ListNode(13);
  list2->next->next->next = new ListNode(15);

  resMatching = true;

  userList = mergeTwoLists(list1, list2);
  temp = userList;

  resMatching = resMatching && userList != NULL && userList->val == 4 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 6 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 9 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 10 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 11 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 13 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 15 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList != NULL && userList->val == 15 ? true : false;
  userList = resMatching ? userList->next : NULL;
  resMatching = resMatching && userList == NULL ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "List1: [6,10,11,15]" << endl;
    cout << "List2: [4,9,13,15]" << endl;
    cout << "Expected result: [4,6,9,10,11,13,15,15]" << endl;
    cout << "Acquired result: [";
    while (temp != NULL) {
      cout << temp->val;
      if (temp->next != NULL) {
        cout << ',';
      }
      temp = temp->next;
    }
    cout << ']' << endl;
    return 0;
  }

  cout << "Congratulations! All test cases passed!" << endl;
  return 0;
}