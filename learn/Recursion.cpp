#include <iostream>

/*
Recursion is a programming technique where a function invokes itself from within
break a complex concept into a repeatable single step

(iterative vs recursive)

advantages = less code and is cleaner useful fo sorting and searching algorithms

disadvantages = uses more memory which is slower
*/


//reucsively
int factorial(int num);

int main(){
    std::cout << factorial(10);
    return 0;
}

int factorial(int num){
    if(num>1){
        return num * factorial(num-1);
    }
    else{
        return 1;
    }
}

/* iteratively
~~~~~~~~~~~~~~~


int factorial(int num);

int main(){
    
    std::cout << factorial(10);
    return 0;
}

int factorial(int num);
    int factorial = 1;
    for(int i = 1; i <= num; i++){
        result = result*i;
    }

    return result;
}





*/