#include <stdio.h>

float getInterestRate(float interest_rate, float amount);

int main(void)
{
    float loan_amount = 0.0f;
    float interest_rate = 0.0f;
    float monthly_payment = 0.0f;
    int number_of_payments = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("\nEnter interest rate: ");
    scanf("%f", &interest_rate);

    printf("\nEnter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("\nEnter number of payments: ");
    scanf("%d", &number_of_payments);

    printf("\n");

    float month_interest = 0.0f;
    float month_balance = 0.0f;

    for (int i = 1; number_of_payments > 0; number_of_payments--, i++)
    {
        month_interest = getInterestRate(interest_rate, loan_amount);
        month_balance = (loan_amount - monthly_payment) + month_interest;
        loan_amount = month_balance;

        printf("Balance remaining after %d payment: $%.2f\n", i, month_balance);
    }

    return 0;
}

float getInterestRate(float interest_rate, float amount)
{
    return ((interest_rate / 100.0f) / 12.0f) * amount;
}