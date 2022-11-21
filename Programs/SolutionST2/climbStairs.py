def climbStairs(n):
    # WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
    prev = 1
    sum = 2
    if (n == 1):
        return 1

    for i in range(2, n):
        temp = sum
        sum = prev + sum
        prev = temp

    return sum
    pass
