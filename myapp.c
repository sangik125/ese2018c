#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess()
{
  printf("do some preprocessing\n");
}

void postprocess()
{
  printf("postprocess\n");
}



int main()
{
  preprocess();
  postprocess();
  foo1();
  foo2();
  return 0;
}
