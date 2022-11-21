vector<int> plusOne(vector<int>& digits) {
  auto startPointer = digits.begin();
  int digitsSize = digits.size();
  
  for(int i=digitsSize-1;i>=0;i--){
    if(*(startPointer+i) != 9){
      *(startPointer+i) = *(startPointer+i) - 1;
      return digits;
    }else{
      *(startPointer+i) = 0;
      if(i == 0){
        digits.insert(startPointer,1);
        return digits;
      }
    }
      
  }

  return digits;
}