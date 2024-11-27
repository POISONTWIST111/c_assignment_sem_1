/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
PRICE AND
AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
PRICE AS*/
#include <stdio.h>
#include <string.h>

struct Item {
    char item_name[50];  
    int quantity;        
    float price;         
    float amount;        
};

void input_calculate(struct Item* item) {
    printf("Enter item name: ");
    scanf("%s", item->item_name);  
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);
    printf("Enter price: ");
    scanf("%f", &item->price);  
    item->amount = item->quantity * item->price;
}


void display(struct Item item) {
    printf("\nItem Name: %s\n", item.item_name);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);
    printf("Amount: %.2f\n", item.amount);
}

int main() {
    struct Item item;
    input_calculate(&item);
    display(item);

    return 0;
}
