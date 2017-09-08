#include <stdio.h>

int bss_var;        /* Uninitialized global variable */

int data_var = 1;   /* Initialized global variable */

int main(int argc, char **argv)
{
  void *stack_var;            /* Local variable on the stack */

  stack_var = (void *)main;   /* Don't let the compiler */
                              /* optimize it out */

  printf("Hello, World! Main is executing at %p\n", stack_var);
  printf("This address (%p) is in our stack frame\n", &stack_var);

  /* bss section contains uninitialized data */
  printf("This address (%p) is in our bss section\n", &bss_var);

  /* data section contains initializated data */
  printf("This address (%p) is in our data section\n", &data_var);

  printf("\n");
  printf("Hi this is Mark A. Yoder\n");
  printf("Hi this is Ryan Evans\n");
  // Add your name below here.  Be sure it stills compiles
  printf("Hi this is Luke Craig\n");
  printf("Hello I am andrew Mueller\n");
  printf("Hi this is Adam Wiesler\n");
  printf("Hello I am Joey Pierce\n");
  printf("Hi this is Dustin Kline\n");
  printf("Hi this is Shuyue (Yvette) Weng\n");
  printf("Hi this is Donglai Guo\n");
  printf("Hi this is Yuchen Wang\n");
  printf("Hi this is John Wang\n");
  printf("Hello, I'm Chace Beard\n");
  printf("Hi This is Daniel Neelappa");

  return 0
}
