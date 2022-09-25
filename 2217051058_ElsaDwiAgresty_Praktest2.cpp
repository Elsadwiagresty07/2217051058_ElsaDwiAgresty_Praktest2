#include <iostream>
using namespace std;

int main(){
	
   //    jika input angka 1 maka output "satu"
  //   jika input angka 2 maka output "dua"
 //  jika input angka 3 maka output "tiga"
// jika input angka lebih besar dari 3 output"Bilangan lebih besar dari 3"
  
  
  int angka;
	cin>>angka;
	
	if(angka==1){
		cout<<"satu";
	}else if(angka==2){
		cout<<"dua";
	}else if(angka==3){
		cout<<"tiga";
	}else if(angka>3){
		cout<<"Bilangan lebih besar dari tiga";
	}
	
		return 0;
	
}