#include <iostream>
#include <string>
#include <bitset>

int main() {
  // Обчислення 94+BE в двійковій системі
  std::bitset<8> a("10010100");
  std::bitset<8> b("10111110");
  std::bitset<8> sum = a.to_ulong() + b.to_ulong();
  std::cout << "94+BE = " << std::hex << sum.to_ulong() << std::endl;

  // Обчислення A6-E2 в двійковій системі
  std::bitset<8> c("10100110");
  std::bitset<8> d("11100010");
  std::bitset<8> diff = c.to_ulong() - d.to_ulong();
  std::cout << "A6-E2 = " << std::hex << diff.to_ulong() << std::endl;

  // Обчислення F56E + AE43 в двійковій системі
  std::bitset<16> e("1111010101101110");
  std::bitset<16> f("1010111001000011");
  std::bitset<16> sum2 = e.to_ulong() + f.to_ulong();
  std::cout << "F56E + AE43 = " << std::hex << sum2.to_ulong() << std::endl;

  // Обчислення F56E - AE43 в двійковій системі
  std::bitset<16> g("1111010101101110");
  std::bitset<16> h("1010111001000011");
  std::bitset<16> diff2 = g.to_ulong() - h.to_ulong();
  std::cout << "F56E - AE43 = " << std::hex << diff2.to_ulong() << std::endl;

  return 0;
}