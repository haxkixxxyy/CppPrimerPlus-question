#include<iostream>
#include"stringxx.h"
int main(){
    String ss;
    String s1(" and I am a C++ student.");  //括号内的内容是一个常量
    String s2="Please enter your name: ";
    String s3;
    cout<<s2;
    cin>>s3;
    s2="My name is "+s3;
    cout<<s2<<".\n";
    s2=s2+s1;
    s2.Stringup();
    cout<<"the string\n"<<s2<<"\ncontains "<<s2.has('A')
        <<" 'A' characters in it.\n";
    s1="red";
    String rgb[3]={String(s1),String("green"),String("blue")};
    cout<<"enter the name of a primary color for mixing light: ";
    String ans;
    bool success=false;
    while(cin>>ans){
        ans.Stringlow();
        for(int i=0;i<3;i++){
            if(ans==rgb[i]){
                cout<<"that's right!\n";
                success=true;
                break;
            }
        }
        if(success) break;
        else cout<<"try again!\n";
    }
    cout<<"bye!\n";
    return 0;
}