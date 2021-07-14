#include<bits/stdc++.h>
#include "System.h"
using namespace std;

class history{
    public:
    int orderid;
    string start,dest;
    string vehicalnumber;

};
class Cabs{

};
class Admin{
    public:
    long userid,mobail;
    string name,email,Password;
    vector<history> history;
    vector<Cabs> cabs;
    bool status=false;

       void Register(){
           system("CLS");
            cout<<"\n Enter the Name=";
            cin>>name;
            cout<<"\nEnter The email id=";
            cin>>email;
            cout<<"\nEnter the Mobail=";
            cin>>mobail;
            cout<<"\nEnter the Password(Password Shoud be string)=";
            cin>>Password;
            userid=(long)rand();
            cout<<"Login deatails username is "<<userid<<"\nCongratulation you are sucessfully registerd...\n";
        }
      public : bool auth(string username,string pass){
        if(username==email&&pass==Password)
            return true;
       
        return false;
       }
       void display(){
        system("CLS");
        cout<<"\n===================\n\tMy Details\n===================\n";
        cout<<"\nUserId = "<<userid;
        cout<<"\nname = "<<name;
        cout<<"\nemail = "<<email;
        cout<<"\nMobail = "<<mobail;
        cout<<"\n";    
       }
};
class User{

    public:
     long userid;
    string name,email,Password;
    long mobail;
    vector<history> history;

        void Register(){
            system("CLS");
            cout<<"\nEnter the Mobail=";
            cin>>mobail;
            cout<<"\n Enter the Name=";
            cin>>name;
            cout<<"\nEnter The email id=";
            cin>>email;
            cout<<"\nEnter the Password(Password Shoud be string)=";
            cin>>Password;
            userid=(long)rand();
           
            cout<<"Login deatails username is "<<userid<<"\nCongratulation you are sucessfully registerd...\n";
        }
         public : bool auth(string username,string pass)
         {
           if(username==email&&pass==Password)
                return true;

           return false;
        }
       void display(){
        system("CLS");
        cout<<"\n===================\n\tMy Details\n===================\n";
        cout<<"\nname = "<<name;
        cout<<"\nemail = "<<email;
        cout<<"\nMobail = "<<mobail;
        cout<<"\n";    
          
       }
       
};

void AdminPanel(vector<Admin> &admin,vector<User>&cust){
          int ch;
     string username,pass;
     cout<<"\nUsername =";
     cin>>username;
     cout<<"\n Password=";
     cin>>pass;

     for(int i=0;i<admin.size();i++)
     {
            if(admin[i].auth(username,pass))
            {
                do{
                    cout<<"\n***********************\n";
                    cout<<"1.Add Cab\n2.List Cabs\n3.List Cab Bookings\n4.Users List\n5.Exit \nEnter The Choice=";
                    cin>>ch;
                    switch (ch)
                    {
                        case 1:
                            admin[i].display();
                            break;
                        case 2: 
                                break;
                            case 3: break;
                        case 4:
                        if(cust.size()==0)
                        {
                            cout<<"\nNO Users Found\n";
                        }
                        break;
                        default:
                            system("CLS");
                            break;
                    }
                        
                    }while(ch!=5);
                }
            else{
                cout<<"\nUsername or Password Incorrect!\n";
                break;
            }
     }

}
void CustomerPanel(vector<User> &user){

     int ch;
     string username,pass;
     cout<<"\nUsername =";
     cin>>username;
     cout<<"\n Password=";
     cin>>pass;

     for(int i=0;i<user.size();i++)
     {
            if(user[i].auth(username,pass))
            {
                do{
                    cout<<"\n***********************\n";
                    cout<<"1.Book Cab\n2.Rides History\n3.Exit\nEnter The Choice=";
                    cin>>ch;
                    switch (ch)
                    {
                    case 1:
                        break;
                    case 2: 
                            break;
                        case 3: break;
                    default:
                        system("CLS");
                        break;
                    }
                        
                    }while(ch!=3);
                }
            else{
                cout<<"\nUsername or Password Incorrect!\n";
                break;
            }
     }
}
    


int main(){
   
    //fullscreen();
	welcome();
	load();
	Boarder();
	readUserPass();
	availCar();
	customerData();
	carData();
	menu();
    
}