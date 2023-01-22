#include <iostream>
#include <bitset>
using namespace std;
 
int main() {
	std::bitset<8> bits("1111");
	std::cout << bits.to_ulong() << std::endl;
	return 0;
}