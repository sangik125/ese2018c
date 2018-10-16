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

void turbo_on()
{
  printf("turbo on\n");
}

void turbo_off()
{
  printf("turbo off\n");

}


int main()
{

  turbo_on();
  foo1();
  foo2();
  turbo_off();
  preprocess();
  postprocess();

  return 0;
}
