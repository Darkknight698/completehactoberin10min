#include<iostream>
using namespace std;
int n;
    cin>>n;
    int x[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
    int maxno=x[0];
    int minno=x[0];
    for(int i=0;i<n;i++)
    {
        if(x[i]>maxno)
        {
            maxno=x[i];
        }
        if(x[i]<minno)
        {
            minno=x[i];
        }
    }
    cout<<maxno<<" "<<minno;
    return 0;
}
