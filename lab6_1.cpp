#include<iostream>
using namespace std;

int main(){
    int Even_numbers =0;
    int Odd_numbers =0;
    int N=1;
    while (N!=0){
        cout << "Enter an integer: ";
        cin >> N;
        if (N!=0){
            if(N%2==0){
                Even_numbers+=1; 
            }else{
                Odd_numbers+=1;
            }
        }
    
    } 
    cout<<"#Even numbers = "<<Even_numbers<<"\n";
    cout<<"#Odd numbers =  "<<Odd_numbers<<"\n";
    return 0;
}
