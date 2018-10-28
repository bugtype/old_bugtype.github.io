#include <iostream>


std::string change(std::string str) {
    std::string convertStr;
    for(char& chr : str)
    {
        if (chr == '1') { convertStr.push_back('#'); } else convertStr.push_back(' ');
    }
    return convertStr;
}
int main(int argc, char const *argv[])
{
    int8_t a[] = {9, 20, 28, 18, 11};
    int8_t b[] = {30, 1, 21, 17, 28};    
    for(int i=0;i<sizeof(a);i++){
        int x = (a[i]|b[i]);
        std::string binary = std::bitset<5>(x).to_string(); //to binary
        std::cout << change(binary) << std::endl;
    }
    return 0;
}