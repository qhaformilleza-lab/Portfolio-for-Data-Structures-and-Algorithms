#include <iostream>
#include <string>
#include "stackarray.h"
#include "queuelist.h"

bool checkPalindrome(std::string number){

    for(int i=0; i<(int)number.length(); i++){
        pushStack(number[i]);
        enqueue(number[i]);
    }

    bool answer=true;

    while(isEmptyQueue()==false){
        char fromStack=popStack();
        char fromQueue=dequeue();

        if(fromStack!=fromQueue)
            answer=false;
    }

    return answer;
}

int main(){

    std::string vals[5]={"10201", "1003003001", "88", "0", "202"};

    std::cout<<"Premade set of values\n";
    for(int i=0;i<5;i++){

        bool result=checkPalindrome(vals[i]);

        std::cout<<vals[i]<<" -> ";
        if(result==true){
            std::cout<<"Palindrome"<<std::endl;
        }
        else{
            std::cout<<"Not a Palindrome"<<std::endl;
        }
    }

    std::cout<<"\nPalindrome checker\n";
    std::string input;
    std::cout<<"enter number: ";
    std::cin>>input;

    bool res=checkPalindrome(input);
    if(res==true){
        std::cout<<input<<" is a Palindrome"<<std::endl;
    }
    else{
        std::cout<<input<<" is Not a Palindrome"<<std::endl;
    }

    return 0;
}