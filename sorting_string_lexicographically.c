#include<stdio.h>
#include<string.h>
int main()
{int i,j;
char str[10][50],temp[100];
printf("ENTER 10 WORDS\n");
for(i=0;i<10;i++)
{
scanf("%s",str[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(strcmp(str[i],str[j])>0)
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}
}
}
printf("\nIN LEXOGRAPHICAL ORDER: \n");
for(i=0;i<10;i++)
{
printf("%s\n",(str[i]));
}

return 0;
}
