// program for 0/1 knapsack 

#include<iostream>
using namespace std;
class knapsack
{
  int n,m,v[100][100],p[100],w[100];
  public:void read_data();
         void opt_sol();
         void write_data();
};
int max(int a,int b)
{
 return a>b?a:b;
}
void knapsack::read_data()
{
 cout<<"enter the number of objects"<<endl;
 cin>>n;
 cout<<"enter the weight of the object"<<endl;
 for(int i=1;i<=n;i++)
    cin>>w[i];
 cout<<"enter the profits of the objects"<<endl;
 for(int i=1;i<=n;i++)
  cin>>p[i];
 cout<<"enter the capacity of knapsack"<<endl;
 cin>>m;
}
void knapsack::write_data()
{
 int i,j,x[10];
 cout<<"the output"<<endl;
 for(i=0;i<=n;i++)
 {
   for(j=0;j<=m;j++)
    cout<<v[i][j]<<" ";
   cout<<endl;
 }
 cout<<"the optimal solution is "<<v[n][m]<<endl;
 for(i=0;i<=n;i++)
	x[i]=0;
 i=n;
 j=m;
 while(i!=0&&j!=0)
 {
   if(v[i][j]!=v[i-1][j])
   {
   	x[i]=1;
   	j=j-w[i];
   }
   i--;
 }
 for(i=1;i<=n;i++)
     cout<<" x["<<i<<"] ";
 cout<<"=";
 for(i=1;i<=n;i++)
    cout<<" "<<x[i]<<" ";
}
void knapsack::opt_sol()
{
 for(int i=0;i<=n;i++)
 {
  for(int j=0;j<=m;j++)
   {
     if(i==0||j==0)
       v[i][j]=0;
     else if(j<w[i])
       v[i][j]=v[i-1][j];
     else
       v[i][j]=max(v[i-1][j],v[i-1][(j-w[i])]+p[i]);
     }
  }
}   

int main()
{  knapsack a;
  a.read_data();
  a.opt_sol();
  a.write_data();
}
