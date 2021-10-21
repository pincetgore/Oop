#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;

//task1
class Power {
    float first =5.2;
    float second = 4.6;

public:
    void set_numbers(float s_first, float s_second) {
        first = s_first;
        second = s_second;
    }

    float calculate (float s_first, float s_second){
        return pow (s_first,s_second);
    }
};
//

//task2
class RGBA {
private:
    uint8_t m_red = 0;
    uint8_t m_green = 0;
    uint8_t m_blue = 0;
    uint8_t m_alpha = 255;

public:
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) {
        m_red = red;
        m_green = green;
        m_blue = blue;
        m_alpha = alpha;
    }

//    int getRed() { return m_red; }
//    int getGreen() { return m_green; }
//    int getBlue() { return m_blue; }
//    int getAlpha() { return m_alpha; }

    void print (){
        cout << "Code red = " << m_red << "; Code green = " << m_green << "; Code blue = " << m_blue << "; Code alpha = " << m_alpha;
    }
};
//

//task3
class Stack{
private:
    int arr [9];
    int length;

public:
Stack() {}

    void reset(){
        while (length)
            arr[length--] = 0;
    }

    bool push(int num){
        if (length > 9)
            return false;
        else
            arr[length++] = num;

        return true;
    }

    int pop(){
        if (length == 0)
                return false;
        length --;
        return arr[length];
    }

    void print(){
        for (int j = 0; j<length; j++){
            cout << arr [j];
        }
    }


};

int main()
{
//    RGBA color (3,4,5,6);
//    color.print();
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();




    return 0;
}
