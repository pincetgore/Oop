//Создать класс Person (человек) с полями: имя, возраст, пол и вес.
//Определить методы переназначения имени, изменения возраста и веса.
//Создать производный класс Student (студент), имеющий поле года обучения.
//Определить методы переназначения и увеличения этого значения.
//Создать счетчик количества созданных студентов. В функции main() создать несколько (не больше трёх) студентов.
//Вывести информацию о них.

#include <iostream>
#include <string>

using namespace std;

//Task1
class Person {
protected:
    string name;
    int age;
    char gender;
    float weight;

public:
    Person(){}

    void SetName (string _name = "Noname"){
        cout << "Enter person's name: " << endl;
        cin >> _name;
        name = _name;
    }

    void SetAge (int _age = 0){
        cout << "Enter person's age: " << endl;
        cin >> _age;
        age = _age;
    }

    char SetGender (char _gender = 'X')
    {
            while (true)
            {
            cout << "Enter person's gender (M/F): " << endl;
            cin >> _gender;
            if (_gender == 'F' || _gender == 'M'){
                gender = _gender;
                return _gender;}
            else
                cout << "There are only two genders! Try again." << endl;
            }
    }

    void SetWeight (float _weight = '0'){
        cout << "Enter person's weight: " << endl;
        cin >> _weight;
        weight = _weight;
    }

    void printHuman (){
        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << "\nWeight: " << weight << endl;
    }
};

class Student : public Person {
    int year;
    inline static int counter = 0;

public:
    Student():Person(){
        counter++;
    }

    void setYear (int _year = 0){
        cout << "Enter a year: " << endl;
        cin >> _year;
        year = _year++;
    }

    void printStudent (){
        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << "\nWeight: " << weight << "\nYear: " << year << endl;
    }

    static void printAmmount(){
        cout << "Ammount of students: " << counter << endl;
    }

};


//Task2
//Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт).
//У Fruit есть две переменные-члена: name (имя) и color (цвет).
//Добавить новый класс GrannySmith, который наследует класс Apple.

class Fruit {
    string m_name;
    string m_color;
public:
    void setName (string name) {
        m_name = name;
    }

    void setColor (string color) {
        m_color = color;
    }

    string getName () {return m_name;}
    string getColor () {return m_color;}

};

class Apple : public Fruit {
public:
    Apple (string color){
    setName("apple");
    setColor (color);
    }
};

class Banana : public Fruit {
public:
    Banana (string color){
    setName("banana");
    setColor (color);
    }
};

class GrannySmith : public Apple {
public:
    GrannySmith(string color)
    {
        setName("Granny Smith " + Apple::getName());
    }
};

int main()
{
//task1
//    Student firstStudent, secondStudent, thirdStudent;
//    firstStudent.SetName();
//    firstStudent.SetAge();
//    firstStudent.SetGender();
//    firstStudent.SetWeight();
//    firstStudent.setYear();

//    secondStudent.SetName();
//    secondStudent.SetAge();
//    secondStudent.SetGender();
//    secondStudent.SetWeight();
//    secondStudent.setYear();

//    thirdStudent.SetName();
//    thirdStudent.SetAge();
//    thirdStudent.SetGender();
//    thirdStudent.SetWeight();
//    thirdStudent.setYear();

//    firstStudent.printStudent();
//    secondStudent.printStudent();
//    thirdStudent.printStudent();
//    Student::printAmmount();

//task2
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

//task3
//    1.	Класс Человек с потомками Игрок (играющий, соперник, дилер)
//    2.	Класс Колода с потомками Карты (номинал, масть, стоимость очков)
//    3.	Класс Действие с потомками Вариант (Hit, Stand, Split, Double, Surrender), Проверка на выйгрыш
//    4.    Класс Игра с потомками Текущая игра, Текущий дилер, текущий игрок

    return 0;
}

