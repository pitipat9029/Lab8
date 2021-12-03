#include <iostream>
#include <string>
using namespace std ;


int main()
{
    string name ;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n" ;
    cout << "?????: ";
    getline(cin,name);
    
    int id   ;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." ;
    cout << "\nFahsai: I think you are an Engineering student. What is your student ID?\n" ;
    cout << name << ": " ;
    cin >> id  ;
    cout << "Fahsai: I think you may be GEAR " << int(id/1e7) - 12 << "." << " I have a free movie ticket for you." ;
    cout << "\nFahsai: Let's go to the cinema together!!!" ;

    string movie ;
    cout << "\nFahsai: What movie do you want to watch?\n" ;
    cout << name << ": " ;
    cin.ignore() ;
    getline(cin,movie) ;
    
    string date ;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": " ;
    getline(cin,date) ;

    string M ;
    cout << "Fahsai: "<< date << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n" ;
    cout << name << ": " ;
    getline(cin,M) ;
    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/" ;

    return 0 ;
    
}






