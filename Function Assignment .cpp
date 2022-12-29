#include<iostream>
using namespace std;
void both_No();
int argument_no();
void return_no(int i);
int both(int b);

int main()
{
    cout<<"case No One "<<endl;
    cout<<"No Argument And No return "<<endl;
    both_No();
    cout<<"____________________________________"<<endl;


    cout<<"case No Two "<<endl;
    cout<<"OLY  Return Value "<<endl;
    int c;
    c=argument_no();
    if(c%2==0)
    cout<<"Even number. : "<<c<<endl;
    else 
    cout<<"Odd number.  : "<<c<<endl;
    cout<<"____________________________________"<<endl,
    
    
    cout<<"case  No  Three.   "<<endl;
    cout<<"OLY Argument  "<<endl;
    int i;
    cout<<"Enter your number.   : ";
    cin>>i;
    return_no(i);
    cout<<"____________________________________"<<endl;
    
    
    cout<<"Case No  Four.  "<<endl;
    cout<<"Argument AND Return BOTH  "<<endl;
    int d,b;
    d= both(b);
    if(d==0)
    cout<<"Even number.  : "<<endl;
    else 
    cout<<"Odd number.   : "<<endl;
    cout<<"____________________________________"<<endl;
    
    
}
  

//_______________________________________
//            All Function     
//_______________________________________


// For case one ...!!!..
//"No Argument And No return "

void both_No()
{ 
  int a;
  cout <<"Enter your number.  : ";
  cin>>a;
  if (a%2==0)
  cout<<"Even number. : "<<a<<endl;
  else 
  cout<<"Odd number.  : "<<a<<endl;

}
//_____________________________________



//. For case No TWO... !!!..
//"OLY  Return Value "

int argument_no()
{
 int b;
 cout<<"Enter your number. " ;
 cin>>b;
 return b;

}
//______________________________________



 //.  For Case No Three.   ...!!!...
//  OLY Argument  "

void return_no(int i)
{
 if(i%2==0)
 cout<<"Even number.  : "<<i<<endl;
else 
 cout<<"Odd number.  : "<<i<<endl;

}
//_______________________________________



//.  For Case No Four. ...!!!...
//.  "Case No  Four.  "

int both(int b)
{
  
  cout<<"Enter your number.   : ";
  cin>>b;
  
  return (b%2);

}
