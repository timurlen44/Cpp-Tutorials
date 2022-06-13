#include<iostream>
#include<string>
using namespace std;
/*
Template bir class týr
compile time' da çalýþýr
vector class' ý sayesinde implement edilir
operator overloading vardýr
iterator oluþturabiliriz [auto i = s.begin(), i++ ]
size_type => unsigned type
C++ 11 ile eklenmiþtir
*/
int main(){
    string s;//vector derived class
    basic_string<char> bs;

    s.push_back('E');
    s.push_back('m');
    s.push_back('i');
    s.push_back('n');
    s.push_back(' ');

    s += 'T';
    s += 'A';
    s += 'N';
    s += 'I';
    s += 'K';


    cout<<"Length of string: "<<s.size()<<endl;
    cout<<"Capacity of string: "<<s.capacity()<<endl;

    cout<<s<<endl;

    string s2("0123456789");
    string s3(s2,2,3);
    cout<<s3<<endl;

    string::size_type index = s2.find('3');
    if(index == string::npos){
        cout<<"3 bulunmuyor\n";
    }
    else{
        cout<<"3 bulunuyor\n";
    }
     string::size_type index2 = s2.find('A');
    if(index2 == string::npos){
        cout<<"A bulunmuyor\n";
    }
    else{
        cout<<"A bulunuyor\n";
    }
    string EminStr("Emin");
    try
    {
        cout<<EminStr[120]<<endl;

    }
    catch(exception &r)
    {
        cout<<"Error captured!"<<endl;
        cout<<"Error! "<<r.what() <<endl;
    }

    try
    {
        cout<<EminStr.at(120)<<endl;
    }
    catch(const std::exception &e)
    {
        cout<<"Error captured!"<<endl;
        std::cerr<<"Error! "<<e.what() <<endl;
    }

    string s5 = "Muhammed Emin TANIK";
    cout<<"substr s5: "<<s5.substr(9,4)<<endl;
    string s6 = "Yahya Emre TANIK";

    s6.swap(s5);

    cout<<"s5: "<<s5<<endl;
    cout<<"s6: "<<s6<<endl<<endl;

    string s7(s6);

    if(s5 == s6)
    {
        cout<<"s5 and s6 are equal!\n";
    }
    else
    {
        cout<<"s5 and s6 are not equal\n";
    }


    if(s6 == s7)
    {
        cout<<"s6 and s7 are equal!\n";
    }
    else
    {
        cout<<"s6 and s7 are not equal\n";
    }
    return 0;
}
