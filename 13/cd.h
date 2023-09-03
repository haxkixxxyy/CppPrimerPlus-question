#ifndef CD_H
#define CD_H

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(const char * s1="none",const char *s2="none",int n=0,double x=0);
    Cd(const Cd &d);
    ~Cd(){
        delete []performers;
        delete []label;
    };
    virtual void Report() const;
    Cd & operator=(const Cd &d);
};

class Classic :public Cd
{
private:
    char *works;
public:
    Classic(const char *w="none",const char * s1="none",const char *s2="none",int n=0,double x=0);
    Classic(char *w,Cd & c);
    void Report() const;
    Classic(const Classic &d);
    ~Classic();
    Classic & operator=(const Classic &Classic);
};

#endif