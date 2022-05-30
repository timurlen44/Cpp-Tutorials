#include <iostream>
using namespace std;
class myc{
	int mx, my ;
	public:
	void func();
	int foo();
	myc(){
		cout<<"ctor cagirildi adrr = "<<this<<endl;
	}
	~myc(){
		cout<<"desctor cagirildi adrr = "<<this<<endl;
	}

};

int main(){

	cout<<"sinifin boyutu = "<<sizeof(myc)<<endl;
    	/*
	//1) delete etmediðimiz müddetçe destructor çağırılmayacak ve belleği meşgul etmeye devam edecek
	auto c1 = new myc;
    	*/
	/*
	//2)
	auto c1 = new myc;
	delete c1;
	*/

	/*
	//3
	//20 tane ctor çağırılacak
	auto p{new myc[20]};
	delete[]p;
	*/
	/*
	//4
	int row = 4;
    	int col = 2;
    	int counter = 0;
    	int **ip = new int*[row];
    	for(int i = 0;i<row;i++){
       	 ip[i] = new int[col];
   	 }
    	for(int i = 0;i<row;i++){
     	   for(int j = 0;j<col;j++){
      	      ip[i][j] = ++counter;
      	  }
  	  }

  	  for(int i = 0;i<row;i++){
   	     for(int j = 0;j<col;j++){
   	         cout<< ip[i][j]<<" ";
     	   }
   	     cout<<endl;
   	 }
	 for(int i =0 ;i<row;i++){
        	delete ip[i];
    	 }
   	 delete ip;
	*/

}
