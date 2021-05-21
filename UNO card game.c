#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{

    int colours[20];
    int numbers[20];
    int handsize,startnum,startcol,play;
    srand(time(0));
    printf("Hello world!\n");
    printf("Welcome to Uno\n");
    printf("Please wait while the deck is dealt");
    sleep(1);
    for(int p=0;p<1;p++)
    {
        printf(".");
        sleep(1);
    }
    system("cls");
    for(int i=0;i<8;i++) // inititalising the player's hand
    {
        numbers[i]=((rand()%9)+1);
        colours[i]=((rand()%4)+1);
        handsize = 8;
    }
    startnum=((rand()%9)+1);// initializing the top of deck card
    startcol=((rand()%4)+1);
    while(sizeof(numbers)!=0)
    {
        printf("Your deck :\n");
        for(int j=0;j<handsize;j++) //Print the player's hand
        {
            printf("%d.",j);
            if(colours[j]==1)
            {
                printf("<Red");
            }
            if(colours[j]==2)
            {
                printf("<Green");
            }
            if(colours[j]==3)
            {
                printf("<Yellow");
            }
            if(colours[j]==4)
            {
                printf("<Blue");
            }
            printf(" %d> ",numbers[j]);
        }
        printf(" %d.Draw new card \n\n",handsize);

        printf("The card in play is :\n");
            if(startcol==1)
            {
                printf("<Red");
            }
            if(startcol==2)
            {
                printf("<Green");
            }
            if(startcol==3)
            {
                printf("<Yellow");
            }
            if(startcol==4)
            {
                printf("<Blue");
            }
            printf(" %d> ",startnum);
        printf("\n\nEnter the number corresponding to the card u wanna play\n");
        scanf("%d",&play);

        if(numbers[play]==startnum || colours[play]==startcol)
        {
            printf("Playing card\n");
            startcol=colours[play];
            startnum=numbers[play];

            for(int c=(play);c<(handsize);c++)
            {
                numbers[c]=numbers[c+1];
                colours[c]=colours[c+1];

            }
           // numbers[handsize]=NULL;
           // colours[handsize]=NULL;
            handsize--;
            for(int p=0;p<1;p++)
                {
                    printf(".");
                    sleep(1);
                }
            system("cls");
            printf("Card played successfully\n");

        }
        else
        {
            if(play==handsize)
            {
                printf("Drawing new card");
                handsize++;
                numbers[handsize-1]=((rand()%9)+1);
                colours[handsize-1]=((rand()%4)+1);
                for(int p=0;p<1;p++)
                {
                    printf(".");
                    sleep(1);
                }
                system("cls");
                printf("New card drawn successfully \n");
            }
            else
            {
                printf("YOU CAN'T PLAY THAT CARD\n Retrying");
                for(int p=0;p<1;p++)
                {
                    printf(".");
                    sleep(1);
                }
                system("cls");

            }
        }
    }

    printf("\n\n\n\n");
    return 0;
}
