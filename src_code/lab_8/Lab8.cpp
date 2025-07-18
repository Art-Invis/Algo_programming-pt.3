#include <iostream>
#include <cctype>  

using namespace std;

int num_lower(const char *s);

int main()
{
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);  
    
    int count = num_lower(str);
    
    cout << "Number of lowercase letters in the string: " << count << endl;
    
    return 0;
}

int num_lower(const char *s)
{
    int count = 0;
    while (*s != '\0')  
    {
        if (islower(*s))  
        {
            count++;  
        }
        s++;  
    }
    return count;  
}
