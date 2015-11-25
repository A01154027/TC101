#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main (){
  string Read;
  string masop;
  string ciumpg;
  string altmpg;
  int n = 57;
  float city;
  float avg_city = 0.0;
  float high;
  float avg_high = 0.0;
  float price;
  float avg_price = 0.0;

  ifstream read_file("93cars.dat.txt");
  if (read_file.is_open()){
    for (int i =0; i < 93; i++){
        getline(read_file, Read);
        mid_price = Read.substr(42,4);
        istringstream buffer(masop);
        buffer >> price;
        city_mpg = Read.substr(52,2);
        istringstream buffer2(ciumpg);
        buffer2 >> city;
        high_mpg = Read.substr(55,2);
        istringstream buffer3(altmpg);
        buffer3 >> high;
        avg_high = avg_high + high;
        avg_price = avg_price + price;
        avg_city = avg_city + city;
        getline(read_file, Read);
    }
    read_file.close();
  }else{
    cout << "Can't open the file, failed op." << endl;
  }
  avg_price = avg_price/93;
  avg_city = avg_city/93;
  avg_high = avg_high/93;
  cout << "This is the average midprice:" << avg_price << endl;
  cout << "This is the average city MPG: " << avg_city << endl;
  cout << "This is the average highway MPG: " << avg_high << endl;
  return 0;
}
