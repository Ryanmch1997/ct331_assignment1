#include <stdio.h>

int main(int arg, char* argc[]){
  printf("%d\n", sizeof(char**));
  printf("%d\n", sizeof(int));
  printf("%d\n", sizeof(int*));
  printf("%d\n", sizeof(double*));
  printf("%d\n", sizeof(long));
  return 0;
}
