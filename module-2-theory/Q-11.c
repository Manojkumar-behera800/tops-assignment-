#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[50];
    printf("Enter string 1:");
    scanf("%s", s1);
    printf("Enter string 2:");
    scanf("%s",s2);

    strcat(s1,s2);
    printf("\n Concatenated: %s",s1);
    printf("\n Length: %lu",strlen(s1));
}
