#include <iostream>

//Örnek 1
class MyClass {
    int a, b;

public:
    MyClass(int i)
    {
        a = i;
        b = i;
    }
    void display()
    {
        std::cout << " a = " << a << " b = " << b << "\n";
    }
};

int main()
{
    MyClass object(10);
    object.display();

    // Single parameter conversion constructor is invoked.
    object = 20;
    object.display();
    return 0;
}


/*
//Örnek 2
class MyClass {
    int a, b;

public:
    MyClass(int i, int y)
    {
        a = i;
        b = y;
    }
    void display()
    {
        std::cout << " a = " << a << " b = " << b << "\n";
    }
};

int main()
{
    MyClass object(10, 20);
    object.display();

    // Multiple parameterized conversion constructor is invoked.
    object = { 30, 40 };
    object.display();
    return 0;
}
*/
/*
//Örnek 3
class MyClass {
    int a, b;

public:
    MyClass(int i, int y)
    {
        a = i;
        b = y;
    }
    void display()
    {
        std::cout << " a = " << a << " b = " << b << "\n";
    }
};

MyClass create_object(int x, int y)
{
return {x, y};
}

int main(){


MyClass c1 = create_object(5,6);
c1.display();

}
*/


/*
//Örnek 4
class MyClass {
    int a, b;

public:
    MyClass(int i, int y)
    {
        a = i;
        b = y;
    }
    void display()
    {
        std::cout << " a = " << a << " b = " << b << "\n";
    }
};
void display_object(MyClass obj)
{
obj.display();
}

int main(){


display_object({10, 20});

}
*/
