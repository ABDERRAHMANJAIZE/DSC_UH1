#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NMAX 50

typedef char mot[NMAX];

void miroir(mot dest,mot src)
{
	int i,k;
	k=strlen(src);
	for(i=0;i<k;i++)
	{
		dest[i]=src[k-(i+1)];
	}
	
	dest[i]='\0';
}


int main()
{
	mot src,dest;
	printf("entrer le mot");
	gets(src);
	miroir(dest,src);
	printf("%s",dest);
}
