int index = 0;
int firstIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	if(*input == x)	{
        return index;
	}
  	if(size == 0) {
      return -1;
    } else {
        ++index;
        firstIndex(input+1, size-1, x);
    }
}