//Рялд обратных квадратов
#include <iostream>

//Класс дробей
class Fraction{
public:
   int num; //числитель
   int den; //знаменатель

   //Конструктор по умолчанию
   Fraction() : num(1), den(1) {}
   //Конструктор с параметрами
   Fraction(const int n1, const int n2){
      num = n1;
      den = n2;
   }


   //Метод для отображения значений дроби
   void show(){
      if(num % den != 0)
         std::cout << num << "/" << den;
      else
         std::cout << num/den;
   }

   //Метод для установки значения
   void setn(const int n1, const int n2){
      num = n1;
      den = n2;
   }
};

int main(int argc, char** argv){
   int amount=0; //переменная для количетсва элементов ряда
   Fraction A; //объект класса дроби
   std::cout << "Какое количество элементов ряда показать: ";
   std::cin >> amount;
   for(int i=1; i<=amount; i++){
      A.setn(1, i*i);
      A.show();
      std::cout << "  ";
   }
   std::cout << std::endl;
   return 0;
}
