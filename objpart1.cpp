//objpart1.cpp
//widget part as an object

#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////
class part   //define class
{
private :
int modelnumber; //ID number of widget
int part number; // ID number of widget part
float cost;     //cost of part
public :

void setpart(int mn, int pn , float c)  //set data
{
modelnumber = mn;
partnumber= pn;
cost = c;
}
void showpart()
{
cout<<"Model "  <<modelnumber;
cout<<", part " <<partnumber;
cout<< ",costs $ " << cost <<endl;
}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
part part1;

part1.setpart(6244,373,217,554.5);
part1.showpart();
return 0;
}
