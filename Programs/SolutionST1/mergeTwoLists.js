const mergeTwoLists = (list1, list2) => {
  // WRITE CODE HERE
  let list3 = null;
  let prev = null;
  let temp = null;

  while (list1 !== null || list2 !== null) {
    if (list1 === null) {
      temp = list2;
      list2 = list2.next;
    } else if (list2 === null) {
      temp = list1;
      list1 = list1.next;
    } else {
      if (list1.val < list2.val) {
        temp = list1;
        list1 = list1.next;
      } else {
        temp = list2;
        list2 = list2.next;
      }

    }


    if (list3 === null) {
      list3 = temp;
      prev = list3;
    } else {
      prev.next = temp;
      prev = temp;
    }
  }

  return list3;
}