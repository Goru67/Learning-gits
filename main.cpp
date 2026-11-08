#include<iostream>
using namespace std;
int main(){
    string message;

    cout<<
    "================\n";
    cout<<"my Ai robot\n";
    while(true){
        cout <<"you\n";
        getline(cin,message);
       // if(message=="bye"){
          //  cout<<"Robo:GOOdbye,Friend\n";
          //  break;
      //  }
        // if(message=="hello"){
          //  cout<<"Robo:Hello how are you Friend\n";
            //break;
        //}
        if(message=="ram ram"){
            cout<<"Robo:ram ram bhai ji\n";
            
        }
         else if(message=="hello"){
            cout<<"Robo:Hello how are you Friend\n";
            
         }
      //  else if(message=="ram ram"){
          //  cout<<"Robo:ram ram bhai ji\n";
    //    }
        else if(message=="All good "){
            cout<<"Robo:All good bro\n";
            
        }
        else if(message=="bye"){
            cout<<"Robo:bye best friend\n";
            break;
        }


    }
    return 0;
}