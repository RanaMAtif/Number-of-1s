#include <iostream>
#include <array>
using namespace std;

int getOnes(int number)
{ 
     int count =0;
    for (int i=number;i>0;i>>=1)
    {
                
        if ((i & 1) == 1)
        {
            count += 1;

        }
       
    }
    return count;

}
int main()

{
    int number{0};
    cout << "Enter integer of which you want to find the number of 1s :";
    cin >> number;
    int ones = getOnes(number);
    cout << "Number of 1s in " << number << " are " << ones;
}
