#include <iostream>

using namespace std;

bool checkIfPangram(string sentence){
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}







// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
// |                                                                        |
// --------------------------------------------------------------------------

int main(){
  string testSentence = "thequickbrownfoxjumpsoverthelazydog";
  bool expectedRes = true;
  bool userRes = checkIfPangram(testSentence);
  bool resMatching = true;

  resMatching = expectedRes == userRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: " << testSentence << endl;
    cout << "Expected result: " << (expectedRes ? "True" : "False") << endl;
    cout << "Acquired result: " << (userRes ? "True" : "False") << endl;
    return 0;
  }



  // SECOND TEST CASE
  testSentence = "leetcode";
  expectedRes = false;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes == userRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: " << testSentence << endl;
    cout << "Expected result: " << (expectedRes ? "True" : "False") << endl;
    cout << "Acquired result: " << (userRes ? "True" : "False") << endl;
    return 0;
  }


  // THIRD TEST CASE
  testSentence = "mrjocktvquizphdbagsfewlynx";
  expectedRes = true;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes == userRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: " << testSentence << endl;
    cout << "Expected result: " << (expectedRes ? "True" : "False") << endl;
    cout << "Acquired result: " << (userRes ? "True" : "False") << endl;
    return 0;
  }

  // FOURTH TEST CASE
  testSentence = "whatisyourname";
  expectedRes = false;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes == userRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: " << testSentence << endl;
    cout << "Expected result: " << (expectedRes ? "True" : "False") << endl;
    cout << "Acquired result: " << (userRes ? "True" : "False") << endl;
    return 0;
  }

  // FIFTH TEST CASE
  testSentence = "letsgotoschooltogether";
  expectedRes = false;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes == userRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: " << testSentence << endl;
    cout << "Expected result: " << (expectedRes ? "True" : "False") << endl;
    cout << "Acquired result: " << (userRes ? "True" : "False") << endl;
    return 0;
  }

  // SIXTH TEST CASE
  testSentence = "sixtyzipperswerequicklypickedfromthewovenjutebag";
  expectedRes = true;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes == userRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: " << testSentence << endl;
    cout << "Expected result: " << (expectedRes ? "True" : "False") << endl;
    cout << "Acquired result: " << (userRes ? "True" : "False") << endl;
    return 0;
  }


  cout << "Congratulations! All test cases passed!" << endl;
  return 0;
}