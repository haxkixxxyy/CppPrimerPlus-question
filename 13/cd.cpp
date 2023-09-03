#include"cd.h"
#include<cstring>
#include<iostream>
using namespace std;

Cd::Cd(const char * s1,const char *s2,int n,double x){
    performers=new char[strlen(s1)+1];
    strcpy(performers,s1);
    label=new char[strlen(s2)+1];
    strcpy(label,s2);
    selections=n;//收到第三节课
    playtime=x;
}

Cd::Cd(const Cd &d){
    performers=new char[strlen(d.performers)+1];
    strcpy(performers,d.performers);
    label=new char[strlen(d.label)+1];
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;  
}

void Cd::Report() const{
    cout<<"performers :"<<performers<<"\n";
    cout<<"label :"<<label<<"\n";
    cout<<"selection :"<<selections<<"\n";
    cout<<"playtime :"<<playtime<<"\n";
}

Cd & Cd::operator=(const Cd &d){
    if(this==&d) return *this;
    performers=new char[strlen(d.performers)+1];
    strcpy(performers,d.performers);
    label=new char[strlen(d.label)+1];
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
    return *this; 
}

Classic::Classic(const char *w,const char * s1,const char *s2,int n,double x) : Cd(s1,s2,n,x)
{
    strcpy(works,w);
}

Classic::Classic(char *w,Cd & c) : Cd(c)
{
    strcpy(works,w);
}

void Classic::Report() const
{
    Cd::Report();
    cout<<"works : "<<works<<"\n";
}

Classic::Classic(const Classic &d){
    works=new char[strlen(d.works)+1];
    strcpy(works,d.works);
}

Classic::~Classic(){
    delete []works;
}

Classic & Classic::operator=(const Classic &d){
    if(this==&d) return *this;
    works=new char[strlen(d.works)+1];
    strcpy(works,d.works); 
    return *this;   
}