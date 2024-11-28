#include <stdio.h>

int main(void){

    int pass, input, try = 3;
    char ans, clear;

    printf("Welcome!\n");

    do{

        while(1){

            printf("Create your password: ");
            scanf("%d", &pass);
            clear = getchar();

            if(clear != '\n'){
                printf("Please enter digits only!\n\n");

                while (clear != '\n'){
                    clear = getchar();
                }
            }
            else if (pass > 999999 || pass < 100000){
                printf("Your password must be 6 digits long and cannot start with zero!\n\n");
            }
            else{
                break;
            }
        }

        do{
            printf("\n Would you like to change your password before saving it(y/n)?");
            ans = getchar();

            if(ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N'){
                printf("\nPlease enter only 'y' or 'n'!\n");
                clear = getchar();
            }
            else break;
        }while(1);
    }
    while (ans == 'y' || ans == 'Y');

    printf("\nYour password is saved.");

    while(1){
        printf("\nPlease enter the password to confirm: ");
        scanf("%d",&input);
        clear = getchar();

        if(clear != '\n'){
            try--;
            printf("Incorrect password! %d tries left\n", try);
            while (clear != '\n'){
                clear = getchar();
            }
        }
        else if(input == pass){
            printf("Login successful!");
            break;
        }
        else if(try == 1){
            printf("You entered incorrect password for too many times!\n");
            break;
        }
        else{
            try--;
            printf("Incorrect password! %d tries left\n", try);
        }
    }
    return 0;
}