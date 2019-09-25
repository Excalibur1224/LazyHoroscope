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

  cout<<"Welcome, "<<FirstName.at(0)<<"."<<LastName.at(0)<<"."<<", here is your fortune..."<<endl;
  cout<<"your lucky number is "<<lucky<<endl;

  if(FirstName.at(0)=='a'||FirstName.at(0)=='A'||FirstName.at(0)=='e'||FirstName.at(0)=='E'||FirstName.at(0)=='i'||FirstName.at(0)=='I'||FirstName.at(0)=='o'||FirstName.at(0)=='O'||FirstName.at(0)=='u'||FirstName.at(0)=='U')
  {
  cout<<"you are destined to be famous!"<<endl;
  }

  if(LastName.back()=='a'||LastName.back()=='e'||LastName.back()=='i'||LastName.back()=='o'||LastName.back()=='u'||LastName.back()=='A'||LastName.back()=='I'||LastName.back()=='O'||LastName.back()=='U')
{
  cout<<"you have already met your true love."<<endl;

}

  cout<<"have a good day!"<<endl;
  return 0;
}
