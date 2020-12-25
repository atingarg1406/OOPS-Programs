// Create two classes DM and DB which store the value of distances. DM stores distances in metres and centimeters and DB in feet and inches.
// Write a program that can read values for the class objects and add one object of DM with another object of DB.
// Use a friend function to carry out the addition operation.
// The object that stores the results maybe a DM object or DB objects, depending on the units in which the results are required.
// The display should be in the format of feet and inches or metres and cenitmetres depending on the object on display.


#include<iostream>
using namespace std;
class DB;
class DM
{
 float m ,cm ;
 public:
    DM()
    {
     m =0;
     cm = 0;

    }
    DM(float x , float y)
    {
        m = x;
        cm = y;
    }
    void getdata()
 {
  cout<<"\nEnter the distance in(meter-centimeter):";
  cin>>m>>cm;
 }

        void display()
        {
            cout<< "\n in meter : "<<(int)m<<"  In centimeter : "<<cm;

        }
    friend void add(DM x  , DB y);
};
class DB
{
    float feet ,  inches;
 public:
    DB()
    {
       feet  =0 ;
        inches =0;
    }
    DB (float x , float y )
    {
        feet  = x ;
        inches = y;
    }
        void getdata()
     {
      cout<<"\nEnter the distance in(feet-inch):";
      cin>>feet>>inches;
     }
        void display()
        {
            cout<<" \n In feet : "<<(int)feet<<" In inches : "<<inches;

        }
    friend  void add(DM  x , DB y);
};
  void add (DM  x  , DB  y)
{
    int ch;
 cout<<"\nPress 1 for meter-centi:";
 cout<<"\nPress 2 for feet-inch:";
 cout<<"\nEnter your choice:";
 cin>>ch;
 if(ch==2)
 {
     DB temp;
      temp.feet = x.m*3.2804 + x.cm*0.0324 + y.feet + y.inches*(1/12);
  int ft = temp.feet;
  double decpart = temp.feet - ft;
  temp.inches = decpart*12;
  temp.display();
 }
 if(ch==1)
{
    DM temp;
   temp.m = y.feet*0.305 + y.inches*0.0254 + x.m + x.cm*(0.01);
   int mt = temp.m;
   double decpart1 = temp.m-mt;
   temp.cm  = decpart1*100;
   temp.display();
}

}
int main()
{
    DM obj1 ;
    obj1.getdata();

    DB obj2;
    obj2.getdata();
    add(obj1,obj2);
}
