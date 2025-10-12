#include<iostream>


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


int main(){
    
    return 0;
}