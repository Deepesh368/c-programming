
#include <stdio.h> // Including standard input output header file
#include <stdlib.h> 
#include <string.h>

int main(void)
{
	char *string1, *string2, *string; //declaring the pointers for dynamic memory allocation//

	string1 = (char*)malloc(255 * sizeof(char)); // allocating memory for string 1 //
	string2 = (char*)malloc(255 * sizeof(char)); // Initializing string 2 //
	

	scanf("%s %s",string1, string2);	//reading the strings into the alloted memories// 
        int len1, len2;
	len1 = strlen(string1); // length of string1 //
	len2 = strlen(string2); // length of string2 //
	string = (char*)malloc((len1 + len2 + 1) * sizeof(char));  //string is memory alloted to store the concatanated strings//

	for(int i = 0;i < len1;i++)   // inserting string1 in string //
	{
		string[i] = string1[i];
	}

	for(int j = 0;j < len2;j++) // inserting string2 in string //
	{
		string[len1] = string2[j];
		len1++;
	}
	
	printf("%s", string); // Printing the string //
	free(string1);  /*We should free the memory before exiting the program as it helps conserve space.*/
	free(string2);
	free(string);
	return 0;
}
