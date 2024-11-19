#include <stdio.h>

int main() {
    double amount, discount = 0;

    // Input the amount spent by the customer
    printf("Enter the amount spent: ");
    scanf("%lf", &amount);

    // Apply discounts based on amount spent
    if (amount >= 100) {
        discount = 0.10 * amount; // 10% discount
        if (amount >= 500) {
            discount += 0.05 * amount; // Additional 5% discount
        }
    }

    // Calculate the final amount after discount
    double finalAmount = amount - discount;

    printf("Original amount: $%.2lf\n", amount);
    printf("Discount applied: $%.2lf\n", discount);
    printf("Final amount to pay: $%.2lf\n", finalAmount);

    return 0;
}
