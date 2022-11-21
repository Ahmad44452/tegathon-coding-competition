class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeTwoLists(list1,list2):
  # WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  pass






# --------------------------------------------------------------------------
# |                                                                        |
# | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
# |                                                                        |
# --------------------------------------------------------------------------

def verifyMergeTwoLists():
  # TEST CASE 1
  list1 = ListNode(1)
  list1.next = ListNode(2)
  list1.next.next = ListNode(4)

  list2 = ListNode(1)
  list2.next = ListNode(3)
  list2.next.next = ListNode(4)

  resMatching = True

  userList = mergeTwoLists(list1,list2)
  temp = userList

  resMatching = True if resMatching and userList != None and userList.val == 1 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 1 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 2 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 3 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 4 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 4 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList == None else False
  
  if resMatching == False:
    print('TEST CASE FAILED')
    print('List1: [1,2,4]')
    print('List2: [1,3,4]')
    print('Expected result: [1,1,2,3,4,4]')
    print('Acquired result: [', end="")
    while temp != None:
      print(temp.val,end="")
      if temp.next != None:
        print(',',end="")
      temp = temp.next
    print(']')
    return


  # TEST CASE 2
  list1 = None

  list2 = ListNode(1)
  list2.next = ListNode(4)
  list2.next.next = ListNode(8)
  list2.next.next.next = ListNode(12)

  userList = mergeTwoLists(list1,list2)
  temp = userList

  resMatching = True if resMatching and userList != None and userList.val == 1 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 4 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 8 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 12 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList == None else False
  
  if resMatching == False:
    print('TEST CASE FAILED')
    print('List1: []')
    print('List2: [1,4,8,12]')
    print('Expected result: [1,4,8,12]')
    print('Acquired result: [', end="")
    while temp != None:
      print(temp.val,end="")
      if temp.next != None:
        print(',',end="")
      temp = temp.next
    print(']')
    return
  
  # TEST CASE 3
  list1 = ListNode(6)
  list1.next = ListNode(18)

  list2 = None

  userList = mergeTwoLists(list1,list2)
  temp = userList

  resMatching = True if resMatching and userList != None and userList.val == 6 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 18 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList == None else False
  
  if resMatching == False:
    print('TEST CASE FAILED')
    print('List1: [6,18]')
    print('List2: []')
    print('Expected result: [6,18]')
    print('Acquired result: [', end="")
    while temp != None:
      print(temp.val,end="")
      if temp.next != None:
        print(',',end="")
      temp = temp.next
    print(']')
    return

  # TEST CASE 4
  list1 = ListNode(6)
  list1.next = ListNode(10)
  list1.next.next = ListNode(11)
  list1.next.next.next = ListNode(15)

  list2 = ListNode(4)
  list2.next = ListNode(9)
  list2.next.next = ListNode(13)
  list2.next.next.next = ListNode(15)

  userList = mergeTwoLists(list1,list2)
  temp = userList

  resMatching = True if resMatching and userList != None and userList.val == 4 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 6 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 9 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 10 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 11 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 13 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 15 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList != None and userList.val == 15 else False
  userList = userList.next if resMatching else None
  resMatching = True if resMatching and userList == None else False
  
  if resMatching == False:
    print('TEST CASE FAILED')
    print('List1: [6,10,11,15]')
    print('List2: [4,9,13,15]')
    print('Expected result: [4,6,9,10,11,13,15,15]')
    print('Acquired result: [', end="")
    while temp != None:
      print(temp.val,end="")
      if temp.next != None:
        print(',',end="")
      temp = temp.next
    print(']')
    return

  print("Congratulations! All test cases passed!")
  pass


verifyMergeTwoLists()