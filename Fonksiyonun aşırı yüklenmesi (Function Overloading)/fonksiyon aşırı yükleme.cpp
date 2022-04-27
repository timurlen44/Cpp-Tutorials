#include<iostream>
using namespace std;
void func(void){
    cout<<"its void"<<endl;
}
double func(double d_data){
    cout<<"its double data = "<<d_data<<endl;
    return 1.25;
}
int func(int i_data){
    cout<<"its integer data = "<<i_data<<endl;
    return 125;
}
int main(){
	func();
	double d_data = func(55.25);
	cout<<"double return = "<<d_data<<endl;
	double i_data = func(25);
	cout<<"integer return = "<<i_data<<endl;
}
