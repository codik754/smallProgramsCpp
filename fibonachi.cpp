//Ряд Фибоначи
#include <iostream>

void fibonachi(int amount){
   int n1 = 0;//первое число последовательности
   int n2 = 1;//второе число последовательности
   int temp = 0;//временная переменная
   for(int i=0; i<amount; i++){
      std::cout << n1 << "  ";
      temp = n1;
      n1 += n2;
      n2 = temp;
   }
   if(amount > 0) std::cout << std::endl;
}

int main(int argc, char** argv){
   int n = 0; //количество чисел
   std::cout << "Какое количество чисел показать: ";
   std::cin >> n;
   fibonachi(n);//вызываем функцию для вывода последовательности
   return 0;
}
