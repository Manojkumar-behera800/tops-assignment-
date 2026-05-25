#include<stdio.h>

union fruit
{
    char name[10];   //10
    float price;     //4
    int qty;         //4
} f;

main()
{
    printf("\n Enter fruits qty name price");

    //scanf("%d %s %f",&f.qty,f.name,&f.price);

    scanf("%s", f.name);

    printf("\n fruit name=%s", f.name);
}

