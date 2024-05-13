#include <iostream>
using namespace std;
int count(int num)
{
    int digits=0;
 while(num!=0)
    {
        num=num/10;
        digits++;
    }
   return digits;
}
int age(int age)
{
    if(age<=2024 && age>=0)
    {
       age=2024-age;
    }
    else
    {
        cout<<"\t\n Your Age Invalid";
        exit(0);
    }
  return age;
}
int main() {
    int digits,date ,num;
    while(1)
    {
        cout<<"Enter Age / Born Year "<<endl;
    cin>>num;
    digits=count(num);
    date=age(num);
    if(digits>=3 && date<=900)
    {
        cout<<"Your Age is "<<endl<<date<<endl;
    }
  else
  {
      cout<<"Your Born in this year "<<endl<<date;
  }
    cout<<"\n ___________________________________"<<endl;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t Shaif"<<endl;
  }
    return 0;
}

