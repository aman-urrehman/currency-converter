#include <stdio.h>

// Function prototypes
void convertCurrency(float amount, float conversionRate, char fromCurrency[], char toCurrency[]);

int main() {
    int choice;
    float amount;

    printf("Currency Converter\n");
    printf("------------------\n");
    printf("Available currencies:\n");
    printf("1. USD to INR\n");
    printf("2. INR to USD\n");
    printf("3. EUR to INR\n");
    printf("4. INR to EUR\n");
    printf("5. USD to EUR\n");
    printf("6. EUR to USD\n");
    
    printf("\nEnter your choice (1-6): ");
    scanf("%d", &choice);
    
    if (choice < 1 || choice > 6) {
        printf("Invalid choice! Exiting program.\n");
        return 1;
    }

    printf("Enter amount to convert: ");
    scanf("%f", &amount);

    // Call the appropriate conversion based on user choice
    switch (choice) {
        case 1:
            convertCurrency(amount, 82.5, "USD", "INR"); // USD to INR conversion rate
            break;
        case 2:
            convertCurrency(amount, 1/82.5, "INR", "USD"); // INR to USD conversion rate
            break;
        case 3:
            convertCurrency(amount, 90.0, "EUR", "INR"); // EUR to INR conversion rate
            break;
        case 4:
            convertCurrency(amount, 1/90.0, "INR", "EUR"); // INR to EUR conversion rate
            break;
        case 5:
            convertCurrency(amount, 1.1, "USD", "EUR"); // USD to EUR conversion rate
            break;
        case 6:
            convertCurrency(amount, 1/1.1, "EUR", "USD"); // EUR to USD conversion rate
            break;
    }

    return 0;
}

// Function to convert the currency and print the result with currency names
void convertCurrency(float amount, float conversionRate, char fromCurrency[], char toCurrency[]) {
    float result = amount * conversionRate;
    printf("Converted amount: %.2f %s\n", result, toCurrency);
}
