#include <stdio.h>
#include <iostream>
template<typename Type, typename Type2>

class TemplateClass

{
public:
    TemplateClass(Type number1, Type2 number2) : number1(number1), number2(number2) {}

    Type Min()
    {
        if (number1 < number2)
        {
            return static_cast<Type>(number1);
        }
        else {
            return static_cast<Type2>(number2);
        }
    };
private:
    Type  number1;
    Type2 number2;
};

int main() {




    //�N���X������^���l����<>�̒����`���悤 /
    TemplateClass<int, float> intFloatTemplate(10, 50.0f);
    TemplateClass<int, double> intDoubleTemplate(80, 13.0);
    TemplateClass<float, int > floatIntTemplate(2.0f, 9);
    TemplateClass<float, double > floatDoubleTemplate(11.0f, 3.5);
    TemplateClass<double, int > doubleIntTemplate(666.0, 333);
    TemplateClass<double, float > doubleFloatTemplate(435.8, 563.5f);

    std::cout << "int(10)�@�� float(50.0f) ���ׂď�����������\���F" << intFloatTemplate.Min() << std::endl;
    std::cout << "int(80)�@�� double(13.0) ���ׂď�����������\���F" << intDoubleTemplate.Min() << std::endl;
    std::cout << "float(2.0f)�@�� int(9) ���ׂď�����������\���F" << floatIntTemplate.Min() << std::endl;
    std::cout << "float(11.0f)�@�� double(3.5) ���ׂď�����������\���F" << floatDoubleTemplate.Min() << std::endl;
    std::cout << "double(666.0)�@�� int(333) ���ׂď�����������\���F" << doubleIntTemplate.Min() << std::endl;
    std::cout << "double(435.8)�@�� float(563.5) ���ׂď�����������\���F" << doubleFloatTemplate.Min() << std::endl;

    return 0;
}