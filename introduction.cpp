#include<iostream>
using namespace std;

int main()
{

string name;
string choice = "nul";

cout<<"Please enter your name: "<<endl;
 cin>>name;
cout<<"Hello, "<< name<< endl;


while (choice != "wrong")
  {
    cout<<"What would you like to do?"<<endl;
    cin>>choice;
    //view repair orders
    //view inventory
    //view email list
    //view budget
    //view bills
   cout<<"You have chosen: "<<choice<<endl;
  }
   cout<<"Exited Loop"<<endl;
return 0;
}
