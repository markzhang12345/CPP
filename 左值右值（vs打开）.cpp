#include <iostream>
#include <string>

 
int main() {
    std::string source = "Hello, World!";
    std::string destination = std::move(source); // ʹ�� std::move �� source �ƶ��� destination
 
    std::cout << "Source: " << source << std::endl;          // source ���ڿ���Ϊ��
    std::cout << "Destination: " << destination << std::endl; // destination ����ԭʼ����
 
    return 0;
}
