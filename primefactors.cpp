//Разложение числа на простые множители
#include <iostream>
#include <vector>

int main(int argc, char** argv){
   int m = 0;
   std::cout << "Введите число: ";
   std::cin >> m;
   std::vector<int> v;
   int n = 2;
   int j = 0;
   while(m != 1){
      if(m % n == 0){
         v.push_back(n);
         m /= n;
         j++;
      }else
         n++;  
   }
   for(std::vector<int>::const_iterator i=v.begin(); i!=v.end();i++)
      std::cout << *i << " ";
   std::cout << std::endl;
   return 0;
}
