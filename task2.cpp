#include<iostream>
using namespace std;

int mod_factorial(int n)
{
    // the only diff i want from a factorial is that 0! = 0, not 1...
    if (n<=0) {return 0;}
    else if (n==1) {return 1;}
    else {return n*mod_factorial(n-1);}
}

int main()
{
    unsigned int i = 0,j = 0; // the loop iterating numbers
    unsigned int n = 0,k = 0; // the numbers in the question
    int pos = -1, count = 0; 
        // pos is the latest position of the non-asked character (position starts from zero)
        // count is the number of substrings
    cin>>n>>k;
    char* big_string = new char[n];
    char* characters = new char[k];

        // input phase starts
    cin>>big_string;
    
    for (i = 0; i < k; i++)
    {
        cin>>characters[i];
    }

        // finding/counting phase starts
    for (i = 0; i < n; i++)
    {
        bool found_it = false;
        for (j = 0; j < k; j++)
        {
            if (big_string[i]==characters[j])
            {
                found_it = true;
                break;
            }   
        }
        if (!found_it)
        {
            count += mod_factorial(i-pos-1);
            pos = i;
        }  
    }
    count += mod_factorial(i-pos-1); //to consider boundary cases

    cout<<count;
    delete[] characters;
    delete[] big_string;
    return 0;
}
