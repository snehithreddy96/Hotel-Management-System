#include<bits/stdc++.h>
using namespace std;
int main()
{
    int quantity;
    int choice;
    int rooms_cost=0,poha_cost=0,burger_cost=0,chickenroll_cost=0,drink_cost=0;
    int rooms_sold=0,poha_sold=0,burger_sold=0,drink_sold=0,chickenroll_sold=0;
    int rooms_total=0,poha_total=0,burger_total=0,drink_total=0,chickenroll_total=0;
    cout<<"\n\n\n\t\t\t______________________________\t\t\t";
    cout<<"\n\n\t\t\t WELCOME TO HOTEL SITHARA\t\t";
    cout<<"\n\n\n\t\t\t______________________________\t\t\t\n";
    cout<<"\tRooms Avaliable: ";
    cin>>rooms_total;
    cout<<"\tpoha avaliable: ";
    cin>>poha_total;
    cout<<"\tburger avaliable: ";
    cin>>burger_total;
    cout<<"\tchickenroll avaliable: ";
    cin>>chickenroll_total;
    cout<<"\tdrink avaliable: ";
    cin>>drink_total;
    m:
    cout<<"\n\n\t MENU \t\n\n";
    cout<<"1)\tRooms each Rs 500/-\n";
    cout<<"2)\tpoha each Rs 50/-\n";
    cout<<"3)\tburger each Rs 40/-\n";
    cout<<"4)\tchickenroll each Rs 70/-\n";
    cout<<"5)\tdrink each Rs 30/-\n";
    cout<<"6)\tcollection in a  whole day\n";
    cout<<"7)\texit\n";
    cout<<"\n\t Can you please select any number from the list:";
    cin>>choice;
    switch(choice)
    {

       case 1:
           {
               cout<<"\n\t Please enter the number of rooms needed: ";
               cin>>quantity;
               if(rooms_total-rooms_sold>=quantity)
               {
                   rooms_sold+=quantity;
                   rooms_cost+=quantity*500;
                   cout<<"\n\t"<<quantity<<" rooms are alloted to you\n";
               }
               else cout<<"\n Sorry...! only "<<rooms_total-rooms_sold<<"are avaliable";
               break;
           }
      case 2:
           {
               cout<<"\n\t Please enter the number of poha needed: ";
               cin>>quantity;
               if(poha_total-poha_sold>=quantity)
               {
                   poha_sold+=quantity;
                   poha_cost+=quantity*50;
                   cout<<"\n\t"<<quantity<<" poha are alloted to you\n";
               }
               else cout<<"\n\t Sorry...! only "<<poha_total-poha_sold<<"are avaliable";
               break;
           }
      case 3:
           {
               cout<<"\n\t Please enter the number of burger needed: ";
               cin>>quantity;
               if(burger_total-burger_sold>=quantity)
               {
                   burger_sold+=quantity;
                   burger_cost+=quantity*40;
                   cout<<"\n\t"<<quantity<<" burger are alloted to you\n";
               }
               else cout<<"\n\t Sorry...! only "<<burger_total-burger_sold<<"are avaliable";
               break;
           }
      case 4:
           {
               cout<<"\n\t Please enter the number of chicken roll needed: ";
               cin>>quantity;
               if(chickenroll_total-chickenroll_sold>=quantity)
               {
                   chickenroll_sold+=quantity;
                   chickenroll_cost+=quantity*70;
                   cout<<"\n\t"<<quantity<<" chicken roll are alloted to you\n";
               }
               else cout<<"\n\t Sorry...! only "<<chickenroll_total-chickenroll_sold<<"are avaliable";
               break;
           }
      case 5:
        {
             cout<<"\n\t Please enter the number of drink needed: ";
               cin>>quantity;
               if(drink_total-drink_sold>=quantity)
               {
                   drink_sold+=quantity;
                   drink_cost+=quantity*30;
                   cout<<"\n\t"<<quantity<<" drink are alloted to you\n";
               }
               else cout<<"\n\t Sorry...! only "<<drink_total-drink_sold<<"are avaliable\n";
               break;
        }
      case 6:
        {
            int collection;
            collection=rooms_cost+poha_cost+chickenroll_cost+drink_cost+burger_cost;
            cout<<"\n\trooms cost: "<<rooms_cost;
            cout<<"\n\tpasta cost: "<<poha_cost;
            cout<<"\n\tchickenroll cost: "<<chickenroll_cost;
            cout<<"\n\tdrink cost: "<<drink_cost;
            cout<<"\n\tburger cost: "<<burger_cost;
            cout<<"\n\tcollcection in a day: "<<collection;
            break;
        }
    case 7:
        {
            exit(0);
        }
    default:
        cout<<"\n\tplease select numbers from above list\n";
}
goto m;
}
