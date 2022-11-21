package com.example.Practice;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;

public class PlusOne {

	static List<Integer> plusOne(List<Integer> digits) {
		// WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
	}

	/*************************************************
	 * 												 *
	 *  DO NOT MAKE ANY CODE CHANGES BELOW 			 * 
	 * 	PLEASE USE ABOVE METHOD TO WRITE YOUR CODE   *
	 * 												 *
	 *************************************************/
	public static void main(String[] args) {
		// Test Case 1
		List<Integer> testCase = new ArrayList<Integer>(Arrays.asList(1, 2, 3));
		List<Integer> functionValues = new ArrayList<Integer>(Arrays.asList(1, 2, 3));
		List<Integer> userRes = plusOne(functionValues);
		List<Integer> expectedRes = new ArrayList<Integer>(Arrays.asList(1, 2, 4));
		Boolean resMatching = true;
		Integer userResLength = userRes.size();
		Integer expectedResLength = expectedRes.size();
		Iterator<Integer> resStartingIndex = userRes.iterator();
		Iterator<Integer> expectedStartingIndex = expectedRes.iterator();

		resMatching = userResLength == expectedResLength ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 0 == (expectedStartingIndex.next() + 0) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 1 == (expectedStartingIndex.next() + 1) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 2 == (expectedStartingIndex.next() + 2) ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.print("Input: [ ");
			for (Integer i : testCase) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Expected result: [ ");
			for (Integer i : expectedRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Acquired result: [ ");
			for (Integer i : userRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.exit(0);
		}

		// Test Case 2
		testCase = new ArrayList<Integer>(Arrays.asList(1, 2, 6, 5, 9));
		functionValues = new ArrayList<Integer>(Arrays.asList(1, 2, 6, 5, 9));
		userRes = plusOne(functionValues);
		expectedRes = new ArrayList<Integer>(Arrays.asList(1, 2, 6, 6, 0));
		resMatching = true;
		userResLength = userRes.size();
		expectedResLength = expectedRes.size();
		resStartingIndex = userRes.iterator();
		expectedStartingIndex = expectedRes.iterator();

		resMatching = userResLength == expectedResLength ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 0 == (expectedStartingIndex.next() + 0) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 1 == (expectedStartingIndex.next() + 1) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 2 == (expectedStartingIndex.next() + 2) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 3 == (expectedStartingIndex.next() + 3) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 4 == (expectedStartingIndex.next() + 4) ? true : false;

		if (resMatching == false) {

			System.out.println("TEST CASE FAILED");
			System.out.print("Input: [ ");
			for (Integer i : testCase) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Expected result: [ ");
			for (Integer i : expectedRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Acquired result: [ ");
			for (Integer i : userRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.exit(0);
		}

		// Test Case 3
		testCase = new ArrayList<Integer>(Arrays.asList(9, 9, 9, 9));
		functionValues = new ArrayList<Integer>(Arrays.asList(9, 9, 9, 9));
		userRes = plusOne(functionValues);
		expectedRes = new ArrayList<Integer>(Arrays.asList(1, 0, 0, 0, 0));
		resMatching = true;
		userResLength = userRes.size();
		expectedResLength = expectedRes.size();
		resStartingIndex = userRes.iterator();
		expectedStartingIndex = expectedRes.iterator();

		resMatching = userResLength == expectedResLength ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 0 == (expectedStartingIndex.next() + 0) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 1 == (expectedStartingIndex.next() + 1) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 2 == (expectedStartingIndex.next() + 2) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 3 == (expectedStartingIndex.next() + 3) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 4 == (expectedStartingIndex.next() + 4) ? true : false;

		if (resMatching == false) {

			System.out.println("TEST CASE FAILED");
			System.out.print("Input: [ ");
			for (Integer i : testCase) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Expected result: [ ");
			for (Integer i : expectedRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Acquired result: [ ");
			for (Integer i : userRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.exit(0);
		}

		// Test Case 4
		testCase = new ArrayList<Integer>(Arrays.asList(1, 9, 9));
		functionValues = new ArrayList<Integer>(Arrays.asList(1, 9, 9));
		userRes = plusOne(functionValues);
		expectedRes = new ArrayList<Integer>(Arrays.asList(2, 0, 0));
		resMatching = true;
		userResLength = userRes.size();
		expectedResLength = expectedRes.size();
		resStartingIndex = userRes.iterator();
		expectedStartingIndex = expectedRes.iterator();

		resMatching = userResLength == expectedResLength ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 0 == (expectedStartingIndex.next() + 0) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 1 == (expectedStartingIndex.next() + 1) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 2 == (expectedStartingIndex.next() + 2) ? true : false;

		if (resMatching == false) {

			System.out.println("TEST CASE FAILED");
			System.out.print("Input: [ ");
			for (Integer i : testCase) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Expected result: [ ");
			for (Integer i : expectedRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Acquired result: [ ");
			for (Integer i : userRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.exit(0);
		}

		// Test Case 5
		testCase = new ArrayList<Integer>(Arrays.asList(1, 5, 6, 2, 9, 0));
		functionValues = new ArrayList<Integer>(Arrays.asList(1, 5, 6, 2, 9, 0));
		userRes = plusOne(functionValues);
		expectedRes = new ArrayList<Integer>(Arrays.asList(1, 5, 6, 2, 9, 1));
		resMatching = true;
		userResLength = userRes.size();
		expectedResLength = expectedRes.size();
		resStartingIndex = userRes.iterator();
		expectedStartingIndex = expectedRes.iterator();

		resMatching = userResLength == expectedResLength ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 0 == (expectedStartingIndex.next() + 0) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 1 == (expectedStartingIndex.next() + 1) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 2 == (expectedStartingIndex.next() + 2) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 3 == (expectedStartingIndex.next() + 3) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 4 == (expectedStartingIndex.next() + 4) ? true : false;
		resMatching = resMatching && resStartingIndex.next() + 5 == (expectedStartingIndex.next() + 5) ? true : false;

		if (resMatching == false) {

			System.out.println("TEST CASE FAILED");
			System.out.print("Input: [ ");
			for (Integer i : testCase) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Expected result: [ ");
			for (Integer i : expectedRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.out.print("Acquired result: [ ");
			for (Integer i : userRes) {
				System.out.print(i + " ");
			}
			System.out.println("]");
			System.exit(0);
		}
		System.out.println("Congratulations! All test cases passed!");
	}
}
