#include <stdio.h>
#include <stdlib.h>
void output();
int main()
{



    char s[10];
    int a,b,c,d,e;
    for(int i=0;i<10;i++)
    {
        s[i]=' ';
    }

    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
    printf("Now input the number corresponding to the cell which you want to play\n\n  1 2 3\n  4 5 6\n  7 8 9 \n\n");
    scanf("%d", &a);
    s[a]='X';
    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);

    if(a==1)
    {
        s[4]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n\n your turn");
        scanf("%d", &b);
        s[b]='X';
        if(b==6)
        {
            s[8]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\nYour Turn\n");
            scanf("%d", &c);
            s[c]='X';
            if(c==2)
            {
                s[3]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\nYour Turn\n");
                scanf("%d", &d);
                s[d]='X';
                if(d==7)
                {
                    s[9]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("\n THE GAME HAS ENDED IN A DRAW\n\n\n");
                }
                else
                {
                    s[7]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("\n\n GAME OVER\n YOU  LOSE");
                }

            }
            else
            {
                s[2]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU LOSE");
            }
        }
        else
        {

            s[6]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");
        }
    }
    if(a==2)
    {
        s[1]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n YOUR TURN \n");
        scanf("%d", &b);
        s[b]='X';
        if(b==9)
        {
            s[7]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\nYour Turn\n");
            scanf("%d", &c);
            s[c]='X';
            if(c==3)
            {
                s[4]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");
            }
            else
            {
                s[3]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");

            }
        }
        else
        {
            s[9]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");
        }

    }
    if(a==3)
    {
        s[2]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n YOUR TURN \n");
        scanf("%d", &b);
        s[b]='X';
        if(b==8)
        {
            s[9]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n YOUR TURN \n");
            scanf("%d", &c);
            s[c]='X';
            if(c==1)
            {
                s[4]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n YOUR TURN \n");
                scanf("%d", &d);
                s[d]='X';
                if(d==6)
                {
                    s[7]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("The Game Has Ended in a Draw\n\n");

                }
                else
                {
                    s[6]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("\n\n GAME OVER \n YOU  LOSE");
                }

            }
            else
            {
                s[1]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");
            }

        }
        else
        {
            s[8]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");

        }


    }
    if(a==4)
    {
        s[7]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n YOUR TURN \n");
        scanf("%d", &b);
        s[b]='X';
        if(b==3)
        {
            s[9]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\nYour Turn\n");
            scanf("%d", &c);
            s[c]='X';
            if(c==1)
            {
                s[8]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");
            }
            else
            {
                s[1]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");

            }
        }
        else
        {
            s[3]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");
        }

    }
    if(a==6)
    {
        s[3]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n YOUR TURN \n");
        scanf("%d", &b);
        s[b]='X';
        if(b==7)
        {
            s[1]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\nYour Turn\n");
            scanf("%d", &c);
            s[c]='X';
            if(c==9)
            {
                s[2]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");
            }
            else
            {
                s[9]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");

            }
        }
        else
        {
            s[7]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");
        }

    }

    if(a==7)
    {
        s[8]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n YOUR TURN \n");
        scanf("%d", &b);
        s[b]='X';
        if(b==2)
        {
            s[1]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n YOUR TURN \n");
            scanf("%d", &c);
            s[c]='X';
            if(c==9)
            {
                s[6]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n YOUR TURN \n");
                scanf("%d", &d);
                s[d]='X';
                if(d==4)
                {
                    s[3]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("The Game Has Ended in a Draw\n\n");

                }
                else
                {
                    s[4]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("\n\n GAME OVER \n YOU  LOSE");
                }

            }
            else
            {
                s[9]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");
            }

        }
        else
        {
            s[2]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");

        }


    }
    if(a==8)
    {
        s[9]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n YOUR TURN \n");
        scanf("%d", &b);
        s[b]='X';
        if(b==1)
        {
            s[3]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\nYour Turn\n");
            scanf("%d", &c);
            s[c]='X';
            if(c==7)
            {
                s[6]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");
            }
            else
            {
                s[7]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");

            }
        }
        else
        {
            s[1]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");
        }

    }
    if(a==9)
    {
        s[6]='O';
        output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
        printf("\n YOUR TURN \n");
        scanf("%d", &b);
        s[b]='X';
        if(b==4)
        {
            s[7]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n YOUR TURN \n");
            scanf("%d", &c);
            s[c]='X';
            if(c==3)
            {
                s[2]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n YOUR TURN \n");
                scanf("%d", &d);
                s[d]='X';
                if(d==8)
                {
                    s[1]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("The Game Has Ended in a Draw\n\n");

                }
                else
                {
                    s[8]='O';
                    output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                    printf("\n\n GAME OVER \n YOU  LOSE");
                }

            }
            else
            {
                s[3]='O';
                output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
                printf("\n\n GAME OVER \n YOU  LOSE");
            }

        }
        else
        {
            s[4]='O';
            output(s[1],s[2],s[3],s[4],s[6],s[7],s[8],s[9]);
            printf("\n\n GAME OVER \n YOU  LOSE");

        }


    }
    return 0;
}
void output(a,b,c,d,e,f,g,h)
{
    system("cls");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",a,b,c);
    printf("     |     |     \n");
    printf("-----------------\n");
    printf("     |     |     \n");
    printf("  %c  |  O  |  %c  \n",d,e);
    printf("     |     |     \n");
    printf("-----------------\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",f,g,h);
    printf("     |     |     \n\n\n");

};
