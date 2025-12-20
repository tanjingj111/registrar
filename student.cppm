// Module registrar, course partition: defines Student class
// File: student.cppm   Version: 1.0      License: AGPLv3
// Created: Wei Gong open-src@qq.com      2025-12-12
//
// Description:
//     The interface and implementation of Student class are logically separated.

// Change Log:
//     [v1.1] Wei Gong open-src@qq.com   2025-12-12
//         * added the implementation of Student class

export module registrar:student;
import std;

using std::string; using std::vector;

export class Student
{
public:
    Student(string id, string name);
    /*~Student();//析构函数 5规则
    Student(const Student& other);//复制构造函数 5规则
    Student& operator=(const Student& other);//复制赋值函数 5规则
    Student(Student&& other);//移动复制
    Student& operator=(Student&& other);//移动赋值
    */void enrollsIn(class Course* course);
    string schedule();
    string info();
    bool hasId(string id);

private:
    string m_name;
    string m_id;

    vector<class Course*> _courses;
};

// ----- Partial implementation of class Student -----

Student::Student(string id, string name)
    : m_name(name)//(std::move(name);
    , m_id(id)//std::move(id);
{}

/*
//析构函数
Student::Student()
{
    _courses.clear();
}


//复制构造
student::Student(const Student& other)
    :m_id(other.m_id)
    ,m_name(other.m_name)
    ,_courses(other._courses)
{}

//复制赋值
Student::Student::operator=(const Student& other){
    if(this == &other)     // 判断是否是同一对象的赋值
        return *this;
    m_id = other.m_id;
    m_name = other,m_name;
    _courses = other._courses;
    return *this;
}

//移动构造
Student::Student(Student&& other)
    :m_id(std::move(other.m_id))
    ,m_name(std::move(other.m_name))
    ,_course(std::move(other._courses))
{
    //other._courses.clear();
}

//移动赋值
Student& Student::operator=(Student&& other){
    if(this == &other)    // 判断是否是同一对象的赋值
        return *this;
    :m_id(std::move(other.m_id))
    ,m_name(std::move(other.m_name))
    ,_course(std::move(other._courses))
    //other._courses.clear();
    return *this;
}
*/

string Student::info()
{
    return format("{}   {}\n", m_id, m_name);
}

bool Student::hasId(string id)
{
    return id == m_id;
}
