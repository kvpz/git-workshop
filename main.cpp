// IEEE Git Workshop Example Program
#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
  char menu_option;
  scanf("%c", &menu_option);
  
  switch(menu_option) {
    case 'a':
        printf("menu option a selected\n");
        break;
    case 'b':
        printf("menu option b selected\n");
        break;
    default:
        printf("invalid menu option\n");
  }
  
  return 0;
  
}