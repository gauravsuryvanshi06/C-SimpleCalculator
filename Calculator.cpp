/*

Problem statement



*/



#include<iostream>
#include<cmath>
#include<conio.h>
#include<math.h>

using namespace std;

void arithmetic(){
	int option= 0;
	float A = 0;
	float B = 0;
	
	cout<<"Select opeartion\n";
	cout<<"[1] Addition\n";
	cout<<"[2] Substraction\n";
	cout<<"[3] Product\n";
	cout<<"[4] Division\n";


	cin>>option;
	cout<<"Enter the number:";
	cin>>A;
	
	cout<<"Enter second number:";
	cin>>B;
	
	cout<<"Result: ";
	
	switch(option){
		case 1:
			cout<<(A+B);
			break;
		case 2:
			cout<<(A-B);
			break;
		case 3:
			cout<<(A*B);
			break;
		case 4:
			cout<<(A/B);
			break;
		default:
			cout<<"Invalid operation";
			break;
	}
	cout<< endl;
}

void trignometric(){
	int option = 0;
	float val = 0.0;
	cout<<"Select\n";
	cout<<"[1] Sine\n";
	cout<<"[2] Cosine\n";
	cout<<"Op: ";
	cin>>option;
	cout<<"Enter value: ";
	cin>>val;
	if(option == 1){
		cout<<sin(val);
	}
	else if(option == 2){
		cout<<cos(val);
	}
	else{
		cout<<"Invalid operation";
	}
	cout<<endl;
}
// function to find the exponent.
void exponential(){
	float base = 0.0;
	float expo = 0.0;
	
	cout<<"Enter base:";
	cin>>base;
	cout<<"\nEnter expnent: ";
	cin>>expo;
	cout<<pow(base, expo)<<endl;
}

void logarithmic(){
	float value = 0.0;
	cout<<"\nEnter the value to calculate the log(e): ";
	cin>>value;
	cout<<log(value)<<endl;
}

void factorial()
{
int n;
cout<<"Enter number and get it's factorial(!) :";
  cin>>n;
  long int fact=1;
  if(n>=0){
  for (int i=2;i<=n;i++){
	  fact=fact*i;
  }
  
  cout<<"\nFactorial Is :"<<fact<<endl;}
  else{
	  cout<<"invalid input(Enter +ve number) \n" ;
	  factorial();
  }
 }


 class complex

int main(){
	int select = 0;
	char choice = 'y';

	cout<<"Advanced Calculator\n";

	cout<<"[1] Arithmetic\n";
	cout<<"[2] Trignometric\n";
	cout<<"[3] Exponential\n";
	cout<<"[4] Logarithmic\n";
	cout<<"[5] Factorial\n";
	cout<<"[6] Complex numbers";
	cout<<"Your choice:";

	while(choice == 'y'){
		cout<<"Enter the type of operation you want to calculate\n";
		cin>>select;
		
		switch(select){
			case 1:
				 arithmetic();
				break;
			case 2:
				trignometric();
				break;
			case 3:
			   exponential();
				break;
			case 4:
				logarithmic();
				break;
			case 5:
			  factorial();
			  break;
			case 6:
			  complex();
			  break;
			default:
				cout<<"Invalid Operation";
		}
		cout<<"Do you want to continue? y/n"<<endl;
		cin>>choice;
		if(choice == 'n'){
			break;
		}
	}		
	return 0;
}
