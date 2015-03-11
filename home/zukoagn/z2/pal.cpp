#include <iostream>

using namespace std;

int main()
{
   string s;
   int d, i ,j, k;
   cin>>s;
   d=s.length();
  // cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<" "<<s[3]<<" "<<s[4]<<endl;

   i=0;
   j=d-1;
   k=0;

   do
   {

       if(s[i]!=s[j])
       {
           k=1;
           cout<<"NIE"<<endl;
           break;
       }
       i++;
    j--;
   }while(s[i]==s[j]);

   if(k==0)
    cout<<"TAK"<<endl;



}

