#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[101];
    char sen[101];
char temp;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       scanf("%s",&ch);
    printf("%s \n",&ch);
    scanf("%s",s);
    printf("%s \n",s);
    //scanf("%s",sen);
    
    scanf("%c",&temp); // temp statement to clear buffer
    fgets(sen,30,stdin);
    printf("%s",sen);
    return 0;
}
