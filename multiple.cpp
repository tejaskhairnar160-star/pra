#include<iostream>
using namespace std;

class Phone{
    protected:
    int phoneNo;

    public:

    void getPhoneNo(){

        cout<<"Enter phone number: ";
        cin>>phoneNo;
    }

};

class Camera{
    protected:
    int megaPixel;

    public:
    void getMegaPixel(){

        cout<<"Enter mega pixel: ";
        cin>>megaPixel;
    }
};

class SmartCameraPhone: public Phone,public Camera{

    int price;

    public:
    void getPrice()
    {
        cout<<"Enter price: ";
        cin>>price;
    }

    void display()
    {
        cout<<"\n\nPhone no: "<<phoneNo<<endl;
        cout<<"Mega pixel: "<<megaPixel<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main()
{
    SmartCameraPhone scp;
    
    scp.getPhoneNo();
    scp.getMegaPixel();
    scp.getPrice();

    scp.display();
}