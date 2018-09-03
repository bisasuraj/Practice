/*


Input:
1       //number of test case
4       //enter number of cities in the given network!!
gdansk  //name of city (default indexed one! )
2       //number of neibhouring cities of city 1(gdansk)
2 1     //index of a city connected to (gdansk)  ||  weight of cost it takes to travel (transportation cost)
3 3
bydgoszcz
3
1 1
3 1
4 4
torun
3
1 3
2 1
4 1
warszawa
2
2 4
3 1

*/


#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include<string.h>
using namespace std;


typedef struct cities{
    
    int index;
    char name[20];
    struct weight *link[];
   
}cities;

typedef struct weight{
    int w;
    struct cities *next;
}weight;

int main()
{
    char search[20];
    int T,noc,k,i,a,b,il,j;
    cities *ptr;
    weight *ptr1;
    cin>>T;
//TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT    
for(k=0;k<T;k++){
    cin>>noc;
    ptr = (cities*) malloc(noc * sizeof(cities));
    //cities loopp...........................................
for(i=0;i<noc;i++){
    (ptr+i)->index=i;
    cin>>(ptr+i)->name;
    cin>>il;
    (ptr+i)->link[il];
         // inner loopppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp
            for(j=0;j<il;j++){
            cin>>a;
            cin>>b;
            ptr1 = (weight*) malloc(sizeof(weight));
            (ptr+i)->link[a]=ptr1;
            (ptr1)->next=(ptr+a); 
            (ptr1)->w=b;
                }
                
}
}

cin>>search;
i=0;
while(1){
    if(strncmp(search,(ptr+i)->name,strlen(search))==0){
        cout<<search<<"index is "<<i;
        break;
    }
    i++;
    if(i>noc)
        break;
}


    return 0;
}




