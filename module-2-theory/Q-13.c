#include<stdio.h>
int main(){
    FILE *fptr;
    char buffer[100];

    fptr=fopen("test.txt","w");
    fprintf(fptr,"C Programming is powerful.");
    fclose(fptr);

    fptr=fopen("test.txt","r");
    fgets(buffer,100,fptr);
    printf("\n File Content:%s",buffer);
    fclose(fptr);
}
