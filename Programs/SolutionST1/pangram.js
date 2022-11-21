const checkIfPangram = (sentence) => {
  // WRITE CODE HERE
  return new Set(sentence).size === 26;
}