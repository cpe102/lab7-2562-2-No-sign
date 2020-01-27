#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int age,high;
long asset;
string status;
int main(){
	cout<<"Input age:";
	cin>>age;
	while(1){
	
	if(age<=20){
		cin.ignore();
		cout<<"Input high:";
		cin>>high;
		if(high<160){
			status="UNFRIEND";
		break;
		}
		else if(high<175){
			status="FRIEND";
			break;
		}
		else{
		cin.ignore();
		cout<<"Input asset:";
		cin>>asset;
		if(asset>69000000){
			status="MARRIED";
			break;
		}
		else{
			status="ONE-NIGHT-STAND";
			break;
		}
		}
	}
	else if(age<30){
		cin.ignore();
		cout<<"Input asset:";
		cin>>asset;
		if(asset>10000000){
			status="BEST FRIEND";
			break;
		}
		else{
			status="UNFRIEND";
		}
	}
	else{
		status="UNFRIEND";
		break;
	}
	
	break;
}
	cout<<status;
	return 0;
}
