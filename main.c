#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char name[500][20];
static int roll_no[500];
static int Class[500];
static int stream[500];


int main()
{
    system("color 0A");
    printf("\t\t_____*__*__*__*_Welcome To The student's portal_*__*__*__*_____\n\n");

    portal();
    return 0;
}

void portal()
{
    int choice;

    Menu:

    printf("\n\nChoose an option to continue\n");
    printf("1.Entry\n2.Search\n3.Menu\n0.Exit\n\n");

    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        Entry();
        break;
    case 2:
        Search();
        break;
    case 3:
        goto Menu;
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("\nEnter A Valid Choice\n\n");
        goto Menu;
        break;
    }

}

void Entry()
{

    int i,dummyi;

    printf("\nTo get a successful registration, Fill these details carefull\n\n");

    label:

    printf("Enter your name\n");

    for(i=0;i<500;i++)
    {
        if(strcmp(name[i],name[500])==0)
        {
            //printf("%d\n",i);
            dummyi=i;
            break;
        }
        else
        {
            if(i==499)
            {
                printf("Vacancy over");
                break;
            }
        }
    }
    scanf("%s",name[dummyi]);

    //printf("%s",name[dummyi]);

    printf("\nEnter your roll no.\n");
    scanf("%d",&roll_no[dummyi]);

    printf("\nEnter your class\n");
    scanf("%d",&Class[dummyi]);

    printf("\nSelect your stream\n");
    printf("1.Humanities\n2.Commerce\n3.Sceince\n");
    scanf("%d",&stream[dummyi]);

    switch(stream[dummyi])
    {
    case 1:
        printf("\n\nUser registered with\nName = %s\nRoll No. = %d\nClass = %d\nStream = Humanities\n\n\n",name[dummyi],roll_no[dummyi],Class[dummyi]);
        break;
    case 2:
        printf("\n\nUser registered with\nName = %s\nRoll No. = %d\nClass = %d\nStream = Commerce\n\n\n",name[dummyi],roll_no[dummyi],Class[dummyi]);
        break;
    case 3:
        printf("\n\nUser registered with\nName = %s\nRoll No. = %d\nClass = %d\nStream = Science\n\n\n",name[dummyi],roll_no[dummyi],Class[dummyi]);
        break;
    default:
        printf("\n\nEnter A Valid Choice\n\n\n");
        goto label;
        break;
    }

    portal();
}

void Search()
{
    int ID_search,i;
    char name_search[20];
    char stream_search[10];

    printf("\nTo search your ID you need to fill these details\n\n");
    printf("Enter Your Roll No.\n");
    scanf("%d",&ID_search);
    for(i=0;i<500;i++)
    {
        int dummyi = roll_no[i];
        if(ID_search == dummyi)
        {
            printf("\n\nEnter Your Name\n");
            scanf("%s",&name_search);
            if(strcmp(name[i],name_search)==0)
            {
                switch(stream[i])
                {
                case 1:
                    stream_search[0]='H';
                    stream_search[1]='u';
                    stream_search[2]='m';
                    stream_search[3]='a';
                    stream_search[4]='n';
                    stream_search[5]='i';
                    stream_search[6]='t';
                    stream_search[7]='i';
                    stream_search[8]='e';
                    stream_search[9]='s';
                    stream_search[10]=' ';
                    break;
                case 2:
                    stream_search[0]='C';
                    stream_search[1]='o';
                    stream_search[2]='m';
                    stream_search[3]='m';
                    stream_search[4]='e';
                    stream_search[5]='r';
                    stream_search[6]='c';
                    stream_search[7]='e';
                    stream_search[8]=' ';
                    stream_search[9]=' ';
                    stream_search[10]=' ';
                    break;
                case 3:
                    stream_search[0]='S';
                    stream_search[1]='c';
                    stream_search[2]='i';
                    stream_search[3]='e';
                    stream_search[4]='n';
                    stream_search[5]='c';
                    stream_search[6]='e';
                    stream_search[7]=' ';
                    stream_search[8]=' ';
                    stream_search[9]=' ';
                    stream_search[10]=' ';
                    break;
                }
                printf("\n\nUser Found\n");
                printf("Name = %s\nRoll No. = %d\nClass = %d\nStream = %s\n\n",name[i],roll_no[i],Class[i],stream_search);
                search_logic(i);
                break;
            }
            else
            {
                if(i==499)
                {
                    printf("User Not Found");
                    portal();
                    break;
                }

            }
        }
        else
        {
            if(i==499)
            {
                printf("User Not Found");
                portal();
                break;
            }

        }
    }
}

void search_logic(int i)
{
    int choice;

    printf("\n\nChoose an option to continue\n");

    again:

    printf("1.Update\n2.Delete\n3.Menu\n0.Exit\n\n");

    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        Update(i);
        break;
    case 2:
        Delete(i);
        break;
    case 3:
        portal();
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("\nEnter A Valid Choice\n\n");
        goto again;
        break;
    }
}

void Update(int i)
{

}

void Delete(int i)
{

}
