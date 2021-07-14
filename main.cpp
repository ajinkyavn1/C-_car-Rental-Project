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
class Admin{
    public:
    long id,mobail;
    string name,email;
    vector<history> history;
    bool status=false;

        void Register1(){
        
        }
       void display(){
           cout<<"in admin\n";
       }
};
class customer{
    public:
       void display(){
           cout<<"in admin\n";
       }
};

void AdminPanel(vector<Admin> &admin){

}
void CustomerPanel(vector<customer> &customer){

}
int main(){
    vector<Admin> admi;
    vector<customer> cust;
    int ch;
    do{
        cout<<"\n============================";
        cout<<"\n 1.Admin Login\n 2.Customer Login \n 3.Exit\n Enter The Choice=";
        cin>>ch;
        switch (ch)
        {
            case 1:
                    AdminPanel(admi);
                break;
            case 2:
                    CustomerPanel(cust);
            default:
                break;
        }
    }while(ch!=3);
    
}