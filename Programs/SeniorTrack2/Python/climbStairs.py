def climbStairs(n):
    # WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
    pass


# --------------------------------------------------------------------------
# |                                                                        |
# | DO NOT EDIT ANYTHING BELOW. ALL YOUR CODE SHOULD BE IN FUNCTION ABOVE  |
# |                                                                        |
# --------------------------------------------------------------------------

def verifyClimbStairs():
    # FIRST TEST CASE
    testCase = 2
    userRes = climbStairs(testCase)
    expectedRes = 2
    resMatching = True

    resMatching = True if userRes == expectedRes else False

    if resMatching == False:
        print('TEST CASE FAILED')
        print('Input:', testCase)
        print('Expected result: ', expectedRes)
        print('Acquired result: ', userRes)
        return

    # SECOND TEST CASE
    testCase = 3
    userRes = climbStairs(testCase)
    expectedRes = 3

    resMatching = True if userRes == expectedRes else False

    if resMatching == False:
        print('TEST CASE FAILED')
        print('Input:', testCase)
        print('Expected result: ', expectedRes)
        print('Acquired result: ', userRes)
        return

    # THIRD TEST CASE
    testCase = 15
    userRes = climbStairs(testCase)
    expectedRes = 987

    resMatching = True if userRes == expectedRes else False

    if resMatching == False:
        print('TEST CASE FAILED')
        print('Input:', testCase)
        print('Expected result: ', expectedRes)
        print('Acquired result: ', userRes)
        return

    # FOURTH TEST CASE
    testCase = 1
    userRes = climbStairs(testCase)
    expectedRes = 1

    resMatching = True if userRes == expectedRes else False

    if resMatching == False:
        print('TEST CASE FAILED')
        print('Input:', testCase)
        print('Expected result: ', expectedRes)
        print('Acquired result: ', userRes)
        return

    # FIFTH TEST CASE
    testCase = 35
    userRes = climbStairs(testCase)
    expectedRes = 14930352

    resMatching = True if userRes == expectedRes else False

    if resMatching == False:
        print('TEST CASE FAILED')
        print('Input:', testCase)
        print('Expected result: ', expectedRes)
        print('Acquired result: ', userRes)
        return

    # SIXTH TEST CASE
    testCase = 21
    userRes = climbStairs(testCase)
    expectedRes = 17711

    resMatching = True if userRes == expectedRes else False

    if resMatching == False:
        print('TEST CASE FAILED')
        print('Input:', testCase)
        print('Expected result: ', expectedRes)
        print('Acquired result: ', userRes)
        return

    print('Congratulations! All test cases passed!')


verifyClimbStairs()
