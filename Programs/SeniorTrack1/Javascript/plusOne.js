const plusOne = (digits) => {
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  for i in reversed(range(len(digits))):
    if digits[i] != 9:
      digits[i] += 1
  return digits
    else:
digits[i] = 0
if i == 0:
  digits.insert(0, 1)
return digits
}





// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
// |                                                                        |
// --------------------------------------------------------------------------

const verifyPlusOne = () => {
  // FIRST TEST CASE
  let testCase = [1, 2, 3];
  let userRes = plusOne([1, 2, 3]);
  let expectedRes = [1, 2, 4];
  let resMatching = true;

  resMatching = userRes[0] === expectedRes[0] ? true : false;
  resMatching = userRes[1] === expectedRes[1] ? true : false;
  resMatching = userRes[2] === expectedRes[2] ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${JSON.stringify(testCase)}`);
    console.log(`Expected result: ${JSON.stringify(expectedRes)}`);
    console.log(`Acquired result: ${JSON.stringify(userRes)}`);
    return;
  }

  // SECOND TEST CASE
  testCase = [1, 2, 6, 5, 9];
  userRes = plusOne([1, 2, 6, 5, 9]);
  expectedRes = [1, 2, 6, 6, 0];

  resMatching = userRes[0] === expectedRes[0] ? true : false;
  resMatching = userRes[1] === expectedRes[1] ? true : false;
  resMatching = userRes[2] === expectedRes[2] ? true : false;
  resMatching = userRes[3] === expectedRes[3] ? true : false;
  resMatching = userRes[4] === expectedRes[4] ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${JSON.stringify(testCase)}`);
    console.log(`Expected result: ${JSON.stringify(expectedRes)}`);
    console.log(`Acquired result: ${JSON.stringify(userRes)}`);
    return;
  }

  // THIRD TEST CASE
  testCase = [9, 9, 9, 9];
  userRes = plusOne([9, 9, 9, 9]);
  expectedRes = [1, 0, 0, 0, 0];

  resMatching = userRes[0] === expectedRes[0] ? true : false;
  resMatching = userRes[1] === expectedRes[1] ? true : false;
  resMatching = userRes[2] === expectedRes[2] ? true : false;
  resMatching = userRes[3] === expectedRes[3] ? true : false;
  resMatching = userRes[4] === expectedRes[4] ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${JSON.stringify(testCase)}`);
    console.log(`Expected result: ${JSON.stringify(expectedRes)}`);
    console.log(`Acquired result: ${JSON.stringify(userRes)}`);
    return;
  }

  // FOURTH TEST CASE
  testCase = [1, 9, 9];
  userRes = plusOne([1, 9, 9]);
  expectedRes = [2, 0, 0];

  resMatching = userRes[0] === expectedRes[0] ? true : false;
  resMatching = userRes[1] === expectedRes[1] ? true : false;
  resMatching = userRes[2] === expectedRes[2] ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${JSON.stringify(testCase)}`);
    console.log(`Expected result: ${JSON.stringify(expectedRes)}`);
    console.log(`Acquired result: ${JSON.stringify(userRes)}`);
    return;
  }

  // FIFTH TEST CASE
  testCase = [1, 5, 6, 2, 9, 0];
  userRes = plusOne([1, 5, 6, 2, 9, 0]);
  expectedRes = [1, 5, 6, 2, 9, 1];

  resMatching = userRes[0] === expectedRes[0] ? true : false;
  resMatching = userRes[1] === expectedRes[1] ? true : false;
  resMatching = userRes[2] === expectedRes[2] ? true : false;
  resMatching = userRes[3] === expectedRes[3] ? true : false;
  resMatching = userRes[4] === expectedRes[4] ? true : false;
  resMatching = userRes[5] === expectedRes[5] ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log(`Input: ${JSON.stringify(testCase)}`);
    console.log(`Expected result: ${JSON.stringify(expectedRes)}`);
    console.log(`Acquired result: ${JSON.stringify(userRes)}`);
    return;
  }

  console.log('Congratulations! All test cases passed!');
}

verifyPlusOne();