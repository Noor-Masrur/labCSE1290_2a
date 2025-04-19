#include "sendmoney.h"

int sendMoney(int currentBalance, int amount)
{
    currentBalance -= amount;
    currentBalance -= amount*0.02;
    currentBalance -= 5;

    return currentBalance;
}
