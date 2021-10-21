#include <stdio.h>

int main() {

    // Declare Variables
    int order,pepsi=100,drpepper=120,cocacola=95,change,amount;

    //Read Order Value
    printf("Select Your Order \n[1] Pepsi (100) \n[2] Dr.Pepper (120) \n[3] Coca-Cola (95) \nChoice:");
    scanf("%d",&order);

    //Print Order with Switch case
    switch(order)
    {
        case 1:  //Pepsi
                printf("Input Payment:");
                scanf("%d", &amount);

            if (amount >= pepsi) {
                 change = amount - pepsi;
                 printf("\nYou have Purchase Pepsi");

                 printf("\nChange:%d" ,change);
             } else {
                 printf("\n You don't have enough Funds.");
                 }
              break;

        case 2: //Dr.Pepper
                printf("Input Payment:");
                scanf("%d", &amount);

            if (amount >= drpepper) {
                 change = amount - drpepper;
                 printf("\nYou have Purchase Dr.Pepper");

                 printf("\nChange:%d" ,change);
             } else {
                 printf("\n You don't have enough Funds.");
                 }
              break;
        case 3: //Coca-Cola
                printf("Input Payment:");
                scanf("%d", &amount);

            if (amount >= cocacola) {
                 change = amount - cocacola;
                 printf("\nYou have Purchase Coca-Cola");

                 printf("\nChange:%d" ,change);
             } else {
                 printf("\n You don't have enough Funds.");
                 }
              break;

        default: //Invalid Input
            printf("Invalid Input",order);
    }

    return 0;
}
