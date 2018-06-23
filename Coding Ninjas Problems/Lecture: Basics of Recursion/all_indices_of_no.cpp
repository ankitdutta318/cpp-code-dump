int index = 0;
int i=0;
int sizearr = 0;
int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

  	if(size == 0) {
      return sizearr;
    } else {
      	if(*input == x)	{
          output[i++] = index;
          ++sizearr;
        }
        ++index;
        return allIndexes(input+1, size-1, x, output);
    }
}