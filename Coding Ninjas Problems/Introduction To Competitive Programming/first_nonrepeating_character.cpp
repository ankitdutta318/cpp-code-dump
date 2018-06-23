
#include <iostream>
#include <cstring>
#define NO_OF_CHARS 256
using namespace std;
 
/* Returns an array of size 256 containg count
   of characters in the passed char array */
int *getCharCountArray(char *str)
{
   int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
   int i;
   for (i = 0; *(str+i);  i++)
      count[*(str+i)]++;
   return count;
}
 
/* The function returns index of first non-repeating
   character in a string. If all characters are repeating 
   then returns -1 */
int firstNonRepeating(string str) {
	char str1[str.length()+1];
	strcpy(str1, str.c_str());

	int *count = getCharCountArray(str1);
	int index = -1, i;

	for (i = 0; *(str1+i);  i++)
	{
	if (count[*(str1+i)] == 1)
	{
	  index = i;
	  break;
	}   
	}  

	free(count); // To avoid memory leak
	return index;
}
 
/* Driver program to test above function */
int main()
{
  string str;
  cin >> str;
  int index =  firstNonRepeating(str);
  if (index == -1)  
    cout << "Either all characters are repeating or string is empty";
  else
   cout << "First non-repeating character is " << str[index];
  getchar();
  return 0;
}