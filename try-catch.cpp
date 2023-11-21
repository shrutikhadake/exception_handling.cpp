#include <iostream>
using namespace std;
 
int main()
{
   int age,income;
   string city,vehicle;
   cout<<"Enter the age \n";
   cin>>age;
   try {
      if (age<18|age>56)
      {
         cout<<"Your age must in between 18 to 56\n";
         throw age;
  
      }
   }
   catch (int age ) {
      cout << "Exception Caught \n";
   }
     cout<<"Enter income \n";
     cin>>income;
   try {
      if (income<100000||income>50000)
      {
         cout<<"Your income must be in between 50000 to 100000\n";
         throw income;
      }
   }
   catch (int income ) {
      cout << "Exception Caught \n";
   }
    cout<<"Enter your city \n";
    cin>>city;
    try {
        if(city=="bombay"||city=="pune"||city=="banglore"||city=="chennai")
        {}
        else{
            
         cout<<"Your city must among pune ,bombay,banglore and chennai\n";
         throw city;
             
        }
    } catch (string city) 
        {
        cout << "Exception Caught \n";
    }
     cout<<"Enter your vehicle type \n";
     cin>>vehicle;
    try{
        if(vehicle=="car")
        {}
        else{
            cout<<"Employee must have four wheeler \n";
             throw vehicle;
        } 
    }catch (string vehicle) 
        {
        cout << "Exception Caught \n";
      }
    return 0;
}
