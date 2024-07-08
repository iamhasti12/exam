#include<stdio.h>
int main()
{
	int c=0,count=0;
	char s[1000];
	printf("Input a string\n");
	gets(s);
      
      while(s[c] !='\0')
      {
      	if(s[c]=='a'||s[c]=='A'||s[c]=='E'||s[c]=='e'||s[c]=='i'||s[c]=='I'||s[c]=='o'||s[c]=='O'||s[c]=='u'||s[c]=='U')
      	count++;
      	c++;
	  }
	  printf(" number of vowels in the string =%d",count);
}
