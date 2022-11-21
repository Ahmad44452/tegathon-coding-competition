def mergeTwoLists(list1,list2):
  # WRITE CODE HERE
  list3 = None
  prev = None
  temp = None
        
  while list1 != None or list2 != None:
            
    if list1 == None:
      temp = list2
      list2 = list2.next
    elif list2 == None:
      temp = list1
      list1 = list1.next
    else:
      if list1.val < list2.val:
        temp = list1
        list1 = list1.next
      else:
        temp = list2
        list2 = list2.next
    
    if list3 == None:
      list3 = temp
      prev = list3
    else:
      prev.next = temp
      prev = temp

  return list3