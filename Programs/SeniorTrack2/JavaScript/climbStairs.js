const climbStairs = (n) => {
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}



// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW.ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE |
// |                                                                        |
// --------------------------------------------------------------------------

const verifyClimbStairs = () => {
  // FIRST TEST CASE
  let testCase = 2;
  let userRes = climbStairs(testCase);
  let expectedRes = 2;
  let resMatching = true;

  resMatching = userRes === expectedRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${testCase}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return
  }


  // SECOND TEST CASE
  testCase = 3;
  userRes = climbStairs(testCase);
  expectedRes = 3;

  resMatching = userRes === expectedRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${testCase}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return
  }

  // THIRD TEST CASE
  testCase = 15;
  userRes = climbStairs(testCase);
  expectedRes = 987;

  resMatching = userRes === expectedRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${testCase}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return
  }

  // FOURTH TEST CASE
  testCase = 1;
  userRes = climbStairs(testCase);
  expectedRes = 1;

  resMatching = userRes === expectedRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${testCase}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return
  }

  // FIFTH TEST CASE
  testCase = 35;
  userRes = climbStairs(testCase);
  expectedRes = 14930352;

  resMatching = userRes === expectedRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${testCase}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return
  }

  // SIXTH TEST CASE
  testCase = 21;
  userRes = climbStairs(testCase);
  expectedRes = 17711;

  resMatching = userRes === expectedRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${testCase}`);
    console.log(`Expected result: ${expectedRes}`);
    console.log(`Acquired result: ${userRes}`);
    return
  }

  console.log('Congratulations! All test cases passed!');
}

verifyClimbStairs()
