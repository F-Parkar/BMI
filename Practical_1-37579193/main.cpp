#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   cout << "BMI CALCULATOR" << endl;

   cout << endl;

   cout << "1. Weight in pounds and height in inches" << endl;
   cout << "2. Weight in kilograms and height in meters" << endl;

   cout << endl;

   int choice;
   cout << "Choice: ";
   cin >> choice;

  cout << endl;

   while(choice != 1 && choice != 2){
         cout << "Invalid choice! Please enter valid choice: ";
         cin >> choice;
   }

   float weight , height , BMI;

   if(choice == 1){
        cout << "Weight in pounds?: ";
        cin >> weight;

        cout << endl;

        cout << "Height in inches?: ";
        cin >> height;

        BMI = (weight * 703) / (height * height);
        BMI = round(BMI * 10.0) / 10.0;

       cout << endl;
       cout << endl;

        cout << "Result.............." << endl;

        cout << endl;

        cout << "Weight: \t" << weight << " pounds" << endl;
        cout << "Height: \t" << height << " inches" << endl;
        cout << "BMI: \t\t" << BMI << endl;

   } else if(choice == 2){
       cout << "Weight in kilograms (KG)?: ";
        cin >> weight;

        cout << endl;

        cout << "Height in meters (m)?: ";
        cin >> height;

        BMI = weight / (height * height);
        BMI = round(BMI * 10.0) / 10.0;

        cout << endl;
        cout << endl;

        cout << "Result.............." << endl;
        cout << endl;

        cout << "Weight: \t" << weight << " kg" << endl;
        cout << "Height: \t" << height << " m" << endl;
        cout << "BMI: \t\t" << BMI << endl;
   }

   if(BMI >= 30) {
        cout << "Status: \tObese";

   } else if(BMI < 30 && BMI >= 25 ){
       cout << "Status: \tOverweight";

   } else if(BMI < 25 && BMI >= 18.5){
       cout << "Status: \tNormal";

   } else {
       cout << "Status: \tUnderweight";

   }

    return 0;
}
