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
    std::thread myThreads[32];
    int piAccuracy = 25000000;
    for (int i = 0; i < 32; i++)
    {
        myThreads[i] = std::thread(pi, piAccuracy);
    }
    for (int i = 0; i < 32; i++)
    {
        myThreads[i].join();
    }
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