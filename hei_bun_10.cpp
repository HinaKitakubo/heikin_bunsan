#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iomanip>
#include <random>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
   std::ifstream stream("./Az_kikaku_n1000_10.dat");
   string line;

   int row = 0;
   int col;
   int i = 1;
   int j;
   
   double data[10241][11];
   const string delim = " ";

   double Az;
   double bun = 0.;
   double ave;
   double bunsan;

   while ( getline(stream, line) ) {   //"Az_kikaku_n*.dat"を数列として格納する
      col = 0;
      for ( string::size_type spos, epos = 0;
          (spos = line.find_first_not_of(delim, epos)) != string::npos;) {
             string token = line.substr(spos,(epos = line.find_first_of(delim, spos))-spos);
             data[row][col++] = stod(token);
      }
      ++row;
   }

   while( i < 10241 + 1 ){    //1行ずつに対する処理を10241行分行う
      double sum = 0.;

      for(j=1;j<11;j++){      
          Az = data[i-1][j];
          sum += Az;
      }

       ave = sum/10.;                    //平均値
       double sum_bunsan = 0.;
      
       for(j=1;j<11;j++){
          bun = (data[i-1][j] - ave) * (data[i-1][j] - ave);
          sum_bunsan += bun;
       }

       bunsan = sqrt(sum_bunsan/10.);    //分散値

       std::cout << data[i-1][0] << " " << ave << " " << bunsan << std::endl;
       i++;
   }

   return 0;
}
