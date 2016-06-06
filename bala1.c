 #include<stdio.h>
 #include<string.h>
int main(){
    char str[5000];
    char rev[5000];
    int i=-1,j=0;

    //printf("Enter any string : ");
    scanf("%s",str);
   
    while(str[++i]!='\0');

    while(i>=0)
     rev[j++] = str[--i];

    rev[j]='\0';
  
    printf("%s",rev);
  
    return 0;
}
