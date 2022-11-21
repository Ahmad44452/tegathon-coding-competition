package com.example.Practice;

public class Pangram {

	static Boolean checkIfPangram(String sentence){
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
		String testSentence = "thequickbrownfoxjumpsoverthelazydog";
		Boolean expectedRes = true;
		Boolean userRes = checkIfPangram(testSentence);
		Boolean resMatching = true;

		resMatching = expectedRes == userRes ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("Input: " + testSentence);
			System.out.println("Expected result: " + (expectedRes ? "True" : "False"));
			System.out.println("Acquired result: " + (userRes ? "True" : "False"));
			System.exit(0);
		}

		// TEST CASE 2
		testSentence = "leetcode";
		expectedRes = false;
		userRes = checkIfPangram(testSentence);
		resMatching = true;

		resMatching = expectedRes == userRes ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("Input: " + testSentence);
			System.out.println("Expected result: " + (expectedRes ? "True" : "False"));
			System.out.println("Acquired result: " + (userRes ? "True" : "False"));
			System.exit(0);
		}

		// TEST CASE 3
		testSentence = "mrjocktvquizphdbagsfewlynx";
		expectedRes = true;
		userRes = checkIfPangram(testSentence);
		resMatching = true;

		resMatching = expectedRes == userRes ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("Input: " + testSentence);
			System.out.println("Expected result: " + (expectedRes ? "True" : "False"));
			System.out.println("Acquired result: " + (userRes ? "True" : "False"));
			System.exit(0);
		}

		// TEST CASE 4
		testSentence = "whatisyourname";
		expectedRes = false;
		userRes = checkIfPangram(testSentence);
		resMatching = true;

		resMatching = expectedRes == userRes ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("Input: " + testSentence);
			System.out.println("Expected result: " + (expectedRes ? "True" : "False"));
			System.out.println("Acquired result: " + (userRes ? "True" : "False"));
			System.exit(0);
		}

		// TEST CASE 5
		testSentence = "letsgotoschooltogether";
		expectedRes = false;
		userRes = checkIfPangram(testSentence);
		resMatching = true;

		resMatching = expectedRes == userRes ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("Input: " + testSentence);
			System.out.println("Expected result: " + (expectedRes ? "True" : "False"));
			System.out.println("Acquired result: " + (userRes ? "True" : "False"));
			System.exit(0);
		}

		// TEST CASE 6
		testSentence = "sixtyzipperswerequicklypickedfromthewovenjutebag";
		expectedRes = true;
		userRes = checkIfPangram(testSentence);
		resMatching = true;

		resMatching = expectedRes == userRes ? true : false;

		if (resMatching == false) {
			System.out.println("TEST CASE FAILED");
			System.out.println("Input: " + testSentence);
			System.out.println("Expected result: " + (expectedRes ? "True" : "False"));
			System.out.println("Acquired result: " + (userRes ? "True" : "False"));
			System.exit(0);
		}

		System.out.println("Congratulations! All test cases passed!");
	}
}
