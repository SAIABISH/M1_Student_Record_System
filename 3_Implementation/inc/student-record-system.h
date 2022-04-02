#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

void main_window(){
    int choice;
    SetColor(28);
    int x = 2;
    while(1){
        gotoxy(x,8);printf("1. Add Student");
        gotoxy(x,10);printf("2. Search Student");
        gotoxy(x,12);printf("3. Modify Student Record");
        gotoxy(x,14);printf("4. Generate Marksheet");
        gotoxy(x,16);printf("5. Delete Student Record");
        gotoxy(x,18);printf("6. Change password");
        gotoxy(x,20);printf("7. Exit");
        gotoxy(x,22);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add_student();
                break;
            case 2:
                search_student();
                break;
            case 3:
                mod_student();
                break;
            case 4:
                break;
            case 5:
                delete_student();
                break;
            case 6:
                break;
            case 7:
                exit(0);
                break;
            default:
                break;
        }

    }

}

int main(){
    ClearConsoleToColors(17,15);
    SetConsoleTitle("LEARNPROGRAMO - Student Record System");
    window();
    //use_pass_field();
    main_window();
    return 0;
}
