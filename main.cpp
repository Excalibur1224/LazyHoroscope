//Authors:Brayden Falla
#include<iostream>
#include<string>

using namespace std;

int main()
{
  int lucky;
  string FirstName;
  string LastName;

  cout<<"What is your first name?"<<endl;
  cin>>FirstName;
  cout<<"What is your last name?"<<endl;
  cin>>LastName;

  lucky = FirstName.length();

  cout<<"Welcome, "<<FirstName.at(0)<<"."<<LastName.at(0)<<"."<<", here is your fortune."<<endl;
  cout<<"your lucky number is "<<lucky<<endl;

  return 0;
}
