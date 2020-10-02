A Program to check if strings are rotations of each other or not


Algorithm: areRotations(str1, str2)

    1. Create a temp string and store concatenation of str1 to
       str1 in temp.
                          temp = str1.str1
    2. If str2 is a substring of temp then str1 and str2 are 
       rotations of each other.

    Example:                 
                     str1 = "ABACD"
                     str2 = "CDABA"

     temp = str1.str1 = "ABACDABACD"
     Since str2 is a substring of temp, str1 and str2 are 
     rotations of each other.
     
     
     
     	
// C program to check if two given strings are rotations of 
// each other 
# include <stdio.h> 
# include <string.h> 
# include <stdlib.h> 

/* Function checks if passed strings (str1 and str2) 
are rotations of each other */
int areRotations(char *str1, char *str2) 
{ 
int size1 = strlen(str1); 
int size2 = strlen(str2); 
char *temp; 
void *ptr; 

/* Check if sizes of two strings are same */
if (size1 != size2) 
	return 0; 

/* Create a temp string with value str1.str1 */
temp = (char *)malloc(sizeof(char)*(size1*2 + 1)); 
temp[0] = ''; 
strcat(temp, str1); 
strcat(temp, str1); 

/* Now check if str2 is a substring of temp */
ptr = strstr(temp, str2); 

free(temp); // Free dynamically allocated memory 

/* strstr returns NULL if the second string is NOT a 
	substring of first string */
if (ptr != NULL) 
	return 1; 
else
	return 0; 
} 

/* Driver program to test areRotations */
int main() 
{ 
	char *str1 = "AACD"; 
	char *str2 = "ACDA"; 

	if (areRotations(str1, str2)) 
	printf("Strings are rotations of each other"); 
	else
	printf("Strings are not rotations of each other"); 

	getchar(); 
	return 0; 
} 
