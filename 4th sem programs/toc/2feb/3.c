//not ending with 101
#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int l,i=1,arr[4][2]={0,1,2,1,0,3,2,1};
 gets(str);
 l=strlen(str);
 int crt=str[0]-'0';
 while(i!=l)
 {
  int n=str[i]-'0';
  crt=arr[crt][n];
  i++;
 }
 if(crt==3)
 printf("not accepted");
 else
 printf("accepted");
}
