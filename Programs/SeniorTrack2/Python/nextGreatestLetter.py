def nextGreatestLetter(letters, target):
  # WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  pass








# --------------------------------------------------------------------------
# |                                                                        |
# | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
# |                                                                        |
# --------------------------------------------------------------------------

def verifyNextGreatestLetter():
  # FIRST TEST CASE
  testCaseArray = ["c","f","j"]
  testCaseTarget = "a"
  userRes = nextGreatestLetter(["c","f","j"],"a")
  expectedRes = "c"
  resMatching = True

  resMatching = True if userRes == expectedRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: letters:',testCaseArray," target:",testCaseTarget)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return
  

  # SECOND TEST CASE
  testCaseArray = ["c","f","j"]
  testCaseTarget = "c"
  userRes = nextGreatestLetter(["c","f","j"],"c")
  expectedRes = "f"

  resMatching = True if userRes == expectedRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: letters:',testCaseArray," target:",testCaseTarget)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return
  

  # THIRD TEST CASE
  testCaseArray = ["x","x","y","y"]
  testCaseTarget = "z"
  userRes = nextGreatestLetter(["x","x","y","y"],"z")
  expectedRes = "x"

  resMatching = True if userRes == expectedRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: letters:',testCaseArray," target:",testCaseTarget)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # FOURTH TEST CASE
  testCaseArray = ["a","c","d","x"]
  testCaseTarget = "h"
  userRes = nextGreatestLetter(["a","d","c","x"],"h")
  expectedRes = "x"

  resMatching = True if userRes == expectedRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: letters:',testCaseArray," target:",testCaseTarget)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # FIFTH TEST CASE
  testCaseArray = ["r","t"]
  testCaseTarget = "s"
  userRes = nextGreatestLetter(["r","t"],"s")
  expectedRes = "t"

  resMatching = True if userRes == expectedRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: letters:',testCaseArray," target:",testCaseTarget)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return
  

  print('Congratulations! All test cases passed!')


verifyNextGreatestLetter()