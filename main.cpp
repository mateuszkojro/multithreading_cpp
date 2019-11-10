#include <thread>
#include <iostream>

void  foo(int x){
    for (int i = 0; i < 10;++i){
        std::cout << x <<"  " << i << std::endl;
    }
    

}




int main(){

    std::thread thread1(foo,1);
    std::thread thread2(foo,2);    

    thread1.join();
    thread2.join();

    return 0;
}