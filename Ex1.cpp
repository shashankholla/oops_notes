#include<iostream.h>
Class alpha{
int commonA;
public:
alpha(){}
alpha(int x)
{
  commonA = X;
 }
int getvalue(){

  cout<<" Counstructor Called "<<endl;
  return commonA;
 }
};
class beta
{
int commonB;
public:
 beta(){}
 beta(int x)
 {
     commonB = x;
 }
beta(alpha temp)
{
    commonB = temp.getvalue();
}
};

int main()
{
    alpha obj(10);
    beta objb = obja;
}