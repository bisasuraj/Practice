/*
this program lets u find next palindrom::
Input:
2
808
2133

Output:
818
2222
*/

#include <iostream>
using namespace std;
void rev(int x);
int main() {
	
	int k,arr[1000000],fuz,i;
	cin>>k;
	
	if(k>=1000000)
		exit(0);
	for(i=0;i<k;i++){
		cin>>arr[i];
		if(arr[i]>=1000000)
		exit(0);
		
	}
	
	
	
	
	for(i=0;i<k;i++){
	fuz= arr[i];
	rev(fuz);
	
}
	
	
	return 0;
}




void rev(int n)
{
	int n1,d,rn=0,jack=1;
	n1=n;
	
	while(1){
	n=n1;rn=0;jack=1;
		while(n>0)
	{
		d=n%10;
		rn=(rn*10)+d;
		n/=10;
		if(d==0){
			jack=0;
			break;
		}
		
	}
		if(jack==0){
		    n1++;
			continue;
	    	}
	if(n1==rn){
	cout<<n1<<endl;
	break;
	}
	else{
		n1++;
		continue;
	}
}
 
}
