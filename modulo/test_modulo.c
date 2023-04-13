#include <stdio.h>

int main(int argc, char* argv[])
{
  int i;
  const int N=10;
  printf("Hello World!\n");
  for (i=-5; i<2*N; i++)
  {
    printf("%d\n", i%N);
  }
}
