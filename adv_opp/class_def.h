#include <string>


#ifndef CLASS_DEF_H
#define CLASS_DEF_H

class student{


  public:
  student(int grade, int age, std::string name);
  int grade_;
  int age_;
  std::string name_;
  void printer();

};

class studentp{


  public:
  studentp(int grade, int age, std::string name);
  void printer();
  int getage();
  private:
  int grade_;
  int age_;
  std::string name_;

};

#endif
