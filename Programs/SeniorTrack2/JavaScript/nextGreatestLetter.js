const nextGreatestLetter = (letters, target) => {
  //  WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}








// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW.ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE   |
// |                                                                        |
// --------------------------------------------------------------------------

const verifyNextGreatestLetter = () => {
  // FIRST TEST CASE
  let testCaseArray = ["c", "f", "j"];
  let testCaseTarget = "a";
  let userRes = nextGreatestLetter(["c", "f", "j"], "a");
  let expectedRes = "c";
  let resMatching = true;

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: letters: ${JSON.stringify(testCaseArray)} target: ${testCaseTarget}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return 0;
  }



  // SECOND TEST CASE
  testCaseArray = ["c", "f", "j"];
  testCaseTarget = "c";
  userRes = nextGreatestLetter(["c", "f", "j"], "c");
  expectedRes = "f";

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: letters: ${JSON.stringify(testCaseArray)} target: ${testCaseTarget}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return 0;
  }


  // THIRD TEST CASE
  testCaseArray = ["x", "x", "y", "y"]
  testCaseTarget = "z"
  userRes = nextGreatestLetter(["x", "x", "y", "y"], "z")
  expectedRes = "x"

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: letters: ${JSON.stringify(testCaseArray)} target: ${testCaseTarget}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return 0;
  }

  // FOURTH TEST CASE
  testCaseArray = ["a", "c", "d", "x"]
  testCaseTarget = "h"
  userRes = nextGreatestLetter(["a", "d", "c", "x"], "h")
  expectedRes = "x"

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: letters: ${JSON.stringify(testCaseArray)} target: ${testCaseTarget}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return 0;
  }

  // FIFTH TEST CASE
  testCaseArray = ["r", "t"]
  testCaseTarget = "s"
  userRes = nextGreatestLetter(["r", "t"], "s")
  expectedRes = "t"

  resMatching = userRes == expectedRes ? true : false;

  if (resMatching == false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: letters: ${JSON.stringify(testCaseArray)} target: ${testCaseTarget}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return 0;
  }


  console.log('Congratulations! All test cases passed!')
}

verifyNextGreatestLetter()