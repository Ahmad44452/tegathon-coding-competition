#include <iostream>
#include <vector>

using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
  //  WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}







// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW.ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE   |
// |                                                                        |
// --------------------------------------------------------------------------

int main(){
  // FIRST TEST CASE
  vector<char> testCaseArray{'c','f','g'};
  vector<char> functionValues{'c','f','g'};
  char testCaseTarget = 'a';
  char userRes = nextGreatestLetter(functionValues,testCaseTarget);
  char expectedRes = 'c';
  bool resMatching = true;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: letters: ['c','f','g'] target: '" << testCaseTarget << "'" << endl;
    cout << "Expected result: '" << expectedRes << "'" << endl;
    cout << "Acquired result: '" << userRes << "'" << endl;
    return 0;
  }

  // SECOND TEST CASE
  testCaseArray = vector<char> {'c', 'f', 'j'};
  functionValues = vector<char> {'c', 'f', 'j'};
  testCaseTarget = 'c';
  userRes = nextGreatestLetter(functionValues, testCaseTarget);
  expectedRes = 'f';

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: letters: ['c','f','j'] target: '" << testCaseTarget << "'" << endl;
    cout << "Expected result: '" << expectedRes << "'" << endl;
    cout << "Acquired result: '" << userRes << "'" << endl;
    return 0;
  }

  // THIRD TEST CASE
  testCaseArray = vector<char> {'x','x','y','y'};
  functionValues = vector<char> {'x','x','y','y'};
  testCaseTarget = 'z';
  userRes = nextGreatestLetter(functionValues, testCaseTarget);
  expectedRes = 'x';

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: letters: ['x','x','y','y'] target: '" << testCaseTarget << "'" << endl;
    cout << "Expected result: '" << expectedRes << "'" << endl;
    cout << "Acquired result: '" << userRes << "'" << endl;
    return 0;
  }

  // FOURTH TEST CASE
  testCaseArray = vector<char> {'a','c','d','x'};
  functionValues = vector<char> {'a','c','d','x'};
  testCaseTarget = 'h';
  userRes = nextGreatestLetter(functionValues, testCaseTarget);
  expectedRes = 'x';

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: letters: ['a','c','d','x'] target: '" << testCaseTarget << "'" << endl;
    cout << "Expected result: '" << expectedRes << "'" << endl;
    cout << "Acquired result: '" << userRes << "'" << endl;
    return 0;
  }

  // FIFTH TEST CASE
  testCaseArray = vector<char> {'r','t'};
  functionValues = vector<char> {'r','t'};
  testCaseTarget = 's';
  userRes = nextGreatestLetter(functionValues, testCaseTarget);
  expectedRes = 't';

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: letters: ['r','t'] target: '" << testCaseTarget << "'" << endl;
    cout << "Expected result: '" << expectedRes << "'" << endl;
    cout << "Acquired result: '" << userRes << "'" << endl;
    return 0;
  }

  cout << "Congratulations! All test cases passed!" << endl;

  return 0;
}