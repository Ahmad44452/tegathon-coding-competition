const nextGreatesLetter = (letters, target) => {
  //  WRITE ALL YOUR CODE HERE, IN THIS FUNCTION
  let low = 0;
  let high = letters.length - 1;

  while (low <= high) {
    mid = low + Math.floor((high - low) / 2);
    if (letters[mid] <= target) {
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return letters[low % letters.length];
}