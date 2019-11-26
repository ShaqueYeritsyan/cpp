//14. 1. Ստեղծել դինամիկ զանգված string տիպի տարրեր պահելու համար, և գտնել զանգվածի ամենաերկար բառը։
#include<iostream>

int main(void){
    std::string maxString = "";
    int size = 5;
    std::string *arr = new std::string[size];
    arr[0] = "123";
    arr[1] = "1234";
    arr[2] = "12345";
    arr[3] = "123456";
    arr[4] = "1234567";
    for(int i = 0; i < 5; i++) {
        if (arr[i] > maxString) {
            maxString = arr [i];
        }  
    }
    std::cout<<maxString;  
    delete []arr;
    return 0;
}
