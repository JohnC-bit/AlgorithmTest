#include<iostream>

template<typename T>
T addTwoNum(T a, T b){
    return a+b;
}

int factorialNumber(int n){
    if (n == 1)
    {
        return 1;
    }else{
        return n*factorialNumber(n-1);
    }
}

int fibonacci(int n){
    if (n == 1)
    {
        return 0;
    }else if (n == 2)
    {
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

void reverseString(std::string &s, int left, int right){
    if(left >= right){
        return;
    }

    std::swap(s[left],s[right]);

    reverseString(s, left+1, right -1);
}



int main(){

    std::string testString;
    std::cin >> testString;
    reverseString(testString, 0, testString.length() - 1);
    std::cout << testString << std::endl;
    return 0;
}