//KANWALJEET SINGH
//ENTC B2
//EXP 2B
//23070123124
#include<iostream>
using namespace std;
int main() {
    int a;
    char b;
    signed char c;
    unsigned char d;
    float e;
    double f;
    long double g;
    bool h;
    cout<<"Enter an integer: ";                     
    cin>>a;
    cout<<"Size of int is:"<<sizeof(a)<<"\n";        

    cout<<"Enter a character: ";                   
    cin>>b;
    cout<<"Size of char is:"<<sizeof(b)<<"\n";        

    cout<<"Enter a character: ";                    
    cin>>c;
    cout<<"Size of signed char is:"<<sizeof(c)<<"\n";     

    cout<<"Enter a character: ";                        
    cin>>d;
    cout<<"Size of unsigned char is:"<<sizeof(d)<<"\n";  

    cout<<"Enter a number: ";                             
    cin>>e;
    cout<<"Size of float is:"<<sizeof(e)<<"\n";           
    

    cout<<"Enter a number: ";                            
    cin>>f;
    cout<<"Size of double is:"<<sizeof(f)<<"\n";         

    cout<<"Enter a number: ";                           
    cin>>g;
    cout<<"Size of long double is:"<<sizeof(g)<<"\n";   

    cout<<"Enter a bool value: ";                      
    cin>>h;
    cout<<"Size of bool is:"<<sizeof(h)<<"\n";            
return 0;
}