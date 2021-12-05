#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

class Arya{
public:

    void submit(){


ifstream sbt2("submit.dat");
if(!sbt2){
    cout<<"error";
    exit(0);
}

string c;
sbt2>>c;
sbt2.close();




ofstream sbt("submit.dat",ios::app);
if(!sbt){
    cout<<"error";
    exit(0);
}
while(true){
string s;
cin>>s;

if(s==c){
cout<<"error";
   }
    else if(s!=c){
sbt<<s;
break;

}
}
}

        void login(){
          ifstream sbt2("submit.dat");
if(!sbt2){
    cout<<"error";
    exit(0);
}

string c;
sbt2>>c;
sbt2.close();




ofstream sbt("submit.dat",ios::app);
if(!sbt){
    cout<<"error";
    exit(0);
}
while(true){
string s;
cin>>s;

if(s!=c){
cout<<"error";
   }
    else if(s==c){
cout<<"Welcome!";
break;
}
}
}



    };



int main()
{
Arya Class;
string sb;
cin>>sb;

if(sb=="submit"||sb=="Submit"){
    Class.submit();
}
else if(sb=="login"||sb=="Login"){
    Class.login();
}
else{
    cout<<"error";
}
    return 0;
}
