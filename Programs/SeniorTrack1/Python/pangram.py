def checkIfPangram(sentence):
  # WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  pass





# --------------------------------------------------------------------------
# |                                                                        |
# | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
# |                                                                        |
# --------------------------------------------------------------------------

def verifyCheckIfPangram():
  # FIRST TEST CASE
  testSentence = "thequickbrownfoxjumpsoverthelazydog"
  expectedRes = True
  userRes = checkIfPangram(testSentence)
  resMatching = True

  resMatching = True if expectedRes == userRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testSentence)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return
  

  # SECOND TEST CASE
  testSentence = "leetcode"
  expectedRes = False
  userRes = checkIfPangram(testSentence)

  resMatching = True if expectedRes == userRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testSentence)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # THIRD TEST CASE
  testSentence = "mrjocktvquizphdbagsfewlynx"
  expectedRes = True
  userRes = checkIfPangram(testSentence)

  resMatching = True if expectedRes == userRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testSentence)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # FOURTH TEST CASE
  testSentence = "whatisyourname"
  expectedRes = False
  userRes = checkIfPangram(testSentence)

  resMatching = True if expectedRes == userRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testSentence)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return

  # FIFTH TEST CASE
  testSentence = "letsgotoschooltogether"
  expectedRes = False
  userRes = checkIfPangram(testSentence)

  resMatching = True if expectedRes == userRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testSentence)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return
  
  # SIXTH TEST CASE
  testSentence = "sixtyzipperswerequicklypickedfromthewovenjutebag"
  expectedRes = True
  userRes = checkIfPangram(testSentence)

  resMatching = True if expectedRes == userRes else False

  if resMatching == False:
    print('TEST CASE FAILED')
    print('Input: ',testSentence)
    print('Expected result: ',expectedRes)
    print('Acquired result: ',userRes)
    return
  

  print('Congratulations! All test cases passed!')


verifyCheckIfPangram()