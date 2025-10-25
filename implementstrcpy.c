#include<string.h>
#include<stdio.h>
void mystrcpy(char *destination, const char*source)
{
	while(*destination!='\0')
	{
		*destination=*source;
		source++;
		destination++;
	}
}
int main(){
	char arr[20]="pankaj sharma";
	mystrcpy(arr,"ram");
	printf("%s\n", arr);
}