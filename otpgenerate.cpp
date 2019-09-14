#include<bits/stdc++.h>
using namespace std;
string generateOTP(int len)
{
   string s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789&#$!";

   int n = s.length();

   string OTP;
   for(int i = 0;i<=len;i++)
   {
          OTP.push_back(s[rand()% n]);
   }
   return(OTP);

}
int main()
{

     //for different value each time
     srand(time(NULL));

     int len=6;
     cout<<"GeneratedOTP is:"<<generateOTP(len).c_str();
     return(0);


}
