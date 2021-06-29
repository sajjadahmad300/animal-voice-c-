#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;
class Animal
{
public:
    virtual int sound()
    {
        cout<<"i am animal"<<endl;
        return 0;
    }

};
class Cat:public Animal
{
    public:
    int sound()
 {

  cout<<"meaoo meaoo "<<endl;
      PlaySound(TEXT("cat.wav"), NULL, SND_ASYNC);// - the correct code
    int test = 0;
    cin>>test;
    return 0;
 }
};
class Dog: public Animal
{
public :
int  sound()
    {
        cout<<" baoo baoo "<<endl;
        PlaySound(TEXT("dog.wav"), NULL, SND_ASYNC);// - the correct code
    int pass = 0;
    cin>>pass;
return 0;
    }
};


int   main()
{
 Animal *A;
 Cat c;
 A=&c;
 A->sound();
  Dog d;
 A=&d;
 A->sound();
return 0;
}
