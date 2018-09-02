#include <iostream>
//444= unsuccess, 420=success
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int test(int arrm[9],int player);
int pattern1(int arrm[9],int player);
int pattern2(int arrm[9],int player);
int main() {
	int arrm[9],player=1,i;
	char arrd[9];
	int pos,j,res=2;
	for(i=0;i<9;i++){
		arrd[i]='_';
		arrm[i]=0;
}

while(1){
	//dispslay___________________________________
	for(i=0;i<9;i++){
		cout<<arrd[i]<<" ";
		if(i==2||i==5)
			cout<<endl;
}
	cout<<endl;
	
	//take_______in_____________________________________
	cout<<"player"<<player<<" enter the position ";
	cin>>pos;
	pos=pos-1;
	if(pos>8)
		continue;
				
	if(arrm[pos]!=0)
		continue;
			
			
		
		
	arrm[pos]=player;  
	if(player==1)
		arrd[pos]='o';
	else if(player==2)
		arrd[pos]='x';	
	
	
	//________TTEESSTTT____________________________
	res=test(arrm,player);
	if(res==420){
		for(i=0;i<9;i++){
		cout<<arrd[i]<<" ";
		if(i==2||i==5)
			cout<<endl;
						}
		cout<<endl<<player<<"  is The winner";
		return 0;
				}
	//check___if___full_____
	
	
	{
	for(j=0;j<9;j++){
	
		if(arrm[j]!=0)
			continue;
		else
			break;	
			}
		if(j==9){
			cout<<"draw beach";
			return 0;
			}
			
	}
	//player____shift__________________________________
	if(player==2)
		player=1;
	else 
		player++;
					
}
	
	return 0;
}

int test(int arrm[9],int player){
	int res=2;
	
if(arrm[0]==player||arrm[3]==player||arrm[6]==player){
	res = pattern1(arrm,player);
	if(res==420)
	return 420;
}

if(arrm[0]==player||arrm[1]==player||arrm[2]==player){
	res =pattern2(arrm,player);
	if(res==420)
	return 420;

}

//pattern 3__________________________________________________
{
if(arrm[0]==player&&arrm[4]==player&&arrm[8]==player)
	return 420;
	
else if(arrm[2]==player&&arrm[4]==player&&arrm[6]==player)
	return 420;
}
	
	return 0;
}

pattern1(int arrm[9],int player){

int i,res;

for(i=0;i<8;i=i+3){
		
	if(arrm[i]==player&&arrm[i+1]==player&&arrm[i+2]==player){
		res=420;	
		break;
		}
}

if(res==420)
	return 420;
	
return 444;	
}

pattern2(int arrm[9],int player){
int i,res=2;
for(i=0;i<3;i++){
		
	if(arrm[i]==player&&arrm[i+3]==player&&arrm[i+6]==player){
		res=420;	
		break;
		}

}

return res;
}


