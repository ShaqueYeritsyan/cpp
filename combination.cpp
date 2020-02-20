#include <iostream>       
#include <thread>        

int factorial(int number, int& asnwer)
{
    for(int i=1;i<=number;i++){    
      asnwer=asnwer*i;    
    }
    return asnwer;
}

int main() 
{
    int n = 4;
    int k = 2;
    int result1 = 1, result2 = 1, result3 = 1;
    std::thread nF  (factorial,n, std::ref(result1));
    std::thread kF (factorial, k, std::ref(result2));
    std::thread nk (factorial, (n-k), std::ref(result3));
    nF.join();
    kF.join();
    nk.join();
    int c = result1/(result2*result3);
    std::cout << "C("<<n<<","<<k<<")=" << c;
  return 0;
}  