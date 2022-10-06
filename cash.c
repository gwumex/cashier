#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    printf("quarters = %d\n", quarters);
    cents = cents - quarters * 1000;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    printf("dimes = %d\n", dimes);
    cents = cents - dimes * 500;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    printf("nickels = %d\n", nickels);
    cents = cents - nickels * 200;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    printf("pennies = %d\n", pennies);
    cents = cents - pennies * 100;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    printf("pennies = %d\n", pennies);
    cents = cents - pennies * 100;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents = 0;
    do
    {
        cents = get_int("your change: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = cents / 25;
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = cents / 10;
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickels = cents / 5;
    return nickels;
}

int calculate_pennies(int cents)
{
    int pennies = cents / 1;
    return pennies;
}
