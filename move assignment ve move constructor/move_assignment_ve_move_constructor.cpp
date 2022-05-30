#include<iostream>
using namespace std;
class myintarray{
    private:
        int size;
        int *data;
    public:
        myintarray(int size){//constructor
            cout<<"constructor"<<endl;
            this->size = size;
            data = new int[size];
        }

        ~myintarray(){//destructor
            if(data != nullptr){
                delete[] data;
            }
        }
        myintarray(const myintarray& other){//copy constructor
            cout<<"copy constructor"<<endl;
            if(other.data == nullptr){
                return ;
            }
            data = new int[other.size];
            size = other.size;
            for(int i =0 ;i<size;i++){
                data[i] = other.data[i];
            }
        }

        myintarray& operator = (const myintarray& other){//copy assignment
            cout<<"copy assingment"<<endl;
            size = 0;
            if(data != nullptr){
                delete[] data;
            }
            if(other.data == nullptr){
                return *this;
            }
            data = new int[other.size];
            size = other.size;
            for(int i =0 ;i<size;i++){
                data[i] = other.data[i];
            }
            return *this;
        }
        myintarray(myintarray&& other){
            cout<<"move constructor"<<endl;
            size = other.size;
            data = other.data;

            other.size = 0;
            other.data = nullptr;
        }
        myintarray& operator = (myintarray&& other){//copy assingment
            cout<<"move assignment"<<endl;
            if(data != nullptr){
                delete[] data;
            }
            size = other.size;
            data = other.data;

            other.size = 0;
            other.data = nullptr;
            return *this;
        }

        void print_addr(){
            cout<<data<<endl;
        }
};
int main(){
    myintarray a1(5);//constructor
    myintarray a2 = a1;//copy constructor
    myintarray a3(7);//constructor
    a3 = a2;//copy assignment
    myintarray a4(a1);//copy constructor
    myintarray a5 = move(a1);//copy assignment
    a4 = move(a5);//move assignment
    myintarray a6(move(a2));//copy assignment

    a1.print_addr();// a1 deleted
    a2.print_addr();// a2 deleted
    a3.print_addr();
    a4.print_addr();
    a5.print_addr();// a5 deleted
    a6.print_addr();
    return 0;
}
