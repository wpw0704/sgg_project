#include <stdio.h>
#define SQ(x) (x) * (x)

int get_square(int x){
  return x * x;
}
int main()
{

  int i = 1;
  while (i <= 5)
  {
    printf("%d \n", SQ(i++));
    // printf("%d \n", (x) * (x));
    // printf("%d \n", (i++) * (i++));
    // printf("%d \n", get_square(i++));
  }


  return 0;
}