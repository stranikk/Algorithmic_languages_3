#include <iostream>
#include <vector>
#include <mutex>
#include <thread>
template<typename T>
class lock_guard{
private:
    mutable T m;
public:
    lock_guard(T k){
        k=m.lock();
    }
    ~lock_guard(){
        m.unlock();
    }
};
std::mutex mutex;
std::vector<int> x;
void thread_func1()
{
    lock_guard<std::mutex> lock(mutex);
    x.push_back(0);
}
void thread_func2()
{
    std::lock_guard<std::mutex> lock(mutex);
    x.pop_back();
}
int main(){

    std::thread th1(thread_func1);
    std::thread th2(thread_func2);
    
    th1.join();
    th2.join();

    return 0;
}
