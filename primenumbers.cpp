//Выводится список определенного количества простых 
//чисел, заданного пользователем.
#include <iostream>

//Еще одна проверка на простоту
bool isOtherPrime(const int n){
   for(int i=2; i < n-1; i++)
      if(n % i == 0) return false; 
   return true;
}

int main(int argc, char** argv){
   int m = 0;
   std::cout << "Сколько чисел показать: ";
   std::cin >> m;
   int i = 0;
   int j = 2;
   while(i < m){
     if(isOtherPrime(j)){
         std::cout << j << "   ";
         i++;
     }
     j++;
   }
   std::cout << std::endl;
   return 0;
}
