#include <iostream>

using namespace std;

int main (){

int matriz [4][6];
int l,c;

/*matriz[0][0]=0;
matriz[0][1]=0;
matriz[0][2]=0;
matriz[1][0]=1;
matriz[1][1]=1;
...*/

for(l = 0;l < 4; l++){

    for(c=0; c<6; c++){
        matriz[l][c]=l;
    } 
}
for ( l = 0; l < 4; l++)
{
    for ( c = 0; c < 6; c++)
    {
        cout << matriz[l][c] << " ";
    }
    cout << "\n"; 
}
return 0;




}
