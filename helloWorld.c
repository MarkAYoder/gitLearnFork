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
  // Add your name here.  Be sure it still co
  printf("Hi this is David Savrda");
  printf("Ian Kowalski was here\n");
  printf("Hey, this is Mike McDonald!!!\n");
  printf("Hey, this is David Cooper\n");
  printf("This is Robert Fendricks\n");
  printf("Hey, this is Matt Skorina\n");
  printf("This is Will Elswick\n");
  printf("Alex Alvarez Here\n");
  printf("Hi this is James Savage\n");
  printf("Hi, this is Junxuan Hou\n");
  printf("Ben Paras checking in again\n");
  printf("This is Taylor Purviance.\n");
  printf("Chris Andrews\n");

  return 0;
}

