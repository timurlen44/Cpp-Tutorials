#include<iostream>
using namespace std;
class sinif{
	int i;
	double d;
	public:
		sinif():i(1),d(2.2){
			cout<<"constructor of sinif cagirildi"<<endl;
		}
		sinif(const sinif &r):i(r.i*2),d(r.d*2){//copy constructor ' ımızı kendimiz yazdık ilk değer verme işlemini MIL sektansı ile yazdık !!!
					cout<<"copy constructor durumu meydaana geldi"<<endl;
		}
		~sinif(){
			cout<<"destructor cagirildi"<<endl;
		}
		void display()const{
			cout<<"i = "<<i<<endl<<"d = "<<d<<endl;
		}
};

int main(){
	sinif s1;
	sinif s2(s1);
    sinif s3(s2);


cout<<"s1:"<< endl;
    cout<<"-----------"<<endl;
	s1.display();
	cout<<"-----------"<<endl<<endl;

	cout<<"s2:"<< endl;
	cout<<"-----------"<<endl;
	s2.display();
	cout<<"-----------"<<endl<<endl;

    cout<<"s3:"<< endl;
    cout<<"-----------"<<endl;
	s3.display();
	cout<<"-----------"<<endl<<endl;

}
