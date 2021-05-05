#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

char* GetName()
{
    return "Cherno";
}

class Device {};

class DeviceManager
{
private:
    std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
    const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const
    {
        return m_Devices;
    }
};

int main()
{
    std::vector<std::string> strings;
    strings.push_back("Apple");
    strings.push_back("Orange");

    for (auto it = strings.begin();
            it != strings.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // three ways for definition
    // using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;
    // typedef std::unordered_map<std::string, std::vector<Device*>> DeviceMap;
    // const std::unordered_map<std::string, std::vector<Device*>> &
    //    devices = dm.GetDevices();

    DeviceManager dm;
    const auto&
        devices = dm.GetDevices();
    return 0;
}