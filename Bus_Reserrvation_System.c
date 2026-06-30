#include <stdio.h>
#include <string.h>


struct User
{
    char username[30];
    char password[20];
};


struct Bus
{
    int busNo;
    char busName[30];
    char type[20];
    int capacity;

    char source[30];
    char destination[30];
    char stops[50];
    char time[20];
};


struct Ticket
{
    char passenger[30];
    int busNo;
    int seatNo;
    float amount;
};




struct User user;


void registerUser()
{
    printf("\n===== USER REGISTRATION =====\n");

    printf("Enter Username: ");
    scanf("%s", user.username);

    printf("Enter Password: ");
    scanf("%s", user.password);


    printf("\nRegistration Successful\n");
}



int login()
{
    char u[30],p[20];


    printf("\n===== LOGIN =====\n");


    printf("Enter Username: ");
    scanf("%s",u);


    printf("Enter Password: ");
    scanf("%s",p);



    if(strcmp(u,user.username)==0 && strcmp(p,user.password)==0)
    {
        printf("\nLogin Successful\n");
        return 1;
    }
    else
    {
        printf("\nWrong Username or Password\n");
        return 0;
    }

}



void profile()
{

    printf("\n===== PROFILE =====\n");

    printf("Username : %s",user.username);

}



