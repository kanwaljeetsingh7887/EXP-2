 # EXP 2

## Aim:
**To study and implement C++ Program Structure (Data Types).**

## **Software:** 
Microsoft VSCode


## Theory:
_Data types define the type of data that a variable can hold, such as `integers`, `floating-point numbers`, `characters`, and more. We can also find the size of these data types by using `sizeof` keyword. These data types can be subdivided into three parts which are as follows_
+ **Basic Datatype**
+ **Derived Datatype**
+ **User-Defined Datatype**


 Storage class in C++ determines the characteristics of a variable.
C++ has 5 types of storage classes which are as follows:
+ **Auto**
+ **Extern**
+ **Mutable**
+ **Register**
+ **Static**


## Code: 2A
```
//KANWALJEET SINGH
//ENTC B2
//EXP 2A
//23070123124
#include <iostream>
using namespace std;
int main() {
    cout << "size of char: " << sizeof(char) << " byte" << endl;
    cout << "size of int: " << sizeof(int) << " byte" << endl;
    cout << "size of float: " << sizeof(float) << " byte" << endl;
    cout << "size of double: " << sizeof(double) << " byte" << endl;
    cout << "size of short int: " << sizeof(short int) << "byte" << endl;
    cout << "size of long int: " << sizeof(long int) << "byte" << endl;
    cout << "size of unsigned char: " << sizeof(unsigned char) << "byte" << endl;
    cout << "size of signed char: " << sizeof(signed char) << "byte" << endl;
    cout << "size of unsigned int: " << sizeof(unsigned int) << "byte" << endl;
    cout << "size of signed int: " << sizeof(signed int) << "byte" << endl;
    cout << "size of unsigned long int: " << sizeof(unsigned long int) << "byte" << endl;
    cout << "size of signed long int: " << sizeof(signed long int) << "byte" << endl;
    cout << "size of unsigned short int: " << sizeof(unsigned short int) << "byte" << endl;
    cout << "size of signed short int: " << sizeof(signed short int) << "byte" << endl;
    cout << "size of unsigned long long int: " << sizeof(unsigned long long int) << "byte" << endl;
    cout << "size of bool: " << sizeof(bool) << "byte" << endl;
    return 0;
}
```

## Output:
![image](https://github.com/user-attachments/assets/18f0965a-798c-4c60-a040-517787a788e2)

## Code: 2B
```
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
```
## Output:
![image](https://github.com/user-attachments/assets/5b68d0c6-fdbf-4527-a2b6-840776e78b76)


## Code: 2C
```
//KANWALJEET SINGH
//ENTC B2
//EXP 2C
//23070123124
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number: ";                       
    cin>>a;
    cout<<"\nInteger= "<<a<<" and size is "<<sizeof(a)<<" bytes.";  

    register int b;
    cout<<"\nEnter a number: ";                                     
    cin>>b;
    cout<<"\nRegister= "<<b<<" and size is "<<sizeof(b)<<" bytes.";   

    static int d;
    cout<<"\nEnter any number: ";                                      
    cin>>d;
    cout<<"\nStatic= "<<d<<" and size is "<<sizeof(d)<<" bytes.";      

    return 0;
}
```

## Output:
![image](https://github.com/user-attachments/assets/7d622fab-7273-4c8b-8041-b527ee8dbde1)

## Conclusion:
By studying and implementing various data types in C++, you build a strong foundation in how the language handles data and memory. This knowledge is essential for writing efficient and effective C++ programs. Practicing with real-world examples and exploring advanced concepts like dynamic memory allocation will deepen your understanding and prepare you for more complex programming challenges.






