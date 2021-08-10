#include <iostream>
using namespace std;

int main()
{
    //Get three numbers as user input. And find the maximum number among them
    
    int num_1 , num_2 , num_3;
    cout<< "Enter your first number : ";
    cin>> num_1;
    cout<< "Enter your second number : ";
    cin>> num_2;
    cout<< "Enter your third number : ";
    cin>> num_3;
    
    if (num_1 > num_2 && num_1 > num_3){
       cout<< "The maximum number is : "<<num_1<<endl;
    }
    else if (num_2 > num_1 && num_2 > num_3){
       cout<< "The maximum number is : "<<num_2<<endl;
    }
    else{
       cout<< "The maximum number is : "<<num_3<<endl;
    } 
    
    
    
    //Find whether an alphabet is Vowel or consonant 

    char c;
    bool lowerVowel ;
    bool upperVowel ;
    
    cout << "Enter an alphabet: ";
    cin >> c;

    lowerVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upperVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    if (c == lowerVowel || upperVowel ){
         cout << c << " is a vowel."<<endl;
    }
    else{
         cout << c << " is a consonant."<<endl;
    }
         
         
         
    /*The area of the playground which is above 5000m² will be selected for a tournament. 
    Get the radius of the plygeound from the officials. And report the ground is eligible or not. */
    
    float radius, area;
    float PI = 22/7;
    float a = 5000 * 5000;
    cout << "Enter radius of the playground :";
    cin >> radius;
    
    area = PI*radius*radius;
    cout << "Area of the playground : " << area << endl;
    
    if (area > a){
        cout<<"This playground is eligible for a tournament.";
    }
    else{
        cout<<"This playground is not eligible for a tournament.";
    }
    
    
    return 0;
}

