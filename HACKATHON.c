#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>



void timer(void)
{
    int hr = 0, min = 0, sec = 0, count = 0;
    float a = 0;
    while (sec <= 4)
    {
        count++;
        count++; // NOTE : U MUST HAVE VERY FAST PROCESSOR LIKE I HAVE RYZEN 7 TO MATCH WITH THE REAL TIMING OTHERWISE USE ONE MORE COUNT ++
        if (count > 99)
        {
            sec++;
            count = 0;
        }
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        if (min > 59)
        {
            hr++;
            min = 0;
        }
        if (hr > 23)
        {
            hr = 0;
        }
        printf("                                             Clock Time -->  %02d:%02d:%02d:%02d  ", hr, min, sec, count);
        Sleep(a);
        system("cls");
    }
}

void load1()
{
    system("color 60");

    char a = 177, b = 219;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n                                                        Wait ! Installing Macros ...\n\n");
    printf("\t\t\t\t\t");

    for (int i = 0; i < 60; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t");

    for (int i = 0; i < 60; i++)
    {
        printf("%c", b);

        Sleep(100);
    }
}

void load2()
{
    system("color 80");

    char a = 177, b = 219;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n                                                                     Loading ...\n\n");
    printf("\t\t\t\t\t");

    for (int i = 0; i < 60; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t");

    for (int i = 0; i < 60; i++)
    {
        printf("%c", b);

        Sleep(100);
    }
}

void border()
{
    system("color 20");
    char a = 177, b = 219;
    printf("\n\n");

    for (int i = 0; i < 282; i++)
    {
        printf("%c", a);
    }
    printf("\n\n");
}

int Heart(void)
{
    Sleep(5000);
    system("cls");
    load2();
    Sleep(800);
    system("cls");
    system("COLOR 60");
    int r, c;
    char name_love[30];
    printf(" \n Can you give your Name to us .. :");
    scanf("%s", name_love);
    system("COLOR 40");
    for (r = 0; r <= 2; r++)
    {
        for (c = 1; c <= 17; c++)
        {
            if ((c >= 3 - r && c <= 6 + r) || (c >= 12 - r && c <= 15 + r))
                printf(" ");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (r = 0; r < 9; r++)
    {
        for (c = 1; c <= 1; c++)
        {
            if ((c >= r + 1 && c <= 17 - r))
                printf("DSCNITJ X %s", name_love);
            else
                printf(" ");
            system("COLOR 80");
        }
        printf("\n");
        system("COLOR 90");

        for (r = 0; r <= 2; r++)
        {
            for (c = 1; c <= 17; c++)
            {
                if ((c >= 3 - r && c <= 6 + r) || (c >= 12 - r && c <= 15 + r))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
            system("COLOR 60");
        }
        for (r = 0; r < 9; r++)
        {
            for (c = 1; c <= 17; c++)
            {
                if ((c >= r + 1 && c <= 17 - r))
                    printf("*");
                else
                    printf(" ");
                system("COLOR 80");
            }
            printf("\n");
            system("COLOR 60");
        }
        return (0);
    }
}

int main()
{
    system("COLOR 90");
    int found = 0;
    char users[4][15] = {"DSCNITJ", "MRITUNJAY", "HACKMOL 3.0", "ANUBHAV"};
    char names[15];
    int n = 4;
    printf("\n                                                     **Enter Username** :  \n");
    gets(names);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(names, users[i]) == 0)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("\n                                                 AUTHORISATION SUCCESSFUL....\n");
        system("COLOR 70");
        printf(" \n                           Press any key to roll with the Best User Experienced Console Based Game ");
        getch();

        load1();
        printf("\n     Installation Successful \t\t");
        printf("  Kindly wait for 5 seconds to Wrap the Contents and present it to u ");

        Sleep(1500);

        timer();
        border();
        system("COLOR E0");

        printf("\n                ************************************** ESCAPE THE NUMBERS **********************************");
        printf(" \n TRY YOUR LUCK !!     WHICH ONE A");
        Sleep(100);
        printf("\tor B");
        Sleep(100);
        printf("\tor C");
        Sleep(300);
        printf("\t or go with D for DEVIL.... \n");
        printf(" \n \t\t\t           Getting Confused .. Choose Faster TIME IS RUNNING !!!   \n ");
        char option;
        int n, count = 1;
        scanf("%c", &option);

        switch (option)
        {
        case 'A':
            srand(time(0));
            int num1 = rand() % 20 + 1;

            do
            {
                system("COLOR 30");
                printf("Choose the right Path from 1 to 20 to ESCAPE !! otherwise LOCKED :");
                scanf("%d", &n);

                if (n != num1)
                {
                    printf("\n Oops!! You missed chance to escape .TRY AGAIN (1 TO 20 0nly)  !! \n");
                }
                else
                {
                    printf("\n Congratulations!!  \n. You got your way in %d times \n", count);
                }
                count++;
                system("COLOR 40");
                border();
            } while (n != num1);
            if (count > 18)
            {
                system("COLOR 50");
                printf("\n Even you escaped !! You lost our heart as you have taken +18 chances \n");
                printf("\n Take Care !! Have a nice day   \n");
                border();
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            else
            {
                system("COLOR 50");
                printf(" You Won !! We have a GIFT for you ....  ");
                border();
                Sleep(1000);
                Heart();
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            break;

        case 'B':

            srand(time(0));

            int num2 = rand() % 30 + 1;

            do
            {
                system("COLOR 30");
                printf("Choose carefully the right Path from 1 to 30 !! otherwise u will remain LOCKED :");
                scanf("%d", &n);

                if (n != num2)
                {
                    printf("\n Lost Lost !!! Make attempt(1 to 30) again to ESCAPE ESCAPE ... \n");
                }
                else
                {
                    printf("\n Congratulations!! You Won \n. You ESCAPED  in %d times \n", count);
                }
                count++;
                border();
                system("COLOR 40");
            } while (n != num2);
            if (count > 25)
            {
                system("COLOR 50");
                printf("\n Even you escaped !! You lost our heart as you have taken +25 chances \n");
                printf("\n Take Care !! Have a nice day   \n");
                border();
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            else
            {
                system("COLOR 50");
                printf(" You Won !! We have a GIFT for you ....  ");
                border();
                Sleep(800);
                Heart();
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            break;

        case 'C':

            srand(time(0));

            int num3 = rand() % 50 + 1;

            do
            {
                system("COLOR 70");
                printf("Choose carefully the right Path from 1 to 50 !! otherwise u will remain LOCKED :");
                scanf("%d", &n);

                if (n > num3)
                {
                    printf("\n Oops!! You are going too fast.You CROSSED the WAY. \n");
                }
                else
                {
                    if (n < num3)
                    {
                        printf("\n Oops!! You are going too Slow.You didn't even PASSED the WAY \n");
                    }
                    else
                    {
                        printf("\n Congratulations!! You Won \n. You ESCAPED in %d times \n", count);
                    }
                }
                count++;
                border();
                system("COLOR 80");
            } while (n != num3);
            if (count > 35)
            {
                system("COLOR 90");
                printf("\n Even you escaped !! You lost our heart as you have taken +35 chances \n");
                printf("\n Take Care !! Have a nice day   \n");
                border();
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            else
            {
                system("COLOR 90");
                printf("  You Won !! We have a GIFT for you ....   ");
                border();
                Heart();
                Sleep(1000);
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            break;

        case 'D':
            srand(time(0));

            int num4 = rand() % 100 + 1;

            do
            {
                system("COLOR 70");
                printf("Choose carefully the right Path from 1 to 100 !! otherwise u will remain LOCKED :");
                scanf("%d", &n);

                if (n > num4)
                {
                    printf("\n  Oops!! You are going too fast.You CROSSED the WAY. \n");
                }
                else
                {
                    if (n < num4)
                    {
                        printf("\n Oops!! You are going too Slow.You didn't even PASSED it...\n");
                    }
                    else
                    {
                        printf("\n Congratulations!! You Won \n. You ESCAPED  in %d times \n", count);
                    }
                }
                count++;
                border();
                system("COLOR 80");
            } while (n != num4);
            if (count > 35)
            {
                system("COLOR 90");
                printf("\n Even you escaped !! You lost our heart as you have taken +35 chances \n");
                printf("\n Take Care !! Have a nice day   \n");
                border();
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            else
            {
                system("COLOR 90");
                printf(" You Won !! We have a GIFT for you .... ");
                border();
                Heart();
                Sleep(800);
                printf("\n Press Any key to TERMINATE the ESCAPE ");
                getch();
                system("COLOR 07");
            }
            break;
        }
    }
    else
        printf("\n Authorisation revoked \n");
}
