#include<iostream>
using namespace std;

int main(){
    
    int num,even=0,odd=0;
do
{
    cout << "Enter an integer: ";
    cin >> num;

    if (num%2==0 && num!=0){
     
     even++;
    } 

    if (num%2!=0) {
     odd++;
    }
} while (num != 0);

    
cout << "#Even numbers = "<<even<<endl;
cout << "#Odd numbers = "<<odd;
    return 0;
}
