#include <iostream>
#include <thread>

static bool s_Finished = false;

void Dowork()
{
    using namespace std::literals::chrono_literals;

    std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

    while (!s_Finished)
    {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(1s);
    }
}

int main()
{
    std::thread worker(Dowork);

    std::cin.get();
    s_Finished = true;

    worker.join();
    std::cout << "Finished." << std::endl;

    std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;
    return 0;
}