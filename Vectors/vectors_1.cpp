#include <iostream>
#include <vector>

using namespace std;

//Vektors == linked list
int main(){
    vector <int> v1;// linked list // runtime' da içinde tuttuðu tür belli oluyor.
    for (int i = 0;i<=5;i++){
        v1.push_back(i);
    }
    cout<<"---------------------------\n";
    for (auto i = v1.begin();i != v1.end();i++){//normal halde baþlangýçtan sona
        printf("Address: %d  -> ",i);
        cout<<"Value: "<<*i<<endl;
    }
    cout<<"---------------------------\n";

    for (auto i = v1.rbegin();i != v1.rend();i++){//sondan baþa
        printf("Address: %d  -> ",i);
        cout<<"Value: "<<*i<<endl;
    }
    cout<<"---------------------------\n";

    for (auto i = v1.cbegin();i != v1.cend();i++){ // cbegin yaptýðýmýzda dönen deðer con st oluyor ve üzerinden oyanama yapamýyoruz ama normal begin ya da rbegin de hem okuma yapýp hemde yazma yapabiliyoruz.
        printf("Address: %d  -> ",i);
        cout<<"Value: "<<*i<<endl;
    }
    cout<<"---------------------------\n";

    for (auto i = v1.crbegin();i != v1.crend();i++){//sondan baþa ve constant
        printf("Address: %d  -> ",i);
        cout<<"Value: "<<*i<<endl;
    }
    cout<<"---------------------------\n";


    cout<<"Size of vector: "<<v1.size()<<"\n";
    cout<<"Capacity of vector: "<<v1.capacity()<<"\n";
    cout<<"Max size of vector: "<<v1.max_size()<<"\n";
    cout<<"---------------------------\n";

    v1.resize(3);
    cout<<"New size of vector: "<<v1.size()<<"\n";
    cout<<"New capacity of vector: "<<v1.capacity()<<"\n";
    cout<<"New max size of vector: "<<v1.max_size()<<"\n";
    cout<<"---------------------------\n";

    if(v1.empty() == true)
    {
        cout<<"Vector is empty!" <<endl;
    }
    else
    {
        cout<<"Vector is not empty!" <<endl;
    }
    cout<<"---------------------------\n";

    cout << v1.at(0) << " ";
    cout << v1.at(1) << " ";
    cout << v1.at(2) << " \n";
    cout<<"---------------------------\n";

    cout << v1[0] << " ";//operator overloanding // v1.operator[](int index)
    cout << v1[1] << " ";//operator overloanding
    cout << v1[2] << " \n";//operator overloanding
    cout<<"---------------------------\n";
    cout<<"First element of vector: "<<v1.front()<<endl;
    cout<<"Last element of vector: "<<v1.back()<<endl;
    cout<<"---------------------------\n";

    int *iptr = v1.data();
    cout<<"*iptr = "<<*iptr<<endl;
    return 0;
}
