/*
    County Library System
    By Phanuel Bett
    7th march 2022
    MIT license
    C99 Compiler
*/
#include <stdio.h>
#include <stdlib.h>

void execute_action(int action);

struct Patron{
    char name[100];
    char email[50];
    char password [30];
    int is_staff;
};

struct Resources{
    char title[100];
    char subject[100];
    char author[100];
    char edition[30];
    int is_book;
};

void add_patron()
{
    struct Patron patron;
    printf("Enter Name: ");
    getchar();
    gets(patron.name);
    printf("Enter Your Email: ");
    gets(patron.email);
    printf("Enter Initial Password: ");
    gets(patron.password);
    printf("Enter 1 If Staff 0 Otherwise: ");
    scanf("%d", &patron.is_staff);
    printf("Patron %s Successfully Added To The System\n", patron.name);


}

void add_resources()
{
    struct Resources resources;
    printf("Enter Book Title : ");
    getchar();
    gets(resources.title);
    printf("Enter Subject : ");
    gets(resources.subject);
    printf("Enter Book Author: ");
    gets(resources.author);
    printf("Enter Book Edition: ");
    gets(resources.edition);
    printf("Enter 1 If Book 0 Otherwise: ");
    scanf("%d", &resources.is_book);
    printf("Resources %s Successfully Added To The System\n", resources.title);

}
int menu(){
    int action;
        printf("Select An Action Below...\n");
        printf("Select An Action Below...\n\n");
        printf("1. Add New Patron\n");
        printf("2. View All Patrons\n");
        printf("3. Add New Resources\n");
@@ -27,13 +76,13 @@ int menu(){
void execute_action(int action) {
    switch (action) {
    case 1:
        printf("Adding New Patron\n");
        add_patron();
        break;
    case 2:
        printf("Here is the list of Patron\n");
        printf("Here Is the List of Patrons");
        break;
    case 3:
        printf("Adding New Resources\n");
       add_resources();
        break;
    case 4:
        printf("Here Is the list of Resources\n");
@@ -47,10 +96,9 @@ void execute_action(int action) {

int main(){
    int action;
    char title[100] = "COUNTY LIBRARY SYSTEM";
    char title[100] = "COUNTY LIBRARY MANAGEMENT";
    char status[100] = "Welcome Weston";
    printf("\n\n\n\t\t\t   *******\n\t\t\t%s\n \t\t\t    %s\n\t\t\t   ********\n\n", title, status);
    action = menu();
    printf("\n\n\n\t\t\t   *******\n\t\t\t%s\n \t\t\t\    %s\n\t\t\t   ********\n\n", title, status);
    execute_action(menu());
    return 0;
}
