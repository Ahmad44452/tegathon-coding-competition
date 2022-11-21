class ListNode {
  constructor(val = 0, next = null) {
    this.val = val;
    this.next = next
  }
}

const mergeTwoLists = (list1, list2) => {
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}




// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
// |                                                                        |
// --------------------------------------------------------------------------

const verifyMergeTwoLists = () => {
  // TEST CASE 1
  let list1 = new ListNode(1);
  list1.next = new ListNode(2);
  list1.next.next = new ListNode(4);

  let list2 = new ListNode(1);
  list2.next = new ListNode(3);
  list2.next.next = new ListNode(4);

  resMatching = true;

  let userList = mergeTwoLists(list1, list2);
  let temp = userList;

  resMatching = resMatching && userList !== null && userList.val === 1 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 1 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 2 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 3 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 4 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 4 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList === null ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('List1: [1,2,4]');
    console.log('List2: [1,3,4]');
    console.log('Expected result: [1,1,2,3,4,4]');
    process.stdout.write('Acquired result: [');
    while (temp !== null) {
      process.stdout.write(`${temp.val}`);
      if (temp.next !== null) {
        process.stdout.write(',');
      }
      temp = temp.next;
    }
    console.log(']\n');
    return
  }



  // # TEST CASE 2
  list1 = null;

  list2 = new ListNode(1);
  list2.next = new ListNode(4);
  list2.next.next = new ListNode(8);
  list2.next.next.next = new ListNode(12);

  userList = mergeTwoLists(list1, list2);
  temp = userList;

  resMatching = resMatching && userList !== null && userList.val === 1 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 4 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 8 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 12 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList === null ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('List1: []');
    console.log('List2: [1,4,8,12]');
    console.log('Expected result: [1,4,8,12]');
    process.stdout.write('Acquired result: [');
    while (temp !== null) {
      process.stdout.write(`${temp.val}`);
      if (temp.next !== null) {
        process.stdout.write(',');
      }
      temp = temp.next;
    }
    console.log(']\n');
    return
  }

  // TEST CASE 3
  list1 = new ListNode(6);
  list1.next = new ListNode(18);

  list2 = null;

  userList = mergeTwoLists(list1, list2);
  temp = userList;

  resMatching = resMatching && userList !== null && userList.val === 6 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 18 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList === null ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('List1: [6,18]');
    console.log('List2: []');
    console.log('Expected result: [6,18]');
    process.stdout.write('Acquired result: [');
    while (temp !== null) {
      process.stdout.write(`${temp.val}`);
      if (temp.next !== null) {
        process.stdout.write(',');
      }
      temp = temp.next;
    }
    console.log(']\n');
    return
  }

  // TEST CASE 4
  list1 = new ListNode(6);
  list1.next = new ListNode(10);
  list1.next.next = new ListNode(11);
  list1.next.next.next = new ListNode(15);

  list2 = new ListNode(4);
  list2.next = new ListNode(9);
  list2.next.next = new ListNode(13);
  list2.next.next.next = new ListNode(15);

  resMatching = true;

  userList = mergeTwoLists(list1, list2);
  temp = userList;

  resMatching = resMatching && userList !== null && userList.val === 4 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 6 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 9 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 10 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 11 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 13 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 15 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList !== null && userList.val === 15 ? true : false;
  userList = resMatching ? userList.next : null;
  resMatching = resMatching && userList === null ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('List1: [6,10,11,15]');
    console.log('List2: [4,9,13,15]');
    console.log('Expected result: [4,6,9,10,11,13,15,15]');
    process.stdout.write('Acquired result: [');
    while (temp !== null) {
      process.stdout.write(`${temp.val}`);
      if (temp.next !== null) {
        process.stdout.write(',');
      }
      temp = temp.next;
    }
    console.log(']\n');
    return
  }

  console.log("Congratulations! All test cases passed!");
}


verifyMergeTwoLists()