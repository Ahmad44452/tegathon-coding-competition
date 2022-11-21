def plusOne(digits):
  # WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  pass








# --------------------------------------------------------------------------
# |                                                                        |
# | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
# |                                                                        |
# --------------------------------------------------------------------------

def verifyPlusOne():
  # FIRST TEST CASE
  testCase = [1, 2, 3]
  userRes = plusOne([1, 2, 3])
  expectedRes = [1, 2, 4]
  resMatching = True
  userResLength = len(userRes)
  expectedResLength = len(expectedRes)


  resMatching = True if userResLength == expectedResLength else False
  resMatching = True if resMatching and userRes[0] == expectedRes[0] else False
  resMatching = True if resMatching and userRes[1] == expectedRes[1] else False
  resMatching = True if resMatching and userRes[2] == expectedRes[2] else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testCase)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return
  

  # SECOND TEST CASE
  testCase = [1, 2, 6, 5, 9]
  userRes = plusOne([1, 2, 6, 5, 9])
  expectedRes = [1, 2, 6, 6, 0]
  userResLength = len(userRes)
  expectedResLength = len(expectedRes)

  resMatching = True if userResLength == expectedResLength else False
  resMatching = True if resMatching and userRes[0] == expectedRes[0] else False
  resMatching = True if resMatching and userRes[1] == expectedRes[1] else False
  resMatching = True if resMatching and userRes[2] == expectedRes[2] else False
  resMatching = True if resMatching and userRes[3] == expectedRes[3] else False
  resMatching = True if resMatching and userRes[4] == expectedRes[4] else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testCase)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # THIRD TEST CASE
  testCase = [9, 9, 9, 9]
  userRes = plusOne([9, 9, 9, 9])
  expectedRes = [1, 0, 0, 0, 0]
  userResLength = len(userRes)
  expectedResLength = len(expectedRes)

  resMatching = True if userResLength == expectedResLength else False
  resMatching = True if resMatching and userRes[0] == expectedRes[0] else False
  resMatching = True if resMatching and userRes[1] == expectedRes[1] else False
  resMatching = True if resMatching and userRes[2] == expectedRes[2] else False
  resMatching = True if resMatching and userRes[3] == expectedRes[3] else False
  resMatching = True if resMatching and userRes[4] == expectedRes[4] else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testCase)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # FOURTH TEST CASE
  testCase = [1, 9, 9]
  userRes = plusOne([1, 9, 9])
  expectedRes = [2, 0, 0]
  userResLength = len(userRes)
  expectedResLength = len(expectedRes)


  resMatching = True if userResLength == expectedResLength else False
  resMatching = True if resMatching and userRes[0] == expectedRes[0] else False
  resMatching = True if resMatching and userRes[1] == expectedRes[1] else False
  resMatching = True if resMatching and userRes[2] == expectedRes[2] else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testCase)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # FIFTH TEST CASE
  testCase = [1, 5, 6, 2, 9, 0]
  userRes = plusOne([1, 5, 6, 2, 9, 0])
  expectedRes = [1, 5, 6, 2, 9, 1]
  userResLength = len(userRes)
  expectedResLength = len(expectedRes)


  resMatching = True if userResLength == expectedResLength else False
  resMatching = True if resMatching and userRes[0] == expectedRes[0] else False
  resMatching = True if resMatching and userRes[1] == expectedRes[1] else False
  resMatching = True if resMatching and userRes[2] == expectedRes[2] else False
  resMatching = True if resMatching and userRes[3] == expectedRes[3] else False
  resMatching = True if resMatching and userRes[4] == expectedRes[4] else False
  resMatching = True if resMatching and userRes[5] == expectedRes[5] else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testCase)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  print('Congratulations! All test cases passed!')


verifyPlusOne()