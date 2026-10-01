#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string brand;
    int price;

    public:

    Vehicle(string brand,int price){
        this->brand=brand;
        this->price=price;
    }
};

class Car: public Vehicle{
    string model;
    public:

    Car(string b,int p,string model):Vehicle(b,p)
    {
        this->model=model;

    }

    void display()
    {
        cout<<"Car brand: "<<brand<<endl;
        cout<<"Car model: "<<model<<endl;
        cout<<"Car price: "<<price<<endl;
    }

};

int main()
{
    int price;
    string model,brand;
    cout<<"enter car brand : ";
    cin>>brand;

    cout<<"enter car model : ";
    cin>>model;

    cout<<"Enter car price : ";
    cin>>price;

    Car c(brand,model,price);

    c.display();
}