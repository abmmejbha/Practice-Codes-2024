#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

void giveyourvote(int userIndex);
void votecount();
void leadingthewholeprocess();
void declarewinner();
void saveVoteCounts();
void loadVoteCounts();

#define PARTICIPANT1 "person1"
#define PARTICIPANT2 "person2"
#define PARTICIPANT3 "person3"
#define PARTICIPANT4 "person4"
#define DATA_FILE "voting_data.txt"

int votecount1 = 0, votecount2 = 0, votecount3 = 0, votecount4 = 0, unnecessaryvote = 0;
int hasVoted[30] = {0};


int main()
{
    loadVoteCounts();
    int choice;

    do
    {
        //system("cls");
        printf("\n\n *** Welcome to the Class Representative Election of Computer Engineering Department Section-11 ***\n");
        printf("\n 1. Give your vote according to your preference.");
        printf("\n 2. Vote Count.");
        printf("\n 3. Show us who is the leading one.");
        printf("\n 4. Declare Winner.");
        printf("\n 0. Exit\n");
        printf("Choose an option to ensure your job: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            char d[20];
            printf("\nEnter username: ");
            scanf("%s", d);
            int password;
            printf("\nEnter your password: ");
            scanf("%d", &password);
            if ((strcmp(d, "Bashar") == 0) && password == 448 && !hasVoted[0])
            {
                giveyourvote(0);
            }
            else if ((strcmp(d, "Ela") == 0) && password == 447 && !hasVoted[1])
            {
                giveyourvote(1);
            }
            else if ((strcmp(d, "Beeva") == 0) && password == 413 && !hasVoted[2])
            {
                giveyourvote(2);
            }
            else if ((strcmp(d, "Mitu") == 0) && password == 408 && !hasVoted[3])
            {
                giveyourvote(3);
            }
            else if ((strcmp(d, "Dinar") == 0) && password == 414 && !hasVoted[4])
            {
                giveyourvote(4);
            }
            else if ((strcmp(d, "Shakib") == 0) && password == 417 && !hasVoted[5])
            {
                giveyourvote(5);
            }
            else if ((strcmp(d, "Yeamin") == 0) && password == 410 && !hasVoted[6])
            {
                giveyourvote(6);
            }
            else if ((strcmp(d, "Masum") == 0) && password == 422 && !hasVoted[7])
            {
                giveyourvote(7);
            }
            else if ((strcmp(d, "Mahin") == 0) && password == 421 && !hasVoted[8])
            {
                giveyourvote(8);
            }
            else if ((strcmp(d, "Fahim") == 0) && password == 444 && !hasVoted[9])
            {
                giveyourvote(9);
            }
            else if ((strcmp(d, "Abir") == 0) && password == 469 && !hasVoted[10])
            {
                giveyourvote(10);
            }
            else if ((strcmp(d, "Jinan") == 0) && password == 577 && !hasVoted[11])
            {
                giveyourvote(11);
            }
            else if ((strcmp(d, "Hasib") == 0) && password == 169 && !hasVoted[12])
            {
                giveyourvote(12);
            }
            else if ((strcmp(d, "Moin") == 0) && password == 800 && !hasVoted[13])
            {
                giveyourvote(13);
            }
            else if ((strcmp(d, "Aisha") == 0) && password == 234 && !hasVoted[14])
            {
                giveyourvote(14);
            }
            else if ((strcmp(d, "Maisha") == 0) && password == 321 && !hasVoted[15])
            {
                giveyourvote(15);
            }
            else if ((strcmp(d, "Sadia") == 0) && password == 435 && !hasVoted[16])
            {
                giveyourvote(16);
            }
            else if ((strcmp(d, "Liza") == 0) && password == 743 && !hasVoted[17])
            {
                giveyourvote(17);
            }
            else if ((strcmp(d, "Maliha") == 0) && password == 888 && !hasVoted[18])
            {
                giveyourvote(18);
            }
            else if ((strcmp(d, "Samia") == 0) && password == 509 && !hasVoted[19])
            {
                giveyourvote(19);
            }
            else if ((strcmp(d, "Sumaiya") == 0) && password == 289 && !hasVoted[20])
            {
                giveyourvote(20);
            }
            else if ((strcmp(d, "Mim") == 0) && password == 712 && !hasVoted[21])
            {
                giveyourvote(21);
            }
            else if ((strcmp(d, "Saba") == 0) && password == 653 && !hasVoted[22])
            {
                giveyourvote(22);
            }
            else if ((strcmp(d, "Mithila") == 0) && password == 845 && !hasVoted[23])
            {
                giveyourvote(23);
            }
            else if ((strcmp(d, "Dipa") == 0) && password == 923 && !hasVoted[24])
            {
                giveyourvote(24);
            }
            else if ((strcmp(d, "Tonny") == 0) && password == 321 && !hasVoted[25])
            {
                giveyourvote(25);
            }
            else if ((strcmp(d, "Eva") == 0) && password == 750 && !hasVoted[26])
            {
                giveyourvote(26);
            }
            else if ((strcmp(d, "Juti") == 0) && password == 389 && !hasVoted[27])
            {
                giveyourvote(27);
            }
            else if ((strcmp(d, "Alisha") == 0) && password == 669 && !hasVoted[28])
            {
                giveyourvote(28);
            }
            else if ((strcmp(d, "Toma") == 0) && password == 601 && !hasVoted[29])
            {
                giveyourvote(29);
            }
            else
            {
                printf("Wrong username or password, or you have already voted.\n");
            }
            break;
        }

        case 2:
        {
            char d[20];
            printf("\nEnter ADMIN username: ");
            scanf("%s",&d);
            int password;
            printf("\nEnter ADMIN password: ");
            scanf("%d",&password);
            if((strcmp(d,"admin")==0)&&(password==123))
            {
                votecount();
            }

            else
            {
                printf("wrong username or password");
            }
        }
        break;
        case 3:
        {
            char d[20];
            printf("\nEnter ADMIN username: ");
            scanf("%s",&d);
            int password;
            printf("\nEnter ADMIN password: ");
            scanf("%d",&password);
            if((strcmp(d,"admin")==0)&&(password==123))
            {
                leadingthewholeprocess();
            }

            else
            {
                printf("wrong username or password");
            }
        }



        break;
        case 4:
            declarewinner();
            break;
        default:
            printf("Invalid choice. Please choose a valid option.\n");
        }
    }
    while (choice != 0);

    return 0;
}

void giveyourvote(int userIndex)
{
    system("cls");
    if (userIndex == -1)
    {
        char d[20];
        int password;
        printf("\nEnter username: ");
        scanf("%s", d);
        printf("\nEnter your password: ");
        scanf("%d", &password);

    }

    if (userIndex >= 0 && !hasVoted[userIndex])
    {
        hasVoted[userIndex] = 1;
        printf("\n\n *Choose your preferred participant.* \n\n");
        printf("\n 1.%s\n 2.%s\n 3.%s\n 4.%s\n", PARTICIPANT1, PARTICIPANT2, PARTICIPANT3, PARTICIPANT4);
        printf("\n Input your choice (1-4): ");
        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            votecount1++;
            break;
        case 2:
            votecount2++;
            break;
        case 3:
            votecount3++;
            break;
        case 4:
            votecount4++;
            break;
        default:
            unnecessaryvote++;
        }
        printf("\n\n ****We do appreciate your vote.****\n\n");
        saveVoteCounts();
    }
    else
    {
        printf("Either invalid user or already voted.\n");
    }

}

void saveVoteCounts()
{
    system("cls");
    FILE *file = fopen(DATA_FILE, "w");
    if (file != NULL)
    {
        fprintf(file, "%d %d %d %d %d ", votecount1, votecount2, votecount3, votecount4, unnecessaryvote);
        for (int i = 0; i < 30; i++)
        {
            fprintf(file, "%d ", hasVoted[i]);
        }
        fclose(file);
    }
    else
    {
        printf("Unable to save data.\n");
    }

}
void votecount()
{
    system("cls");


    printf("\n\n **Voting Statistics**");
    printf("\n %s=%d",PARTICIPANT1,votecount1);
    printf("\n %s=%d",PARTICIPANT2,votecount2);
    printf("\n %s=%d",PARTICIPANT3,votecount3);
    printf("\n %s=%d",PARTICIPANT4,votecount4);
    printf("\n %s=%d","spoiled one",unnecessaryvote);
    printf("\nPress any key to continue...");
    getch();
}
void leadingthewholeprocess()
{
    system("cls");
    printf("\n\n ####PARTICIPANTS LEADING THE JOURNEY####\n\n");

    if(votecount1>votecount2 && votecount1>votecount3 && votecount1>votecount4)
    {
        printf("[%s] \n\n",PARTICIPANT1);
    }
    else if(votecount2>votecount1 && votecount2>votecount3 && votecount2>votecount4)
    {
        printf("[%s] \n\n",PARTICIPANT2);
    }
    else if(votecount3>votecount1 && votecount3>votecount2 && votecount3>votecount4)
    {
        printf("[%s] \n\n",PARTICIPANT3);
    }
    else if(votecount4>votecount1 && votecount4>votecount2 && votecount4>votecount3)
    {
        printf("[%s] \n\n",PARTICIPANT4);
    }
    else
    {
        printf("**Caution!!! No-win situation!!! Stay with us for the final result.**\n");
    }
    int total=votecount1+votecount2+votecount3+votecount4;
    float percentage=100/total;
    printf("PARTICIPANT1 %0.2f%% \n",percentage*votecount1);
    printf("PARTICIPANT2 %0.2f%% \n",percentage*votecount2);
    printf("PARTICIPANT3 %0.2f%% \n",percentage*votecount3);
    printf("PARTICIPANT4 %0.2f%% \n",percentage*votecount4);
    printf("\nPress any key to continue...");
    getch();
}

void declarewinner()
{
    system("cls");
    if(votecount1>votecount2 && votecount1>votecount3 && votecount1>votecount4)
    {
        printf("Congratulations!!!! Winner is %s with %d votes. \n",PARTICIPANT1,votecount1);
    }
    else if(votecount2>votecount1 && votecount2>votecount3 && votecount2>votecount4)
    {
        printf("Congratulations!!!! Winner is %s with %d votes. \n",PARTICIPANT2,votecount2);
    }
    else if(votecount3>votecount1 && votecount3>votecount2 && votecount3>votecount4)
    {
         printf("Congratulations!!!! Winner is %s with %d votes. \n",PARTICIPANT3,votecount3);
    }
    else if(votecount4>votecount1 && votecount4>votecount2 && votecount4>votecount3)
    {
         printf("Congratulations!!!! Winner is %s with %d votes. \n",PARTICIPANT4,votecount4);
    }

    remove("voting_data.txt");

    votecount1 = 0, votecount2 = 0, votecount3 = 0, votecount4 = 0, unnecessaryvote = 0;
    for (int i = 0; i < 30; i++)
            hasVoted[i]=0;

    printf("\nPress any key to continue...");
    getch();
    system("cls");


}


void loadVoteCounts()
{
    system("cls");
    FILE *file = fopen(DATA_FILE, "r");
    if (file != NULL)
    {
        fscanf(file, "%d %d %d %d %d", &votecount1, &votecount2, &votecount3, &votecount4, &unnecessaryvote);
        for (int i = 0; i < 30; i++)
        {
            fscanf(file, "%d", &hasVoted[i]);
        }
        fclose(file);
    }
    else
    {
        printf("No previous voting data found, starting fresh.\n");
    }

}



