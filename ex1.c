#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

char name[20];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello %s!\n",name);
  
  printf("Rolling dice...\n");
  srand((unsigned int) time(NULL));
    int x=rand();
    int y=rand();
    int d1=x%6+1;
    int d2=y%6+1;
    printf("Die 1: %d\n",d1);
    printf("Die 2: %d\n",d2);
    printf("Total value: %d\n",d1+d2);
    return 0;
}
