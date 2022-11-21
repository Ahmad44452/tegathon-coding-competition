package com.example.Practice;

class ListNode {
	int val;
	ListNode next;

	ListNode(int userValue) {
		val = userValue;
		next = null;
	}
}

public class MergeTwoLists {

	static ListNode mergeTwoLists(ListNode l1,ListNode l2){
		// WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
	}

	/*************************************************
	 * 												 *
	 *  DO NOT MAKE ANY CODE CHANGES BELOW 			 * 
	 * 	PLEASE USE ABOVE METHOD TO WRITE YOUR CODE   *
	 * 												 *
	 *************************************************/
	public static void main(String[] args) {
		// TEST CASE 1
		ListNode list1 = null;
		ListNode list2 = null;
		ListNode userList = null;
		ListNode temp = null;

		list1 = new ListNode(1);
		list1.next = new ListNode(2);
		list1.next.next = new ListNode(4);

		list2 = new ListNode(1);
		list2.next = new ListNode(3);
		list2.next.next = new ListNode(4);

		Boolean resMatching = true;

		userList = mergeTwoLists(list1, list2);
		temp = userList;

		resMatching = resMatching && userList != null && userList.val == 1 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 1 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 2 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 3 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 4 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 4 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList == null ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("List1: [1,2,4]");
			System.out.println("List2: [1,3,4]");
			System.out.println("Expected result: [1,1,2,3,4,4]");
			System.out.print("Acquired result: [");

			while (temp != null) {
				System.out.print(temp.val);
				if (temp.next != null) {
					System.out.print(",");
				}
				temp = temp.next;
			}
			System.out.println("]");
			System.exit(0);
		}

		// TEST CASE 2
		list1 = null;

		list2 = new ListNode(1);
		list2.next = new ListNode(4);
		list2.next.next = new ListNode(8);
		list2.next.next.next = new ListNode(12);

		resMatching = true;

		userList = mergeTwoLists(list1, list2);
		temp = userList;

		resMatching = resMatching && userList != null && userList.val == 1 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 4 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 8 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 12 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList == null ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("List1: []");
			System.out.println("List2: [1,4,8,12]");
			System.out.println("Expected result: [1,4,8,12]");
			System.out.print("Acquired result: [");

			while (temp != null) {
				System.out.print(temp.val);
				if (temp.next != null) {
					System.out.print(",");
				}
				temp = temp.next;
			}
			System.out.println("]");
			System.exit(0);
		}

		// TEST CASE 3
		list1 = new ListNode(6);
		list1.next = new ListNode(18);

		list2 = null;

		resMatching = true;

		userList = mergeTwoLists(list1, list2);
		temp = userList;

		resMatching = resMatching && userList != null && userList.val == 6 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 18 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList == null ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("List1: [6,18]");
			System.out.println("List2: []");
			System.out.println("Expected result: [6,18]");
			System.out.print("Acquired result: [");

			while (temp != null) {
				System.out.print(temp.val);
				if (temp.next != null) {
					System.out.print(",");
				}
				temp = temp.next;
			}
			System.out.println("]");
			System.exit(0);
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

		resMatching = resMatching && userList != null && userList.val == 4 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 6 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 9 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 10 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 11 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 13 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 15 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList != null && userList.val == 15 ? true : false;
		userList = resMatching ? userList.next : null;
		resMatching = resMatching && userList == null ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("List1: [6,10,11,15]");
			System.out.println("List2: [4,9,13,15]");
			System.out.println("Expected result: [4,6,9,10,11,13,15,15]");
			System.out.print("Acquired result: [");

			while (temp != null) {
				System.out.print(temp.val);
				if (temp.next != null) {
					System.out.print(",");
				}
				temp = temp.next;
			}
			System.out.println("]");
			System.exit(0);
		}
		System.out.println("Congratulations! All test cases passed!");
	}
}
