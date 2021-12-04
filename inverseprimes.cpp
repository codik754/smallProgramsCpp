//Ряд обратных простых чисел

#include <iostream>

//Еще одна проверка на простоту
bool isOtherPrime(const int n){ 
   for(int i=2; i < n-1; i++)
      if(n % i == 0) return false; 
   return true;
}

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
   Fraction F;
   int m;
   std::cout << "Сколько членов ряда показать: ";
   std::cin >> m;
   int i = 0;
   int j = 2;
   while(i<m){
      if(isOtherPrime(j)){
         F.setn(1, j);
         F.show();
         std::cout << "  ";
         i++;
      }
      j++;
   }
   std::cout << std::endl;
   return 0;
}
