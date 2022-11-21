const checkIfPangram = (sentence) => {
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
}







// --------------------------------------------------------------------------
// |                                                                        |
// | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
// |                                                                        |
// --------------------------------------------------------------------------

const verifyCheckIfPangram = () => {
  // FIRST TEST CASE
  let testSentence = "thequickbrownfoxjumpsoverthelazydog";
  let expectedRes = true;
  let userRes = checkIfPangram(testSentence);
  let resMatching = true;

  resMatching = expectedRes === userRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('Input: ' + testSentence);
    console.log('Expected result: ' + expectedRes);
    console.log('Acquired result: ' + userRes);
    return 0;
  }



  // SECOND TEST CASE
  testSentence = "leetcode";
  expectedRes = false;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes === userRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('Input: ' + testSentence);
    console.log('Expected result: ' + expectedRes);
    console.log('Acquired result: ' + userRes);
    return 0;
  }


  // THIRD TEST CASE
  testSentence = "mrjocktvquizphdbagsfewlynx";
  expectedRes = true;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes === userRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('Input: ' + testSentence);
    console.log('Expected result: ' + expectedRes);
    console.log('Acquired result: ' + userRes);
    return 0;
  }

  // FOURTH TEST CASE
  testSentence = "whatisyourname";
  expectedRes = false;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes === userRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('Input: ' + testSentence);
    console.log('Expected result: ' + expectedRes);
    console.log('Acquired result: ' + userRes);
    return 0;
  }

  // FIFTH TEST CASE
  testSentence = "letsgotoschooltogether";
  expectedRes = false;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes === userRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('Input: ' + testSentence);
    console.log('Expected result: ' + expectedRes);
    console.log('Acquired result: ' + userRes);
    return 0;
  }

  // SIXTH TEST CASE
  testSentence = "sixtyzipperswerequicklypickedfromthewovenjutebag";
  expectedRes = true;
  userRes = checkIfPangram(testSentence);

  resMatching = expectedRes === userRes ? true : false;

  if (resMatching === false) {
    console.log('TEST CASE FAILED');
    console.log('Input: ' + testSentence);
    console.log('Expected result: ' + expectedRes);
    console.log('Acquired result: ' + userRes);
    return 0;
  }


  console.log('Congratulations! All test cases passed!');

}

verifyCheckIfPangram();