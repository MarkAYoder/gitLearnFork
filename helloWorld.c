#include <stdio.h>

int bss_var;        /* Uninitialized global variable */

int data_var = 1;   /* Initialized global variable */

int main(int argc, char **argv)
{
  void *stack_var;            /* Local variable on the stack */

  stack_var = (void *)main;   /* Don't let the compiler */
                              /* optimize it out */

  printf("Griffin Steffy");
  printf("Hello, World! Main is executing at %p\n", stack_var);
  printf("This address (%p) is in our stack frame\n", &stack_var);

  /* bss section contains uninitialized data */
  printf("This address (%p) is in our bss section\n", &bss_var);

  /* data section contains initializated data */
  printf("This address (%p) is in our data section\n", &data_var);

  printf("\n");
  printf("Hi this is Mark A. Yoder\n");
  // Add your name below here.  Be sure it stills compiles
  printf("Hi this is Andy Barbour\n");
  printf("Hi this is Brendan Mulholland\n");
  printf("Hi this is Ryan Oberlitner\n");
  printf("Hi this is Rahul Das\n");
  printf("Hi this is Zach Forster\n");
  printf("Hi this is Hannah Woody\n");
  printf("Hi this is Brock Grinstead\n");
  printf("Hi this is Maria Schaefer\n");
  printf("Hi this is Dalton Stichtenoth\n");
  printf("Hi this is Blake Emmert\n");
  printf("Hi this is Isaac Austin\n");
  printf("Hi this is Isaac Lau\n");
  printf("Hi this is Leela Pakanati\n");
  printf("Hi this is Mark Procter\n");
  printf("Hi this is Connor Mattox\n");
  printf("Hi this is Maddy Twetten\n");
  printf("Hi this is Seun Ladipo\n");
  printf("Hi this is Anand Dwivedi\n");
  return 0;
}
