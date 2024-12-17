#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string text;
    double sum ,sum2;
    int i=0;
    while(getline(source,text)){
        sum += atof(text.c_str());
        sum2 += pow(atof(text.c_str()),2) ;

        //sumตัวแปรที่2 ตือ x1 ^2 + x2^2 + x3^2 ... xN^2
        i++;
    }
    cout << "Number of data = " << i << endl ;
    cout << setprecision(3);
    cout << "Mean = " << sum/i << endl;
    cout << "Standard deviation = " << sqrt((sum2/i)-pow((sum/i),2));
}


//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";


