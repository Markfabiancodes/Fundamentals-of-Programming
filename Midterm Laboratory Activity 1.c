#include <stdio.h>
#include <ctype.h>

int main() {
    char choice;
    float vegetable_kg, fruits_kg, milk_packs, soap_bars, shampoo_bottles;
    float vegetable_price, fruits_price, milk_price, soap_price, shampoo_price;
    float total, payment, change;
    
    do {
        vegetable_kg = 0;
        fruits_kg = 0;
        milk_packs = 0;
        soap_bars = 0;
        shampoo_bottles = 0;
        total = 0;
        
        printf("\nWhat do you want to purchase?:\n");
        
        printf("Vegetable (P54.5/kg) = ");
        scanf("%f", &vegetable_kg);
        vegetable_price = vegetable_kg * 54.5;
        
        printf("Fruits (P120-150/kg) = ");
        scanf("%f", &fruits_kg);
        fruits_price = fruits_kg * 135;
        
        printf("Milk (P90/pack) = ");
        scanf("%f", &milk_packs);
        milk_price = milk_packs * 90;
        
        printf("Soap (P29.45/bar) = ");
        scanf("%f", &soap_bars);
        soap_price = soap_bars * 29.45;
        
        printf("Shampoo and Conditioner (P140/bottle) = ");
        scanf("%f", &shampoo_bottles);
        shampoo_price = shampoo_bottles * 140;
        
        total = vegetable_price + fruits_price + milk_price + soap_price + shampoo_price;
        
        printf("\nTotal purchase: = P%.2f\n", total);
        
        printf("Enter payment amount: P");
        scanf("%f", &payment);
        
        while (payment < total) {
            printf("Insufficient payment! Please enter at least P%.2f: P", total);
            scanf("%f", &payment);
        }
        
        change = payment - total;
        printf("Your change: = P%.2f\n", change);
        
        printf("Do you want to purchase again (Y/N)? ");
        scanf(" %c", &choice);
        
    } while (toupper(choice) == 'Y');
    
    printf("Thank you for shopping!\n");
    return 0;
}