#include<bits/stdc++.h>
// #include<admin.h>
// #include<customer.h>
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
    long userid;
    string name,email,Password;
    vector<history> history;
    bool status=false;

        long Register(){
            System("CLS");
            cout<<"\n Enter the Name=";
            cin>>name;
            cout<<"\nEnter The email id=";
            cin>>email;
            cout<<"\nEnter the Password=";
            cin>>Password;
            userid=rand(0,10e8);
            return userid;
        }
       void display(){
           cout<<"My Details"
           cout<<"in admin\n";
       }
};
class User{

    public:
     long userid;
    string name,email,Password;
    long mobail;
    vector<history> history;
    
        long Register(){
            System("CLS");
            cout<<"\nEnter the Mobail=";
            cin>>mobail;
            cout<<"\n Enter the Name=";
            cin>>name;
            cout<<"\nEnter The email id=";
            cin>>email;
            cout<<"\nEnter the Password=";
            cin>>Password;
            userid=rand(0,10e8);
            return userid;
        }
       void display(){
           cout<<"My Details"
           cout<<"in admin\n";
       }
};

void AdminPanel(vector<Admin> &admin){
     system("CLS");
    int ch;
    do{
       cout<<"\n***********************\n";
       cout<<"1.Login\n2.Register\n3.Exit\nEnter The Choice=";
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
void CustomerPanel(vector<User> &user){
     int ch;
    do{
       cout<<"\n***********************\n";
       cout<<"1.Login\n2.Register\n3.Exit\nEnter The Choice=";
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
int main(){
    vector<Admin> admi;
     Admin admin;
     User user;
    vector<User> cust;
    int ch;
    do{
        cout<<"\n============================";
        cout<<"\n 1.Admin Login\n 2.Customer Login \n 3.Admin Register\n4.Customer Register\n5.Exit\n Enter The Choice=";
        cin>>ch;
        switch (ch)
        {
            case 1:
                    AdminPanel(admi);

                break;
            case 2:
                user.Register();
                cust.push_back(user);
                CustomerPanel(cust);
                break;
            case 3:

                admin.Register(); 
                admi.push_back(admin);
            break;
            case 4: 
         
            break;
            case 5: break;
            default:
                system("CLS");
                break;
        }
    }while(ch!=5);
    
}