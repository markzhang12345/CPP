#include <iostream>
#include <string>

 
int main() {
    std::string source = "Hello, World!";
    std::string destination = std::move(source); // 使用 std::move 将 source 移动到 destination
 
    std::cout << "Source: " << source << std::endl;          // source 现在可能为空
    std::cout << "Destination: " << destination << std::endl; // destination 包含原始内容
 
    return 0;
}
