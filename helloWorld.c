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
  // Add your name here.  Be sure it stills compiles
  printf("Hey, this is Tushar Jain!\n");
  printf(" Hi this is Kansul Mahrifa\n");
  printf("Hello this is Ahmed\n");
  printf("Hello! this is Anand K Parmar\n");
  printf("Hi this is Srinath Mupparsi\n");
  printf("Hi! This is Gopal Krishan Aggarwal\n");
  printf("Howdy, this is Mama Sky\n");
  printf("SIddharth here! how is everyone??\n");
  return 0;
}

