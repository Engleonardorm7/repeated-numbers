#include <iostream>
using namespace std;

int main(){
    int a[10] = {10, 1, 2, 33, 44, 64, 10, 2, 94, 10};
    int b;
    int counter=0;
    
    cout<<"type a number";
    cin>>b;
        
    for(int i = 0; i<10; i++){
       
	if(a[i]==b){
	counter++;
	}
        
    }
   	cout<<"the number is repeated "<<counter<<" times";
    return 0;
}
