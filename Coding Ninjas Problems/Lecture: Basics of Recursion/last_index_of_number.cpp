int index = 0;
int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

  	if(size == 1) {
            if(*input == x)   return index;
            else return -1;
    }
    ++index;
    int smallAns = lastIndex(input+1, size-1, x);
    if(smallAns == -1) {
        --index;
        if(*input == x) return index;
        else {
            return -1;
        }
    }
}