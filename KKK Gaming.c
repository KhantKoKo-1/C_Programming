
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {

    char c = 0;
    int id = 0;
    int ph = 0;
    int otg = 0;
    int secpw = 0;
    int pw = 0;
    int smoney = 0;
    int lnum = 0;
    int money=0;


    printf("****KKK Gaming****\n");

    printf("Hello user \nDo you have KKK Gaming account?\nYES(Y) or NO(N)\n ", c);

    scanf(" %c", &c);

    if (c == 'Y') {

        while (id != 12345) {

            printf("please enter  your id =", id);

            scanf("%d", &id);
        }

        printf("Your id is = %d\n (correct)!\n", id);

        while (pw != 2222) {

            printf(" Enter  your password=", pw);

            scanf("%d", &pw);
        }

    } else if (c == 'N') {

        while (ph != 12345) {

            printf("please sigh in with your ph number= ", ph);

            scanf("%d", &ph);
        }


        printf("Your Otg code is %d\n", 999 * (rand() % 70), otg);


        if (otg != 999 * (rand() % 70)) {

            printf(" Enter your New password=");

            scanf("%d", &pw);
        } else;

        do {

            printf(" Enter Confirm password=", secpw);

            scanf("%d", &secpw);

        } while (secpw != pw);

    } else;

    printf("Welcome player\n");

    do {
        printf(" Enter Your show money more than 20000 or 20000++=", smoney);

        scanf("%d", &smoney);
    } while (smoney<=15000);

    printf("Your show money is = %d\n",smoney);

    printf("You Can Play now");


       do{ if (money <= smoney) {


            printf(" You can play with KKK money$$$\n Enter Your  money 3000 or 3000++=", money);

            scanf("%d", &money);
        } else;

    } while (money <= 2999);


    printf("Your money is =%d\n", money);
    printf("Dear player ");

    do {

        printf(" What is Your Lucky horse's number\nPlease slect 1 to 20 =", lnum);
        scanf("%d", &lnum);

        if (lnum == 2 || lnum == 6) {
            smoney = smoney + (money) * 2;
            printf("YOu win\n");
            printf("Your money is now =%d\n", smoney);//win money

        } else {
            smoney = smoney - money;
            printf("Try Again\n");

            printf("Your remind money is = %d\nGood luck next round\n", smoney);//lose money

            if (smoney <= money) {
                printf("Not Enough money");
                exit(0);//lose state
            }else;
            }
                do{
                    printf("Enter your money = ", money);
                scanf("%d", &money);//return money
             if(money>smoney){

                 printf("Sorry \nNo enough money \n",money);
             } else;
            }while (money>smoney);

    }while (lnum <= 20 );



    return 0;

	}










