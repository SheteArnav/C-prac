#include<iostream>
using namespace std;
int main()
{
    int num = 10;
    if (num>0)
     cout<<"positive number\n";
   
    
  int marks = 80;
    
   if (marks>=90)
     cout<<"Grade A";

    else if (marks>=70)
     cout<<"Grade B";
    
    else

      cout<<"Fail";
    
 int amount = 10;
 int balance = 100;
 int daily_limit = 50;

  if(amount<=balance)
      if(amount<=daily_limit)
         if(amount%5==0)
         cout<<"Withdrawl succesfully\n";
        else
          cout<<"Amount must be multiple of 100\n";
     else
     cout<<"Exceeds daily limit\n";
 else
      cout<<"Insufficient Balance\n";          

 return 0;
}
