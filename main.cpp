/* 
	Git Workshop Example Program
*/
#include <iostream>
#include <string>
#include <stdio.h>

void print_menu()
{
    std::cout << "====== MAIN MENU ======" << std::endl;
    std::cout << "(a) option a\n";
    std::cout << "(b) option b\n";
    std::cout << std::endl;
}

int main()
{
    while(1) 
    {
        print_menu();
        char menu_option;
        scanf(" %c", &menu_option);
        switch(menu_option) 
        {
            case 'a':
                printf("menu option a selected\n");
                break;
            case 'b':
                printf("menu option b selected\n");
                break;
            default:
                printf("invalid menu option\n");
        }
    }
    return 0;
  
}

