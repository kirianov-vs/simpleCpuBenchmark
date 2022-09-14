#include <iostream> 
#include <fstream> 
#include <thread> 

void pi(int n)
{
    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i)
    {
        sum += sign / (2.0 * i + 1.0);
        sign *= -1;
    }
    double a = 4.0 * sum;
}
void benchmark()
{
    int piAccuracy = 25000000;
    std::thread thread_obj1(pi, piAccuracy);
    std::thread thread_obj2(pi, piAccuracy);
    std::thread thread_obj3(pi, piAccuracy);
    std::thread thread_obj4(pi, piAccuracy);
    std::thread thread_obj5(pi, piAccuracy);
    std::thread thread_obj6(pi, piAccuracy);
    std::thread thread_obj7(pi, piAccuracy);
    std::thread thread_obj8(pi, piAccuracy);
    std::thread thread_obj9(pi, piAccuracy);
    std::thread thread_obj10(pi, piAccuracy);
    std::thread thread_obj11(pi, piAccuracy);
    std::thread thread_obj12(pi, piAccuracy);
    std::thread thread_obj13(pi, piAccuracy);
    std::thread thread_obj14(pi, piAccuracy);
    std::thread thread_obj15(pi, piAccuracy);
    std::thread thread_obj16(pi, piAccuracy);
    std::thread thread_obj17(pi, piAccuracy);
    std::thread thread_obj18(pi, piAccuracy);
    std::thread thread_obj19(pi, piAccuracy);
    std::thread thread_obj20(pi, piAccuracy);
    std::thread thread_obj21(pi, piAccuracy);
    std::thread thread_obj22(pi, piAccuracy);
    std::thread thread_obj23(pi, piAccuracy);
    std::thread thread_obj24(pi, piAccuracy);
    std::thread thread_obj25(pi, piAccuracy);
    std::thread thread_obj26(pi, piAccuracy);
    std::thread thread_obj27(pi, piAccuracy);
    std::thread thread_obj28(pi, piAccuracy);
    std::thread thread_obj29(pi, piAccuracy);
    std::thread thread_obj30(pi, piAccuracy);
    std::thread thread_obj31(pi, piAccuracy);
    std::thread thread_obj32(pi, piAccuracy);
    thread_obj1.join();
    thread_obj2.join();
    thread_obj3.join();
    thread_obj4.join();
    thread_obj5.join();
    thread_obj6.join();
    thread_obj7.join();
    thread_obj8.join();
    thread_obj9.join();
    thread_obj10.join();
    thread_obj11.join();
    thread_obj12.join();
    thread_obj13.join();
    thread_obj14.join();
    thread_obj15.join();
    thread_obj16.join();
    thread_obj17.join();
    thread_obj18.join();
    thread_obj19.join();
    thread_obj20.join();
    thread_obj21.join();
    thread_obj22.join();
    thread_obj23.join();
    thread_obj24.join();
    thread_obj25.join();
    thread_obj26.join();
    thread_obj27.join();
    thread_obj28.join();
    thread_obj29.join();
    thread_obj30.join();
    thread_obj31.join();
    thread_obj32.join();
}

int main()
{
    std::cout << "Simple CPU benchmark based on number pi-calculating" << std::endl << std::endl;
    std::cout << "Supports up to 32 cpu threads" << std::endl << std::endl;
    int MAX_COUNT = 100;
    const auto processor_count = std::thread::hardware_concurrency();
    std::cout << "# of logical CPU's : " << processor_count << std::endl << std::endl;
    std::cout << "*** press ENTER to start benchmark ***" << std::endl;
    std::cin.get();
    if (!std::cin.fail())
    {
        std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
        for (uint64_t i = 0; i < MAX_COUNT; i++)
        {
            benchmark();
            std::cout << "pass " << i + 1 << " of " << MAX_COUNT << std::endl;
        }
        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
        std::cout << "Time elapsed = " << std::chrono::duration_cast<std::chrono::seconds>(end - begin).count() << "[s]" << std::endl;
    }
}