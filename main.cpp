#include <thread>
#include <iostream>

#define t

void  foo(int x){
    long long unsigned int wynik =0;
    for (int i = 0; i < 2000000000;++i){
        wynik += i;
    }
    
    std::cout << x << " " << wynik << std::endl;

}

#ifdef t


int main(){

    foo(1);
    foo(2);
    foo(3);
    foo(4);

    return 0;
}

#endif

#ifndef t

int main(){

    std::thread thread1(foo,1);
    std::thread thread2(foo,2);
    std::thread thread3(foo,2);    
    std::thread thread4(foo,2);

    thread1.join();
    thread2.join();
    thread3.join();
    thread4.join();

    return 0;
}

#endif