#include<iostream>
#include<vector>
using namespace std;

class Base
{
protected:
    Base()
    {
        cout<<"Base constructor\n";
    }
    ~Base()
    {
        cout<<"Base Destructor\n";
    }
};

class Der: Base
{
public:
    Der()
    {
        cout<<"Der constructor\n";
    }
    Der(const Der &r)
    {
        cout<<"Der copy constructor\n";
    }
    ~Der()
    {
        cout<<"Der Destructor\n";
    }
};
int main()
{
    vector<Der> v;
    //vector<Base> Base_vector; // Hata verir ��nk� constructor ve destructor protected' de

    Der d1;
    Der d2;
    Der d3;

    cout<<"\n\n";
    v.push_back(d1);//copy constructor �a��r�l�yor
    v.push_back(d2);
    v.push_back(d3);
    cout<<"\n\n";


}
