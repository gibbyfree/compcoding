#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     string hours = s.substr(0, 2);
     string ampm = s.substr(8, 9);
     string military;
     if(ampm == "PM") {
         if(hours == "12") {
             military = s.substr(0, 8);
         }
         else {
         int hrs = stoi(hours);
         hrs += 12;
         hours = to_string(hrs);
         military = hours + s.substr(2, 6);
         }
     }
     else {
         if(hours == "12") {
             military = "00" + s.substr(2, 6);
         }
         else {
            military = s.substr(0, 8);
         }
     }
     return military;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
