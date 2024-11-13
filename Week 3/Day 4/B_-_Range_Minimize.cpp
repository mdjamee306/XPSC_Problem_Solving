#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;  


    while(t--)
    {
       int n;
       cin>>n;
        
       vector<int>a(n);
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }  

       sort(a.begin(),a.end());

    //    cout<<a[a.size()-1]<<endl;
    //    cout<<a[2]<<endl;
    //    cout<<a[0]<<endl;
    //    cout<<a[a.size()-3]<<endl;

       int dif1=a[a.size()-1]-a[2];

       int dif2=a[a.size()-3]-a[0];
       int dif3=a[a.size()-2]=a[1];

    //    cout<<dif1<<endl<<dif2<<endl;

       cout<<min(dif1,min(dif2,dif3))<<endl;
    }
}