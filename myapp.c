#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess()
{
  printf("do some preprocessing\n");
}




int main()
{
  foo1();
  foo2();
  return 0;
}
