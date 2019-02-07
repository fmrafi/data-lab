#include<iostream>
using namespace std;
int main()
{
int a[100][100], i, j, one=0, two=0, three=0, four=0,five=0, six=0, seven=0,eight=0, nine=0, row, col;
cout<<"Enter row of array"<<endl;
cin>>row;
cout<<"Enter column of array"<<endl;
cin>>col;
cout<<"Enter "<<row*col<<" Elements of array:";
for(i=0; i<row; i++){
for(j=0; j<col;j++){
cin>>a[i][j];
}
}
for(i=0; i<row; i++){
for(j=0; j<col;j++){
if(a[i][j]==1){
one++;
}
else if(a[i][j]==2){
two++;
}
else if(a[i][j]==3){
three++;
}
else if(a[i][j]==4){
four++;
}
else if(a[i][j]==5){
five++;
}
else if(a[i][j]==6){
six++;
}
else if(a[i][j]==7){
seven++;
}
 else if(a[i][j]==8){
eight++;
}
else if(a[i][j]==9){
nine++;
}
}
}
cout<<"one= "<<one<<endl<<"two= "<<two<<endl<<"three= "<<three<<endl<<"four ="<<four<<endl<<"five="<<five<<endl<<"six="<<six<<endl<<"seven"<<seven<<endl<<"eight="<<eight<<endl<<"nine="<<nine<<endl;
}
