#include<string.h>
#include<stdio.h>
#include "login.h"

int login()
{

    char username[50];
    char password[50];

    printf("Enter username : ");
    scanf("%s", username);
    printf("Enter password : ");
    scanf("%s", password);


    const char *validUsername = "noor";
    const char *validPassword = "1234";

    return ((strcmp(validUsername, username) == 0) && (strcmp(validPassword, password) == 0));
}
