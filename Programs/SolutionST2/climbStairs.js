const climbStairs = (n) => {
  // WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  let prev = 1;
  let sum = 2;
  if (n === 1)
    return 1;

  for (let i = 2; i < n; i++) {
    temp = sum;
    sum = prev + sum;
    prev = temp;
  }


  return sum;
}