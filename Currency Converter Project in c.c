#include<stdio.h>
#include<strings.h>
#include<windows.h>
int i;
Start();
End();
CASE1();
CASE2();
CASE3();
CASE4();
CASE5();
CASE6();
CASE7();
CASE8();
CASE9();
CASE10();
About();

void gotoxy(int x,int y)
{
    COORD CRD;
    CRD.X=x;
    CRD.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);


}

void setcolor (int ForgC)
{
     WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

//Main function Start______________________________________________

void main ()
{


    char option;
    int op;

    About();

    Start();
    do
    {
        //  Here is all code______________

        system("cls");
        fflush(stdin);
//Patern Print______________________________________
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________

       setcolor(35);
       gotoxy(51,5);  printf("CURRENCY CONVERTER");
       setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY FROM WHICH YOU WANT TO CONVERT");
       setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Singapore Dollar       (SGD)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Malaysian Ringgit      (MYR)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Japanese Yen           (JPY)");
       gotoxy(25,15); printf("4.  British Pound        (GBP)     9 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,16); printf("5.  Australian Dollar    (AUD)     10. New Zealand Dollar     (NZD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
        fflush(stdin);
        op=0;
        setcolor(37);
        scanf("%d",&op);
        setcolor(39);


        switch (op)
        {

        case 1 :

            CASE1();


            break;

        case 2 :

            CASE2();



            break;
        case 3 :

            CASE3();


            break;
        case 4 :

            CASE4();


            break;
        case 5 :

            CASE5();


            break;
        case 6 :

            CASE6();


            break;
        case 7 :

            CASE7();


            break;
        case 8 :

            CASE8();


            break;
        case 9 :

            CASE9();


            break;
        case 10 :

            CASE10();

            break;





        default:



            system("cls");
    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");;

        }









        //  Here is end of all code______________

WantTOContinue:

        {



    gotoxy(40,23);
    printf("%c",201);
    gotoxy(41,23);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,27);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,23);
    printf("%c",187);
    gotoxy(40,24);
    printf("%c",186);
    gotoxy(40,25);
    printf("%c",186);
    gotoxy(40,26);
    printf("%c",186);
    gotoxy(90,24);
    printf("%c",186);
    gotoxy(90,25);
    printf("%c",186);
    gotoxy(90,26);
    printf("%c",186);
    gotoxy(40,27);
    printf("%c",200);
    gotoxy(90,27);
    printf("%c",188);
    gotoxy(58,25);
    printf("Continue y/n?");
    fflush(stdin);

            option=getch();

    fflush(stdin);

        }




    }

    while(option=='y' || option=='Y');

    if(option!='Y' || option!='y')
    {

        if(option=='n' || option=='N')
            End();


        else
        {

            system("cls");
    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

            goto      WantTOContinue;


        }
    }





}

//Main Function End__________________________________________________


// End FUNCTION_________________
End()
{




    system("cls");



    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  PLEASE WAIT . . .\n\n");
    printf("\t\t\t");
    for(int loading=0; loading<70; loading++)
    {

        Sleep(30);
        printf("%c",219);


    }
    system("cls");

       gotoxy(35,10);
   printf("%c",201);
   gotoxy(36,10);
   for(i=1;i<40;i++)
   printf("%c",205);
   gotoxy(75,10);
   printf("%c",187);

   gotoxy(35,11);
   printf("%c",186);
    gotoxy(35,12);
   printf("%c",186);
    gotoxy(35,13);
   printf("%c",186);

    gotoxy(75,11);
   printf("%c",186);
    gotoxy(75,12);
   printf("%c",186);
    gotoxy(75,13);
   printf("%c",186);

   gotoxy(35,14);
   printf("%c",200);
   gotoxy(36,14);
   for(i=1;i<40;i++)
   printf("%c",205);
   gotoxy(75,14);
   printf("%c",188);



    gotoxy(40,12);
   printf("THANK YOU FOR USING OUR SERVICE");

 gotoxy(0,0);
    getch();

}
//Start Function _________________________

Start()
{


    system("cls");



    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPLEASE WAIT OUR SYSTEM IS LOADING . . .\n\n");
    printf("\t\t\t");
    for(int loading=0; loading<70; loading++)
    {

        Sleep(40);
        printf("%c",219);


    }
    system("cls");

}
// CASE1 FUNCTION _________________________________________
CASE1()
{
    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
        gotoxy(11,4);
               setcolor(39);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
       setcolor(35);
  gotoxy(51,5);  printf("CURRENCY CONVERTER");
         setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
        setcolor(39);
       gotoxy(25,12); printf("1.  India Rupee          (INR)     6 . Malaysian Ringgit      (MYR)");
       gotoxy(25,13); printf("2.  US. Dollar           (USD)     7 . Japanese Yen           (JPY)");
       gotoxy(25,14); printf("3.  British Pound        (GBP)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  Australian Dollar    (AUD)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Singapore Dollar     (SGD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
              setcolor(37);

        scanf("%d",&n);
        system("cls");
               setcolor(39);


    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.82;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf INR\n",a,ans);


        fclose(fm);



    }
    else if (n==2)
    {


    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.012;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf USD\n",a,ans);


        fclose(fm);




    }
    else if (n==3)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.0096;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf GBP\n",a,ans);


        fclose(fm);




    }
    else if (n==4)
    {


    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.017;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf AUD\n",a,ans);


        fclose(fm);




    }
    else if (n==5)
    {
        gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.016;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf SGD\n",a,ans);


        fclose(fm);


    }
    else if (n==6)
    {

    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.049;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf MYR\n",a,ans);


        fclose(fm);



    }
    else if (n==7)
    {

        gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.29;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf JPY\n",a,ans);


        fclose(fm);


    }
    else if (n==8)
    {


        gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.081;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf CNY\n",a,ans);


        fclose(fm);


    }
    else if (n==9)
    {

        gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN BDT :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.018;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf BDT = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf BDT = %.3lf NZD\n",a,ans);


        fclose(fm);


    }

    else
    {


    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");



    }





}
// CASE2 FUNCTION _________________________________________
CASE2()
{


 int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
       setcolor(39);
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
       setcolor(35);

  gotoxy(51,5);  printf("CURRENCY CONVERTER");
         setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
              setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Malaysian Ringgit      (MYR)");
       gotoxy(25,13); printf("2.  US. Dollar           (USD)     7 . Japanese Yen           (JPY)");
       gotoxy(25,14); printf("3.  British Pound        (GBP)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  Australian Dollar    (AUD)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Singapore Dollar     (SGD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
              setcolor(37);

        scanf("%d",&n);
        system("cls");




           setcolor(39);


    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.23;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.015;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf USD\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.012;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.021;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.020;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.060;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.58;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf JPY\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.10;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN INR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.022;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf INR = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf INR = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");




       }





}
// CASE3 FUNCTION _________________________________________

CASE3()
{



    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
               setcolor(39);
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
       setcolor(35);
  gotoxy(51,5);  printf("CURRENCY CONVERTER");
         setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
              setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Malaysian Ringgit      (MYR)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Japanese Yen           (JPY)");
       gotoxy(25,14); printf("3.  British Pound        (GBP)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  Australian Dollar    (AUD)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Singapore Dollar     (SGD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
              setcolor(37);

        scanf("%d",&n);
        system("cls");




       setcolor(39);


    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*84.46;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*68.82;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.82;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.45;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.37;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*4.13;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*108.62;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf JPY\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*6.88;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN USD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.52;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf USD = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf USD = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");




       }








}
// CASE4 FUNCTION _________________________________________

CASE4()
{




    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
               setcolor(39);
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
       setcolor(35);

  gotoxy(51,5);  printf("CURRENCY CONVERTER");
         setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
              setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Malaysian Ringgit      (MYR)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Japanese Yen           (JPY)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  Australian Dollar    (AUD)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Singapore Dollar     (SGD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
              setcolor(37);

        scanf("%d",&n);
        system("cls");





       setcolor(39);

    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*102.91;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*83.87;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.22;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf USD\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.77;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.67;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*5.03;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*132.33;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf JPY\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*8.39;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN GBP :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.85;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf GBP = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf GBP = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

       }




}
// CASE5 FUNCTION _________________________________________
CASE5()
{




    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
       setcolor(35);

  gotoxy(51,5);  printf("CURRENCY CONVERTER");
         setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
              setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Malaysian Ringgit      (MYR)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Japanese Yen           (JPY)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  British Pound        (GBP)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Singapore Dollar     (SGD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
              setcolor(37);

        scanf("%d",&n);
        system("cls");






       setcolor(39);
    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*58.23;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*47.42;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.69;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf USD\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.57;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.94;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*2.84;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*74.83;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf JPY\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*4.74;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN AUD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.04;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf AUD = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf AUD = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

       }








}
// CASE6 FUNCTION _________________________________________
CASE6()
{




    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
setcolor(35);

  gotoxy(51,5);  printf("CURRENCY CONVERTER");
  setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
       setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Malaysian Ringgit      (MYR)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Japanese Yen           (JPY)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  British Pound        (GBP)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Australian Dollar    (AUD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
       setcolor(37);

        scanf("%d",&n);
        system("cls");



setcolor(39);



    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*61.72;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*50.30;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.73;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf USD\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.60;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.06;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*3.01;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*79.37;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf JPY\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*5.03;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN SGD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.11;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf SGD = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf SGD = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

       }








}
// CASE7 FUNCTION _________________________________________
CASE7()
{





    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
setcolor(35);

  gotoxy(51,5);  printf("CURRENCY CONVERTER");
  setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
       setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Singapore Dollar       (SGD)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Japanese Yen           (JPY)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  British Pound        (GBP)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Australian Dollar    (AUD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
       setcolor(37);

        scanf("%d",&n);
        system("cls");





setcolor(39);

    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*20.47;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*16.68;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.24;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf USD\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.20;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.35;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.33;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*26.33;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf JPY\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*1.67;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN MYR :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.37;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf MYR = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf MYR = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

       }







}
// CASE8 FUNCTION _________________________________________
CASE8()
{






    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
setcolor(35);

  gotoxy(51,5);  printf("CURRENCY CONVERTER");
  setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
       setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Singapore Dollar       (SGD)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Malaysian Ringgit      (MYR)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,15); printf("4.  British Pound        (GBP)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Australian Dollar    (AUD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
       setcolor(37);

        scanf("%d",&n);
        system("cls");





setcolor(39);

    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.78;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.63;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.0092;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf USD\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.0075;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.013;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.013;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.038;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.063;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN JPY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.014;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf JPY = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf JPY = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

       }





}
// CASE9 FUNCTION _________________________________________
CASE9()
{





    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________

setcolor(35);
  gotoxy(51,5);  printf("CURRENCY CONVERTER");
  setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
       setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Singapore Dollar       (SGD)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Malaysian Ringgit      (MYR)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Japanese Yen           (JPY)");
       gotoxy(25,15); printf("4.  British Pound        (GBP)     9 . New Zealand Dollar     (NZD)");
       gotoxy(25,16); printf("5.  Australian Dollar    (AUD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
       setcolor(37);

        scanf("%d",&n);
        system("cls");





setcolor(39);

    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*12.27;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*10.00;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.15;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf USD\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.12;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.21;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.20;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.60;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*15.78;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf JPY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN CNY :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.22;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf CNY = %.3lf NZD",a,ans);


        fprintf(fm,"%.3lf CNY = %.3lf NZD\n",a,ans);


        fclose(fm);


       }

     else {


             gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

       }





}
// CASE10 FUNCTION _________________________________________
CASE10()
{




    int n;
    double a,ans;
   system("cls");
        fflush(stdin);
         FILE *fm;
        fm = fopen("result.txt","ab+");
        //Patern Print______________________________________
        gotoxy(11,4);
    printf("%c",201);
    gotoxy(12,4);

    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(111,4);
    printf("%c",187);

    gotoxy(12,6);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,8);
    for(i=1; i<100; i++)
        printf("%c",205);

    gotoxy(12,20);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(12,22);
    for(i=1; i<100; i++)
        printf("%c",205);
    gotoxy(11,5);
    printf("%c",186);
    gotoxy(11,6);
    printf("%c",204);
    gotoxy(11,7);
    printf("%c",186);
    gotoxy(11,8);
    printf("%c",204);
    gotoxy(11,9);
    printf("%c",186);
    gotoxy(11,10);
    printf("%c",186);
    gotoxy(11,11);
    printf("%c",186);
    gotoxy(11,12);
    printf("%c",186);
    gotoxy(11,13);
    printf("%c",186);
    gotoxy(11,14);
    printf("%c",186);
    gotoxy(11,15);
    printf("%c",186);
    gotoxy(11,16);
    printf("%c",186);
    gotoxy(11,17);
    printf("%c",186);
    gotoxy(11,18);
    printf("%c",186);
    gotoxy(11,19);
    printf("%c",186);
    gotoxy(11,20);
    printf("%c",204);
    gotoxy(11,21);
    printf("%c",186);
    gotoxy(11,22);
    printf("%c",200);
    gotoxy(111,5);
    printf("%c",186);
    gotoxy(111,6);
    printf("%c",185);
    gotoxy(111,7);
    printf("%c",186);
    gotoxy(111,8);
    printf("%c",185);
    gotoxy(111,9);
    printf("%c",186);
    gotoxy(111,10);
    printf("%c",186);
    gotoxy(111,11);
    printf("%c",186);
    gotoxy(111,12);
    printf("%c",186);
    gotoxy(111,13);
    printf("%c",186);
    gotoxy(111,14);
    printf("%c",186);
    gotoxy(111,15);
    printf("%c",186);
    gotoxy(111,16);
    printf("%c",186);
    gotoxy(111,17);
    printf("%c",186);
    gotoxy(111,18);
    printf("%c",186);
    gotoxy(111,19);
    printf("%c",186);
    gotoxy(111,20);
    printf("%c",185);
    gotoxy(111,21);
    printf("%c",186);
    gotoxy(111,22);
    printf("%c",188);
//_______________________________
       setcolor(35);
       gotoxy(51,5);  printf("CURRENCY CONVERTER");
       setcolor(36);
       gotoxy(34,7);  printf("SELECT A CURRENCY  IN  WHICH YOU WANT TO CONVERT");
       setcolor(39);
       gotoxy(25,12); printf("1.  Bangladeshi Taka     (BDT)     6 . Singapore Dollar       (SGD)");
       gotoxy(25,13); printf("2.  India Rupee          (INR)     7 . Malaysian Ringgit      (MYR)");
       gotoxy(25,14); printf("3.  US. Dollar           (USD)     8 . Japanese Yen           (JPY)");
       gotoxy(25,15); printf("4.  British Pound        (GBP)     9 . Chinese Yuan Renminbi  (CNY)");
       gotoxy(25,16); printf("5.  Australian Dollar    (AUD)");

       gotoxy(48,21);  printf("Enter Your Choice:");
       fflush(stdin);
       setcolor(37);

        scanf("%d",&n);
        system("cls");





setcolor(39);

    if (n==1)
    {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*55.74;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf BDT",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf BDT\n",a,ans);


        fclose(fm);



    }

    else if (n==2)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*45.43;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf INR",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf INR\n",a,ans);


        fclose(fm);

      }

    else if (n==3)
      {




    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.66;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf USD",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf USD\n",a,ans);


        fclose(fm);


      }

   else if (n==4)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.54;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf GBP",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf GBP\n",a,ans);


        fclose(fm);


      }

   else if (n==5)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.96;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf AUD",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf AUD\n",a,ans);


        fclose(fm);


      }

   else if (n==6)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*0.90;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf SGD",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf SGD\n",a,ans);


        fclose(fm);


      }

   else if (n==7)
      {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*2.72;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf MYR",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf MYR\n",a,ans);


        fclose(fm);


      }

    else if (n==8)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*71.65;

       gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
     gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf JPY",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf JPY\n",a,ans);


        fclose(fm);


       }

    else if (n==9)
       {



    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(43,10);
    printf("ENTER AMOUNT IN NZD :");
    gotoxy(64,10);

        scanf("%lf",&a);

        ans=a*4.54;

    gotoxy(40,12);
    printf("%c",204);
    gotoxy(90,12);
    printf("%c",185);
    gotoxy(40,13);
    printf("%c",186);
    gotoxy(40,14);
    printf("%c",186);
    gotoxy(40,15);
    printf("%c",186);
    gotoxy(90,13);
    printf("%c",186);
    gotoxy(90,14);
    printf("%c",186);
    gotoxy(90,15);
    printf("%c",186);
    gotoxy(40,16);
    printf("%c",200);
    gotoxy(90,16);
    printf("%c",188);
    gotoxy(41,16);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(43,14);
    printf(" %.3lf NZD = %.3lf CNY",a,ans);


        fprintf(fm,"%.3lf NZD = %.3lf CNY\n",a,ans);


        fclose(fm);


       }

     else {


    gotoxy(40,8);
    printf("%c",201);
    gotoxy(41,8);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(41,12);
    for(i=1; i<50; i++)
    printf("%c",205);
    gotoxy(90,8);
    printf("%c",187);
    gotoxy(40,9);
    printf("%c",186);
    gotoxy(40,10);
    printf("%c",186);
    gotoxy(40,11);
    printf("%c",186);
    gotoxy(90,9);
    printf("%c",186);
    gotoxy(90,10);
    printf("%c",186);
    gotoxy(90,11);
    printf("%c",186);
    gotoxy(40,12);
    printf("%c",200);
    gotoxy(90,12);
    printf("%c",188);
    gotoxy(58,10);
    printf("Wrong Input");
    gotoxy(0,0);
    Sleep(1500);
    system("cls");

       }
}
//____________________________________________________________


About()
{


 gotoxy(10,3);
    printf("%c",201);
    gotoxy(11,3);
    for(i=1; i<100; i++)
    printf("%c",205);
    gotoxy(10,24);
    for(i=1; i<=100; i++)
    printf("%c",205);


    gotoxy(110,3);
    printf("%c",187);

    for(i=0; i<=20; i++)
    {
        gotoxy(10,4+i);
        printf("%c",186);
    }

     for(i=0; i<=20; i++)
    {
        gotoxy(110,4+i);
        printf("%c",186);
    }




    gotoxy(10,24);
    printf("%c",200);
    gotoxy(110,24);
    printf("%c",188);


    gotoxy(45,5);
    printf("This Project Is Created BY");

     gotoxy(15,8);
    printf("Shazzad Hossen");
     gotoxy(15,9);
    printf("B.Sc in Computer Science & Engineering");
     gotoxy(15,10);
    printf("Daffodil International University");

     gotoxy(15,11);
    printf("Facebook: FB.com/sboy.showrav");
     gotoxy(15,12);
    printf("Email : sa.sboy3042@gmail.com");
    //-------------------------------------------------------

     gotoxy(60,8);
    printf("Abu Taher");
     gotoxy(60,9);
    printf("B.Sc in Computer Science & Engineering");
     gotoxy(60,10);
    printf("Daffodil International University");

     gotoxy(60,11);
    printf("Facebook:");
     gotoxy(60,12);
    printf("Email : ");
    //-------------------------------------------------------
     gotoxy(15,15);
    printf("Md. Shohidul Islam");
     gotoxy(15,16);
    printf("B.Sc in Computer Science & Engineering");
     gotoxy(15,17);
    printf("Daffodil International University");

     gotoxy(15,18);
    printf("Facebook:");
     gotoxy(15,19);
    printf("Email : ");
    //-------------------------------------------------------
     gotoxy(60,15);
    printf("Md. Atik Bhuiyan");
     gotoxy(60,16);
    printf("B.Sc in Computer Science & Engineering");
     gotoxy(60,17);
    printf("Daffodil International University");

     gotoxy(60,18);
    printf("Facebook:");
     gotoxy(60,19);
    printf("Email : ");
    //-----------------------------------------------



   gotoxy(40,22);
   setcolor(36);
    printf("Press Any Key to Continue......");
    setcolor(39);







getch();
    return 0;
}
