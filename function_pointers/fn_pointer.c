/*
 * fn_pointer.c
 *
 * Some examples of function pointers.  
 * 
 * 
 */
#include <stdio.h>

void myfun(int val) {
  printf("-> inside myfun(): %d\n", val);
}

void function_caller(void (*fun)(int), int val) {
  printf("---");
  fun(val);
  printf("\n");
}

int main(void) {
  void (*fnptr) () = &myfun;
  printf("-> inside main()\n");
  myfun(5);
  (*fnptr)(10);
  function_caller(fnptr, 12);

  return 0;
}
