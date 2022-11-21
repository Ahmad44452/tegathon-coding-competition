#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}






// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
// |                                                                        |
// --------------------------------------------------------------------------

int main(){
  // FIRST TEST CASE
  vector<int> testCase{1, 2, 3};
  vector<int> functionValues{1, 2, 3};
  vector<int> userRes = plusOne(functionValues);
  vector<int> expectedRes{1, 2, 4};
  bool resMatching = true;
  int userResLength = userRes.size();
  int expectedResLength = expectedRes.size();
  auto resStartingIndex = userRes.begin();
  auto expectedStartingIndex = expectedRes.begin();

  resMatching = userResLength == expectedResLength ? true : false;
  resMatching = resMatching && *(resStartingIndex+0) == *(expectedStartingIndex+0) ? true : false;
  resMatching = resMatching && *(resStartingIndex+1) == *(expectedStartingIndex+1) ? true : false;
  resMatching = resMatching && *(resStartingIndex+2) == *(expectedStartingIndex+2) ? true : false;

  if(resMatching == false){
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: [ ";
    for (auto i = testCase.begin(); i != testCase.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Expected result: [ ";
    for (auto i = expectedRes.begin(); i != expectedRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Acquired result: [ ";
    for (auto i = userRes.begin(); i != userRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    return 0;
  }
    
  

  // SECOND TEST CASE
  testCase = vector<int> {1, 2, 6, 5, 9};
  functionValues = vector<int> {1, 2, 6, 5, 9};
  userRes = plusOne(functionValues);
  expectedRes = vector<int> {1, 2, 6, 6, 0};
  userResLength = userRes.size();
  expectedResLength = expectedRes.size();
  resStartingIndex = userRes.begin();
  expectedStartingIndex = expectedRes.begin();

  resMatching = userResLength == expectedResLength ? true : false;
  resMatching = resMatching && *(resStartingIndex+0) == *(expectedStartingIndex+0) ? true : false;
  resMatching = resMatching && *(resStartingIndex+1) == *(expectedStartingIndex+1) ? true : false;
  resMatching = resMatching && *(resStartingIndex+2) == *(expectedStartingIndex+2) ? true : false;
  resMatching = resMatching && *(resStartingIndex+3) == *(expectedStartingIndex+3) ? true : false;
  resMatching = resMatching && *(resStartingIndex+4) == *(expectedStartingIndex+4) ? true : false;

  if(resMatching == false){
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: [ ";
    for (auto i = testCase.begin(); i != testCase.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Expected result: [ ";
    for (auto i = expectedRes.begin(); i != expectedRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Acquired result: [ ";
    for (auto i = userRes.begin(); i != userRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    return 0;
  }

  // THIRD TEST CASE
  testCase = vector<int> {9, 9, 9, 9};
  functionValues = vector<int> {9, 9, 9, 9};
  userRes = plusOne(functionValues);
  expectedRes = vector<int> {1, 0, 0, 0, 0};
  userResLength = userRes.size();
  expectedResLength = expectedRes.size();
  resStartingIndex = userRes.begin();
  expectedStartingIndex = expectedRes.begin();


  resMatching = userResLength == expectedResLength ? true : false;
  resMatching = resMatching && *(resStartingIndex+0) == *(expectedStartingIndex+0) ? true : false;
  resMatching = resMatching && *(resStartingIndex+1) == *(expectedStartingIndex+1) ? true : false;
  resMatching = resMatching && *(resStartingIndex+2) == *(expectedStartingIndex+2) ? true : false;
  resMatching = resMatching && *(resStartingIndex+3) == *(expectedStartingIndex+3) ? true : false;
  resMatching = resMatching && *(resStartingIndex+4) == *(expectedStartingIndex+4) ? true : false;

  if(resMatching == false){
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: [ ";
    for (auto i = testCase.begin(); i != testCase.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Expected result: [ ";
    for (auto i = expectedRes.begin(); i != expectedRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Acquired result: [ ";
    for (auto i = userRes.begin(); i != userRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    return 0;
  }

  // FOURTH TEST CASE
  testCase = vector<int> {1, 9, 9};
  functionValues = vector<int> {1, 9, 9};
  userRes = plusOne(functionValues);
  expectedRes = vector<int> {2, 0, 0};
  userResLength = userRes.size();
  expectedResLength = expectedRes.size();
  resStartingIndex = userRes.begin();
  expectedStartingIndex = expectedRes.begin();

  resMatching = userResLength == expectedResLength ? true : false;
  resMatching = resMatching && *(resStartingIndex+0) == *(expectedStartingIndex+0) ? true : false;
  resMatching = resMatching && *(resStartingIndex+1) == *(expectedStartingIndex+1) ? true : false;
  resMatching = resMatching && *(resStartingIndex+2) == *(expectedStartingIndex+2) ? true : false;

  if(resMatching == false){
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: [ ";
    for (auto i = testCase.begin(); i != testCase.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Expected result: [ ";
    for (auto i = expectedRes.begin(); i != expectedRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Acquired result: [ ";
    for (auto i = userRes.begin(); i != userRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    return 0;
  }

  // FIFTH TEST CASE
  testCase = vector<int> {1, 5, 6, 2, 9, 0};
  functionValues = vector<int> {1, 5, 6, 2, 9, 0};
  userRes = plusOne(functionValues);
  expectedRes = vector<int> {1, 5, 6, 2, 9, 1};
  userResLength = userRes.size();
  expectedResLength = expectedRes.size();
  resStartingIndex = userRes.begin();
  expectedStartingIndex = expectedRes.begin();

  resMatching = userResLength == expectedResLength ? true : false;
  resMatching = resMatching && *(resStartingIndex+0) == *(expectedStartingIndex+0) ? true : false;
  resMatching = resMatching && *(resStartingIndex+1) == *(expectedStartingIndex+1) ? true : false;
  resMatching = resMatching && *(resStartingIndex+2) == *(expectedStartingIndex+2) ? true : false;
  resMatching = resMatching && *(resStartingIndex+3) == *(expectedStartingIndex+3) ? true : false;
  resMatching = resMatching && *(resStartingIndex+4) == *(expectedStartingIndex+4) ? true : false;
  resMatching = resMatching && *(resStartingIndex+5) == *(expectedStartingIndex+5) ? true : false;

  if(resMatching == false){
    cout << "TEST CASE FAILED" << endl;
    cout << "Input: [ ";
    for (auto i = testCase.begin(); i != testCase.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Expected result: [ ";
    for (auto i = expectedRes.begin(); i != expectedRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    cout << "Acquired result: [ ";
    for (auto i = userRes.begin(); i != userRes.end(); i++){
      cout << *i << " ";
    }
    cout << "]" << endl;
    return 0;
  }

  cout << "Congratulations! All test cases passed!" << endl;
  return 0;
}