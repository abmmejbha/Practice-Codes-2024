#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

struct Package{
    string destination, startDate, endDate;
    int price;

};

void displayTour(Package pack)
{
    cout<<"Destination: "<<pack.destination<<endl;
    cout<<"Start Date: "<<pack.startDate<<endl;
    cout<<"Return Date: "<<pack.endDate<<endl;
    cout<<"Package Price: "<<pack.price<<endl<<endl;
}

int main()
{
    Package pack_1{"1.Murre","20-05-2023","20-05-2023", 30000};
    Package pack_2{"2.Gilgit","01-06-2023","10-06-2023", 40000};
    Package pack_3{"3.Kashmir","11-06-2023","20-06-2023", 50000};

    cout<<"...Tour Plans..."<<endl<<endl;
    displayTour(pack_1);
    displayTour(pack_2);
    displayTour(pack_3);

    int choice;
    cout<<"Select Package No: ";
    cin>>choice;

    if(choice==1)
    {
        system("cls");
        cout<<"You have selected the following package"<<endl;
        displayTour(pack_1);
    }
    else if(choice==2)
    {
        system("cls");
        cout<<"You have selected the following package"<<endl;
        displayTour(pack_2);
    }
    else if(choice==3)
    {
        system("cls");
        cout<<"You have selected the following package"<<endl;
        displayTour(pack_3);
    }
getch();
}