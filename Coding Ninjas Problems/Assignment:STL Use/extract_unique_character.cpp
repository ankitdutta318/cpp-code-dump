// #include <iostream>
// #include <cstring>
// #define NO_OF_CHARS 256
// using namespace std;
 
// /* Returns an array of size 256 containg count
//    of characters in the passed char array */
// int *getCharCountArray(char *str)
// {
//    int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
//    int i;
//    for (i = 0; *(str+i);  i++)
//       count[*(str+i)]++;
//    return count;
// }
 
//  The function returns index of first non-repeating
//    character in a string. If all characters are repeating 
//    then returns -1 
// char* uniqueChar(char *str) {

// 	char *unique;
// 	int *count = getCharCountArray(str);
// 	int index = -1, i;

// 	for (i = 0; *(str+i);  i++)
// 	{
// 	if (count[*(str+i)] == 1)
// 	{
// 	  unique[i] = *(str+i);
// 	}   
// 	}  

// 	free(count); // To avoid memory leak
// 	return unique;
// }

// int main() {
// 	char str[] = "";
// 	char unique[] = "";
// 	cin >> str;
// 	cout << uniqueChar(str);
// 	return 0;
// }

#include <iostream>
#include <cstring>
#include <map>

using namespace std;

string uniqueChar(char *str) {

	map<char, int> frequency;
	string newstr = "";
	int i=0;

	for (int i = 0; i < strlen(str); ++i)
		frequency[str[i]]++;

	for (std::map<char, int>::iterator it=frequency.begin(); it!=frequency.end(); ++it)
	{
		if (it->second == 1)
			newstr += it->first;
	}

	return newstr;
}

int main() {
	char str[] = "";
	cin >> str;
	cout << uniqueChar(strh);
	return 0;
}