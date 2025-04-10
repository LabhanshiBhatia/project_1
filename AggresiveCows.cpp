#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int barn[n];
    for (int i = 0; i < n; i++)
    {
        cin>>barn[i];
    }
    cout<<"cows";
    int c;cin>>c;
   
    int st=1,end=barn[n-1]-barn[0];
    int ans=-1;
    while(st<=end){
        int mid=(st+end)/2;
        int count=1;
        int prev=barn[0];
        for (int i = 0; i < n; i++)
        {
            if (barn[i]-prev>=mid)
            {
                count++;
                prev=barn[i];
            }
            
        }
        
        if(count>=c){
            ans=max(ans,mid);
            st=mid+1;
        }
        else end=mid-1;
    }
    cout<<ans;
     return 0;
}