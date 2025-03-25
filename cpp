Question No:4.1
#include<iostream>
using namespace std;
int main()
{
 int n=10;
char ch='A';
cout<<"Display a message and value of integer and character variables::";
cout<<n;
cout<<ch;
return 0;
}


Question No:4.2
#include<iostream>
using namespace std;
int main()
{
float a;
float b;
cout<<"Enter first number::";
cin>>a;
cout<<"Enter second number::";
cin>>b;
float c=a+b;
cout<<"Sum is::"<<c;
return 0;
}


Question No:4.3
#include<iostream>
using namespace std;
int main()
{
cout<<"Enter a lenght::";
float len,h;
cin>>len;
cout<<"Enter a height::";
cin>>h;
float square=len*h;
cout<<"Area of square is::"<<square;
return 0;
}


Question No::4.4
#include<iostream>
using namespace std;
int main()
{
cout<<"*\n**\n***\n****\n";
return 0;
}


Question No::4.5
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
cout<<"Example of Manipulator in C++"<<endl;
cout<<setw(10)<<"Name"<<setw(10)<<"Age"<<setw(20)<<"Distinaction"<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<setw(10)<<"Wasif"<<setw(10)<<"18"<<setw(20)<<"Game Developer"<<endl;
cout<<setw(10)<<"Husnain"<<setw(10)<<"19"<<setw(20)<<"Web Developer"<<endl;
cout<<setw(10)<<"Masroor"<<setw(10)<<"18"<<setw(20)<<"Cyber Security"<<endl;
cout<<"----------------------------------------------"<<endl;
return 0;
}



Question No::4.6
#include <iostream>
#include <iomanip> // Required for setw and setprecision manipulators
using namespace std;
int main() {
float r,a=132.364,b=26.91;
r=a/b;
cout<<setprecision(6)<<r<<endl;
cout<<setprecision(5)<<r<<endl;
cout<<setprecision(4)<<r<<endl;
cout<<setprecision(3)<<r<<endl;
cout<<setprecision(2)<<r<<endl;
cout<<setprecision(1)<<r<<endl;
return 0;
}


Question No::4.7
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
char str[]="OOP using C++";
cout<<setw(30)<<setfill('*')<<str<<endl;
cout<<setw(30)<<setfill('$')<<str<<endl;
cout<<setw(30)<<setfill('#')<<str<<endl;
return 0;
}


Question No::4.8
#include <iostream>
using namespace std;
int main() {
float principle,rate,time;
cout<<"Enter principle amount::";
cin>>principle;
cout<<"Enter rate::";
cin>>rate;
cout<<"Enter time::";
cin>>time;
float simpleinterest=(principle*rate*time)/100;
cout<<"Simple interest is::"<<simpleinterest<<endl;
return 0;
}


Question No::4.9
#include <iostream>
using namespace std;
int main() {
char character;
cout<<"Enter a character::";
cin>>character;
cout<<"ASCII code is::"<<character<<":"<<int(character)<<endl;
return 0;
}


Question No::4.10
#include<iostream>
using namespace std;
int main()
{
   int div,dis,q,r;
   cout<<"Enter a dividend and divisior::";
    cin>>div>>dis;
    q=div/dis;
    r=div%dis;
    cout<<"Quotient is::"<<q<<endl;
    cout<<"Remindar is::"<<r<<endl;
    return 0;
}


Question No::4.11
#include<iostream>
using namespace std;
int main()
{
   int a,b,temp;
    cout<<"Enter first number::";
    cin>>a;
    cout<<"Enter second number::";
    cin>>b;
    cout<<"Before swaping the value::"<<a <<" and "<<b <<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swaping the value ::"<<a <<" and "<<b <<endl;
    return 0;
}


Question No::4.12
#include<iostream>
using namespace std;
int main()
{
   int x,y;
    cout<<"enter first number::";
    cin>>x;
    cout<<"Enter second number::";
    cin>>y;
    cout<<"The original value in x ="<<x<<"and y="<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After swaping value in x ="<<x<<"and y="<<y<<endl;
    return 0;
}

Question No::4.13
#include<iostream>
using namespace std;
int main()
{
  double  distance,time,speed;
  cout<<"Enter a distance::";
  cin>>distance;
  cout<<"Enter a speed of vehicle::";
  cin>>speed;
  time=distance/speed;
  cout<<"Time required to reached the destination::"<<time<<endl;
  return 0;
}


Question No::4.14
#include<iostream>
using namespace std;
int main()
{
float base,height,area;
cout<<"Enter base::";
cin>>base;
cout<<"Enter height::";
cin>>height;
area=0.5*base*height;
cout<<"Total Area is::"<<area<<endl;
return 0;
}



Question No::15
#include<iostream>
using namespace std;
int main()
{
  int sec,h,m,s;
  cout<<"Enter time in second::";
  cin>>sec;
  h=sec/3600;
  sec=sec%3600;
  m=sec/60;
  s=sec%60;
  cout<<"\n HH:MM:SS is::"<<h<<":"<<m<<":"<<s<<endl;
  return 0;      
}

Question No::16
#include<iostream>
using namespace std;
int main()
{
  float cel,f;
  cout<<"Enter a celsius::";
  cin>>cel;
  f=9.0/5.0*cel+32;
  cout<<"Temperature in farhenite::"<<f<<endl;
  return 0; 
}

Question No::17
#include<iostream>
using namespace std;
int main()
{
  int height;
  float cent;
  cout<<"Enter height ::";
  cin>>height;
   cent=2.54*height;
   cout<<"Height from inches to centimeters::"<<cent;
   return 0;
}

Question No::18
#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
   float area,r,cir;
    cout<<"Enter radius::";
    cin>>r;
    area=r*r*3.141;
    cir=2.0*3.141*r;
    cout<<"Area is::"<<area<<endl;
    cout<<"Circumference is::"<<cir<<endl;
    return 0;
}

Question No::19
#include<iostream>
using namespace std;
int main()
{
   int vi,vf,a,t;
    cout<<"Enter the initial Velocity::";
    cin>>vi;
   cout<<"Enter acceleartion::";
   cin>>a;
   cout<<"Enter time::";
   cin>>t;
   vf=vi+a*t;
   cout<<"Final Velocity is::"<<vf;
   return 0;
}


Question No::20
#include<iostream>
using namespace std;
int main()
{
  int n,a,b;
  cout<<"Enter any three integer number::";
  cin>>n;
  a=n/100;
  n=n%100;
  b=n/10;
  n=n%10;
  cout<<"Reverse Number is::"<<n<<b<<a;
  return 0;
}

Question No::21
#include<iostream>
using namespace std;
int main()
{
  int n,a,b,c,d;
  cout<<"Enter any five integer numbers::";
  cin>>n;
  a=n/10000;
  n=n%10000;
  b=n/1000;
  n=n%1000;
  c=n/100;
  n=n%100;
  d=n/10;
  n=n%10;
  cout<<"Reverse order is::"<<n<<d<<c<<b<<a;
  return 0;
}
  
Question No::22
#include<iostream>
using namespace std;
int main()
{
  int ev,odd,r;
  cout<<"Enter an even number::";
  cin>>ev;
  cout<<"Enter an odd number::";
 cin>>odd;
  r=1000-((ev*5)+(odd*3));
  cout<<"Difference is::"<<r;
 return 0;
}

Question No::23
#include<iostream>
using namespace std;
int main()
{
  int n=10;
  cout<<n<<endl;
  n*=2;
  cout<<n<<endl;
  cout<<--n;
  return 0;
}

Question No::24
#include<iostream>
using namespace std;
int main()
{
  int hrs,w,d;
  cout<<"Enter number of hours::";
  cin>>hrs;
  w=hrs/168;
  hrs=hrs%168;
d=hrs/24;
hrs=hrs%24;
cout<<"Week ::"<<w<<endl;
cout<<"Day::"<<d<<endl;
cout<<"Hours::"<<hrs;
return 0;
}

Question No::25
#include<iostream>
using namespace std;
int main()
{
  float e1,e2,g1,g2,p1,p2;
  cout<<"Enter current electricity rate:";
  cin>>e1;
  cout<<"Enter current gas rate:";
  cin>>g1;
  cout<<"Enter current petrol rate:";
  cin>>p1;
  e2=e1*1.1;
  g2=g1*1.1;
  p2=p1*1.1;
  cout<<"New electricity rate:"<<e2<<endl;
  cout<<"New gas rate:"<<g2<<endl;
  cout<<"New petrol rate::"<<p2;
  return 0;
}

Question No::26
#include<iostream>
using namespace std;
int main()
{
  cout<<"C"<<endl;
  cout<<"O M"<<endl;
  cout<<"P U T"<<endl;
  cout<<"E R I S"<<endl;
  cout<<"A W O R L"<<endl;
  cout<<"D O F S"<<endl;
  cout<<"C I E"<<endl;
  cout<<"N C"<<endl;
  cout<<"E"<<endl;
  return 0;
}

Question No::27
#include<iostream>
using namespace std;
int main()
{
  cout<<"--------"<<endl;
  cout<<"--------"<<endl;
  cout<<"--------"<<endl;
  cout<<"--------"<<endl;
  cout<<"--------"<<endl;
  cout<<"--------"<<endl;
  cout<<"--------"<<endl;
  cout<<"---------"<<endl;
  cout<<"--------"<<endl;
  return 0;
}



Programming Exercise

Question No::01
#include <iostream>
using namespace std;
int main() {
   cout << "This is the first line::"<<endl;
   cout << "Integer value: " << 42 << endl;
    cout << "Floating point value: :" << 3.14 << endl;
    cout << "End of the program::";
    return 0;
}

Question No::02
#include <iostream>
#define PI 3.141
using namespace std;
int main() {
   float radius, area, circumference;
   cout << "Enter radius of the sphere:: ";
   cin >> radius;
   area = 4 * PI * radius * radius;
   circumference = (4.0/3.0)* PI*radius* radius*radius;
    cout << "Surface Area:: " << area << endl;
   cout << "Volume ::" << circumference << endl;
   return 0;
}

Question NO::03
#include <iostream>
#include <cmath>
using namespace std;
int main() {
   float a,b,c,s,area;
   cout<<"Enter sides a, b, and c of the triangle: ";
   cin>>a>>b>>c;
   s=(a+ b+c)/ 2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
   cout<<"Area of the triangle::"<<area<<endl;
   return 0;
}

Question No::04
#include <iostream>
using namespace std;
int main() {
   float miles,kilometers;
   cout<<"Enter distance in miles: ";
   cin>>miles;
   kilometers=miles*1.609;
   cout << "Distance in kilometers::"<<kilometers<<endl;
   return 0;
}

Question No::05
#include <iostream>
using namespace std;
int main(){
   float a,b,c,d,sum,avg,product;
   cout << "Enter four numbers:: ";
   cin >> a >> b>>c>>d;
   sum = a + b + c + d;
   avg = sum / 4;
   product = a * b * c * d;
   cout << "Sum = " << sum << ", Average = " << avg << ", Product = " << product << endl;
   return 0;
}

Question No::06
#include <iostream>
using namespace std;
int main() {
   int age;
   cout << "Enter age in years: ";
   cin >> age;
   cout << "Age in months = " << age * 12 << endl;
   cout << "Age in days = " << age * 365 << endl;
   return 0;
}

Question No::07
#include <iostream>
using namespace std;
int main() {
   int num;
   cout << "Enter a number: ";
   cin >> num;
   cout << "Square = " << num * num << endl;
   cout << "Cube = " << num * num * num << endl;
   return 0;
}
Question No::25
#include<iostream>
#include<math.hs>
using namespace std;
int main()
{
  float principle,rate, time;
  cout<<"Enter principle amount::";
  cin>>principle;
  cout<<"Enter rate of interest::";
  cin>>rate;
  cout<<"Enter total time::";
  cin>>time;
  float comp=principle*pow(1+(rate/100),time)-principle;
  cout<<"Compound Interest::"<<comp;
  return 0;
}

Question N0::20
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter positive number::";
  cin>>n;
  cout<<log2(n);
  return 0;
}
