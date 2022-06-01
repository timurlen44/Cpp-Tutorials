#include <iostream>
using namespace std;
class number{
    private:
    int num;
    public:
    number(int num):num(num){

    }

    void display()const{
        cout<<num<<endl;
    }

    bool operator==(const number &other){
        return this->num == other.num;
    }

    bool operator<(const number &other){
        return this->num<other.num;
    }

    bool operator>(const number &other){
        return this->num>other.num;
    }

};

int main(){
    number n1 = {5};
    number n2 = {5};
    number n3 = {10};

    // == operator
    if(n1 == n2){
        cout<<"n1 ve n2 esit."<<endl;
    }
    else{
        cout<<"n1 ve n2 esit degil."<<endl;
    }

    if(n2 == n3){
        cout<<"n2 ve n3 esit."<<endl;
    }
    else{
        cout<<"n2 ve n3 esit degil."<<endl;
    }


    // > operator
    if(n1>n3){
        cout<<"n1, n3' den buyuk"<<endl;
    }
    else{
        cout<<"n1, n3' den buyuk degil"<<endl;
    }

    // < operator
    if(n2<n3){
        cout<<"n2, n3' den kucuk"<<endl;
    }
    else{
        cout<<"n2, n3' den kucuk degil"<<endl;
    }






    return 0;
}
