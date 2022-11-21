#include <iostream>

using namespace std;


int climbStairs(int n){
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}






// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW.ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE   |
// |                                                                        |
// --------------------------------------------------------------------------

int main(){
  // FIRST TEST CASE
  int testCase = 2;
  int userRes = climbStairs(testCase);
  int expectedRes = 2;
  bool resMatching = true;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: ${testCase}" << endl;
    cout << "Expected result: " << expectedRes << endl;
    cout << "Acquired result: " << userRes << endl;
    return 0;
  }

  // SECOND TEST CASE
  testCase = 3;
  userRes = climbStairs(testCase);
  expectedRes = 3;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: ${testCase}" << endl;
    cout << "Expected result: " << expectedRes << endl;
    cout << "Acquired result: " << userRes << endl;
    return 0;
  }

  // THIRD TEST CASE
  testCase = 15;
  userRes = climbStairs(testCase);
  expectedRes = 987;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: ${testCase}" << endl;
    cout << "Expected result: " << expectedRes << endl;
    cout << "Acquired result: " << userRes << endl;
    return 0;
  }

  // FOURTH TEST CASE
  testCase = 1;
  userRes = climbStairs(testCase);
  expectedRes = 1;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: ${testCase}" << endl;
    cout << "Expected result: " << expectedRes << endl;
    cout << "Acquired result: " << userRes << endl;
    return 0;
  }

  // FIFTH TEST CASE
  testCase = 35;
  userRes = climbStairs(testCase);
  expectedRes = 14930352;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: ${testCase}" << endl;
    cout << "Expected result: " << expectedRes << endl;
    cout << "Acquired result: " << userRes << endl;
    return 0;
  }

  // SIXTH TEST CASE
  testCase = 21;
  userRes = climbStairs(testCase);
  expectedRes = 17711;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: ${testCase}" << endl;
    cout << "Expected result: " << expectedRes << endl;
    cout << "Acquired result: " << userRes << endl;
    return 0;
  }


  cout << "Congratulations! All test cases passed!" << endl;

  return 0;
}