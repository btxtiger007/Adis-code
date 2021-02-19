#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
    public:

    int a,b,choice;


    void show()
   {
       cout<<"Choice of operation:"<<endl;
       cout<<"1.Addition"<<endl;
       cout<<"2.Subtraction"<<endl;
       cout<<"3.Division"<<endl;
       cout<<"4.Multiplication"<<endl;
       cout<<"**************************************"<<endl;


   }
    void getdata()
    {   
        cout<<"Enter 2 no for operation"<<endl;
        cout<<"Enter 1st number:"<<endl;
        cin>>a;
        cout<<"Enter 2nd number:"<<endl;
        cin>>a;
    }


};
 class derived : public Base
 {
 public:
     int sum;


     void show1()
     {
         cout<<"Enter the choice Number:"<<endl;
         cin>>choice;

         if(choice<=4)
        {
         switch (choice)
         {
          case 1:cout<<"Addition is :"<<endl;
                    sum=a+b;
                    cout<<sum;
             /* code */
             break;
          case 2:cout<<"Subtraction :"<<endl;
                    sum=a-b;
                    cout<<sum;
          
             break;
             case 3:cout<<"Division is:"<<endl;
                    sum=a/b;
                    cout<<sum;
          
             break;
             case 4:cout<<"Multiplication is:"<<endl;
                    sum=a*b;
                    cout<<sum;
          
             break;
         }

        }

         else
         cout<<"Enter valid Number"<<endl;

     }
  };
 int main()
 {
     derived obj;
     obj.show();
     obj.getdata();
     obj.show1();
 }

 