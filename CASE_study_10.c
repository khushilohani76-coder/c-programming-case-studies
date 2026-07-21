#include <stdio.h>

int main()
{
    int pizzaQty, burgerQty, drinkQty;
    float pizzaPrice = 250, burgerPrice = 120, drinkPrice = 60;
    float pizzaTotal, burgerTotal, drinkTotal;
    float subtotal, gst, grandTotal;

    printf("Enter Pizza Quantity: ");
    scanf("%d", &pizzaQty);

    printf("Enter Burger Quantity: ");
    scanf("%d", &burgerQty);

    printf("Enter Cold Drink Quantity: ");
    scanf("%d", &drinkQty);

    pizzaTotal = pizzaQty * pizzaPrice;
    burgerTotal = burgerQty * burgerPrice;
    drinkTotal = drinkQty * drinkPrice;

    subtotal = pizzaTotal + burgerTotal + drinkTotal;
    gst = subtotal * 0.18;
    grandTotal = subtotal + gst;

    printf("\n========== RESTAURANT INVOICE ==========\n");
    printf("Pizza      : %d x 250 = %.2f\n", pizzaQty, pizzaTotal);
    printf("Burger     : %d x 120 = %.2f\n", burgerQty, burgerTotal);
    printf("Cold Drink : %d x 60  = %.2f\n", drinkQty, drinkTotal);
    printf("----------------------------------------\n");
    printf("Subtotal   : %.2f\n", subtotal);
    printf("GST (18%%)  : %.2f\n", gst);
    printf("Grand Total: %.2f\n", grandTotal);
    printf("========================================\n");

    return 0;
}