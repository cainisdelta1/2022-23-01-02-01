#include <stdio.h>
int itemNum = 0;
float priceAfterDiscount = 0.0;

void discount()
{
  if (itemNum >= 11 && itemNum <= 20)
  {
    printf("Discount = 10%%\n");
  }
  else if (itemNum >= 21 && itemNum <= 50)
  {
    printf("Discount = 20%%\n");
  }
  else if (itemNum >=51 && itemNum <= 100)
  {
    printf("Discount = 40%%\n");
  }
  else if (itemNum >= 101)
  {
    printf("Discount = 50%%");
    
  }
}

int main(void) {
  
  printf("How many items are you purchasing?\n");
  scanf("%i", &itemNum);
  if (itemNum >= 10)
  {
    discount();
  }
  
  return 0;
}
