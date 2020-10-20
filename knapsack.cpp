#include<iostream>
using namespace std;

int knapsack(int wt[],int val[],int W,int n)
{
	if(n==0||W==0)
	{
		return 0;
	}
	if(wt[n-1]<=W)
	{
		return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
	}
	else
	{
		return knapsack(wt,val,W,n-1);
	}
}

int main()
{
	cout<<"-------KNAPSACK 1/0 PROGRAM-------";
	int wt[10],val[10],n,W;
	cout<<"Enter the capacity of the knapsack bag: ";
	cin>>W;
	cout<<"Enter the limit of the number of comodities:";
	cin>>n;
	cout<<"Enter the value of the knapsack bag: ";
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	cout<<"Enter the weight ofthe comodities: ";
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	cout<<"Maximum profit is:"<<knapsack(wt,val,W,n);
	
	return 0;
	
	




}

