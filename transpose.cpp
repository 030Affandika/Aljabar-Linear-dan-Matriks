#include <cstdlib>
#include <iostream>

using namespace std;
void aku(){
int i,j,k,baris, kolom, m1[10]
[10],m2[10]
[10],hasil[10]
[10];
    cout<<"Operasi perkalian matrik"<<endl;
    do
    {
    cout<<"Jumlah baris = "; cin>>baris;
    cout<<"Jumlah kolom = "; cin>>kolom;
    }
    while((baris>10)||(kolom>10));
    cout<<"\nMatrix A" <<endl;
    for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++)
        {
        cout<<"Data ["<<i<<","<<j<<"] = ";
        cin>>m1[i][j];
        }}
for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++)
        {
        cout<<m1[i][j]<<" ";
        }
        cout<<endl;
        }
for(i=0;i<baris;i++){
        for(j=0;j<kolom;j++)
        {
        cout<<m1[j][i]<<" ";
        }
        cout<<endl;
        }
        }
     int main(int argc, char *argv[]){
         aku();

    system("PAUSE");
    return EXIT_SUCCESS;

}

