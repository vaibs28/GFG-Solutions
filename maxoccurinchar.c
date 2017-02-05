//print the maximum occuring character in a string

#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[]= "test";
	int len=strlen(str);
	int count[10]={0};
	int i;
	for(i=0;i<len;i++)
	count[str[i]]++;
	int max=0;
	char ch;
	for(i=0;i<len;i++)
	{


		if(count[str[i]]>max)
		 {
		 	max=count[str[i]];
		 	ch = str[i];
		 }

	}
	printf("%c occurs %d times",ch,max);

	return 0;
}
