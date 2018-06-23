bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	if(size == 1) {
      if(*input == x)	return true;
      else				return false;
    }

  	bool smallAnswer = checkNumber(input+1, size-1, x);
  	if(smallAnswer == true)		return true;
  	else {
      if(*input == x)	return true;
      else return false;
    }
}