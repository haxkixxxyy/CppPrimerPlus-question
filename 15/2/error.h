// exc_mean.h  -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include<string>

class bad_hmean:public std::logic_error
{
public:
    bad_hmean(const std::string &s="invalid arguments: a = -b\n"):logic_error(s){}  //不能少这个默认构造函数
};

class bad_gmean:public std::logic_error
{
public:
    bad_gmean(const std::string &s="gmean() arguments should be >= 0\n"):logic_error(s){}
};