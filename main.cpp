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

       void Register(){
           system("CLS");
            cout<<"\n Enter the Name=";
            cin>>name;
            cout<<"\nEnter The email id=";
            cin>>email;
           cout<<"\nEnter the Password(Password Shoud be string)=";
            cin>>Password;
            userid=(long)rand();
             cout<<"Login deatails username is "<<userid<<"\nCongratulation you are sucessfully registerd...\n";
        }
      public : bool auth(string username,string pass){
        //    if(username==email&&pass==Password)
        //         return true
        if(name==username)
            return true;
        return false;
       }
       void display(){
        cout<<"My Details";
        cout<<"UserId ="<<userid;
        cout<<"name ="<<name;
        cout<<"email ="<<email;
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
         public : bool auth(string username,string pass){
        //    if(username==email&&pass==Password)
        //         return true
        if(name==username)
            return true;
        return false;
       }
       void display(){
           cout<<"My Details";
            cout<<"UserId ="<<userid;
           cout<<"name ="<<name;
           cout<<"email ="<<email;
           cout<<"Mobail ="<<mobail;
          
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
bool Auth(vector<User> user){
    string username;
    string pass;
    for(int i=0;i<user.size();i++){
            if(user[i].auth(username, pass))
    }
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
                    if(Auth(cust))
                    {

                    }else{
                        cout<<"";
                    }
                break;
            case 3:
           
                admin.Register();
                admi.push_back(admin);
                // admin.users.push_back(user);
            break;
            case 4: 
                    user.Register();
                    cust.push_back(user);
                     // admin.users.push_back(user);
                    // CustomerPanel(cust);
            break;
            case 5: 
                for(int i=0;i<cust.size();i++)
                {
                        cout<<cust[i].auth("ajinkya","ajinkya");
                        cout<<"\n";
                }
                
            break;
            default:
                system("CLS");
                break;
        }
    }while(ch!=6);
    
}