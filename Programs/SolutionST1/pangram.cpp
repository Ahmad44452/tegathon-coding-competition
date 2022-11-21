bool checkIfPangram(string sentence){
  // WRITE CODE HERE
  int Arr[26] = { 0 };
    // Iterating through the specified string
    for (int i = 0; i < sentence.length(); i++) 
    {
        // if i'th character in string is uppercase
        if (isupper(sentence[i])) 
        {
           Arr[ sentence[i] - 'A' ]++;
        }
        // else if i'th character in string is lowercase
        else if (islower(sentence[i])) 
        {
            Arr[ sentence[i] - 'a' ]++;
        }
     }
 
    // Iterating through array to check for the presence of 0 value
    for (int i = 0; i < 26; i++) 
    {
        if(Arr[i] == 0)
            return true;
    }
 return false;
}