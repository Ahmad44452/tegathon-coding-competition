int climbStairs(int n){
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  int prev = 1;
  int sum = 2;
  if (n == 1)
    return 1;

  for (int i = 2; i < n; i++) {
    int temp = sum;
    sum = prev + sum;
    prev = temp;
  }


  return sum;
}