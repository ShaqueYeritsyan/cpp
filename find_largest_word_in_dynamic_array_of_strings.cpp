//14. 1. Ստեղծել դինամիկ զանգված string տիպի տարրեր պահելու համար, և գտնել զանգվածի ամենաերկար բառը։
#include<iostream>

int main(void){
    std::string maxString = "";
    int size = 5;
    std::string *arr = new std::string[size] {"123", "1234", "12345", "123456", "1234567"};
    for(int i = 0; i < size; i++) {
        if (arr[i] > maxString) {
            maxString = arr [i];
        }  
    }
    std::cout<<maxString;  
    delete []arr;
    return 0;
}
