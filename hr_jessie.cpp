#include<iostream>

using namespace std;

//Cost Array
int cost_arr[100000];
int INDEX=0;

//Function to calculate cost of the array
void cal_cost(int a[] ,int s, int cost, int i, long long int n)
{
	int k;
	
	if(i==n)
		return;
		
	for( k=i+1;k<=n;k++)
	{
		cost+=s;
		if(a[k]==1)
		{
			cost_arr[INDEX]=cost;
			INDEX+=1;
			break;
		}
	}
	
}

int min_cost()
{
	int min = cost_arr[0];
	
	for(int i=0;i<INDEX;i++)
	{
		if(min>cost_arr[i])
		{
			min = cost_arr[i];
		}
	}
	
	return min;
}

int main()
{
	int a[100000] ,k, i,trav_cost=0; //Traversal Cost to the first candy shop
	
	long long int n;
	
	cin>>n>>k;
	
	for(i=1; i<=n;i++)
	{
		cin>> a[i];
	}
	
	for(i=1;i<=n;i++)
	{
		
		if(a[i]==1)
		{
			cal_cost(a,k,trav_cost,i,n);
		}
		trav_cost +=1;
	}
	
	cout<< "\n"<<min_cost();
	
	return 0;
}
