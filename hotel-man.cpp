#include<bits/stdc++.h>
using namespace std;

int main(){
    int quant;
    int choice;

    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0; //Quantity of food items  the foof having

    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0; //this show sold foods 
   // Total items avail
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Tolal_chicken=0,Tolal_chicke=0;


    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms avaliable:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta :";
    cin>>Qpasta;

     cout<<"\n Quantity of burger :";
    cin>>Qburger;

     cout<<"\n Quantity of noodles :";
    cin>>Qnoodles;

     cout<<"\n Quantity of shake :";
    cin>>Qshake;

     cout<<"\n Quantity of chicken :";
    cin>>Qchicken;

      m:
    cout<<"\n\t\t\t Please select from the menu option ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) Shake";
    cout<<"\n6) Chicken";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;  //cust i/p
        if(Qrooms-Srooms >= quant){   // quantity of rooms - sold room 
            Srooms =Srooms+quant;  
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant <<"rooms have been alloted to you ";
        }  
        else
            cout<<"\n\t Only"<<Qrooms-Srooms <<"Rooms remaining in hotel ";
            break;
        

         case 2:
        cout<<"\n\n Enter pasta Quantity :" ;

        cin>>quant;  //cust i/p
        if(Qpasta-Spasta >= quant){   // quantity of rooms - sold room 
            Spasta =Spasta+quant;  
            Total_pasta=Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant <<"pasta is the order! ";
        }  
        else
            cout<<"\n\t Only"<<Qpasta-Spasta <<"Pasta remaining in hotel ";
            break;
        

        case 3:
        cout<<"\n\n Enter burger Quantity :" ;

        cin>>quant;  //cust i/p
        if(Qburger-Sburger >= quant){   // quantity of rooms - sold room 
            Sburger =Sburger+quant;  
            Total_burger=Total_burger+quant*120;
            cout<<"\n\n\t\t"<<quant <<"Burger is the order! ";
        }  
        else
            cout<<"\n\t Only"<<Qburger-Sburger <<"burger remaining in hotel ";
            break;
        

        case 4:
        cout<<"\n\n Enter noodles Quantity :" ;

        cin>>quant;  //cust i/p
        if(Qnoodles-Snoodles >= quant){   // quantity of rooms - sold room 
            Snoodles =Snoodles+quant;  
            Total_noodles=Total_noodles+quant*140;
            cout<<"\n\n\t\t"<<quant <<"noodles is the order! ";
        }  
        else
            cout<<"\n\t Only"<<Qnoodles-Snoodles <<"Noodles remaining in hotel ";
            break;
        

        case 5:
        cout<<"\n\n Enter shake Quantity :" ;

        cin>>quant;  //cust i/p
        if(Qshake-Sshake >= quant){   // quantity of rooms - sold room 
            Sshake =Sshake+quant;  
            Total_shake=Total_shake+quant*80;
            cout<<"\n\n\t\t"<<quant <<"Shake is the order! ";
        }  
        else
            cout<<"\n\t Only"<<Qshake-Sshake <<"Pasta remaining in hotel ";
            break;
        

        case 6:
        cout<<"\n\n Enter chicken Quantity :" ;

        cin>>quant;  //cust i/p
        if(Qchicken-Schicken >= quant){   // quantity of rooms - sold room 
            Schicken =Schicken+quant;  
            Tolal_chicken=Tolal_chicken+quant*150;
            cout<<"\n\n\t\t"<<quant <<"chicken is the order! ";
        }  
        else
            cout<<"\n\t Only"<<Qchicken-Schicken <<"Chicken remaining in hotel ";
            break;
        

        case 7:

        cout<<"\n\t\t Details of sales and collection ";
        cout<<"\n\n Number of  rooms we had :" <<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms collection for the day : "<<Total_rooms;


        cout<<"\n\n Number of  pasta we had :" <<Qpasta;
        cout<<"\n\n Number of pasta we gave for rent "<<Spasta;
        cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection for the day : "<<Total_pasta;


        cout<<"\n\n Number of  burger we had :" <<Qburger;
        cout<<"\n\n Number of burger we gave for rent "<<Sburger;
        cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
        cout<<"\n\n Total burger collection for the day : "<<Total_burger;


        cout<<"\n\n Number of  noodles we had :" <<Qnoodles;
        cout<<"\n\n Number of noodles we gave for rent "<<Snoodles;
        cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection for the day : "<<Total_noodles;


        cout<<"\n\n Number of  shake we had :" <<Qshake;
        cout<<"\n\n Number of shake we gave for rent "<<Sshake;
        cout<<"\n\n Remaining shake : "<<Qshake-Sshake;
        cout<<"\n\n Total shake collection for the day : "<<Total_shake;

        cout<<"\n\n Number of  chicken we had :" <<Qchicken;
        cout<<"\n\n Number of chicken we gave for rent "<<Schicken;
        cout<<"\n\n Remaining chicken : "<<Qchicken-Schicken;
        cout<<"\n\n Total chicken collection for the day : "<<Tolal_chicken;

        case 8:

          exit(0);

          default:
             cout<<"\n Please select the numbers mentioned above!";

    }
    goto m;

       


    }