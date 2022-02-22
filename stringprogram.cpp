#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int choice;
    cout<<"1. String Length"<<endl;
    cout<<"2. String Concatenation"<<endl;
    cout<<"3. String Copy"<<endl;
    cout<<"4. String Comparision"<<endl;
    cout<<"5. Reverse A String"<<endl;
    
    cout<<"Enter Choice :";
    cin>>choice;
    
    
    
    
    switch(choice)
    {
        case 1:{string str;
               cout<<"Enter String :";
               cin>>str;
               cout<<"The lenght of String :"<<str.length();}
            break;
            
        case 2:{char str1[10]="Prashant";
                char str2[10]="Chauhan";
               cout<<str1<<endl;
               cout<<str2<<endl;
               strcat(str1,str2);
               cout<<"After Concatenation : "<<str1;}
            break;
            
        case 3:{char str1[10]="Prashant";
                char str2[10];
               cout<<str1<<endl;
               strcpy(str2,str1);
               cout<<"After Copy : "<<str2;}
            break;
            
        case 4:{const char *str1="Prashant";
                const char *str2="Chauha";
               cout<<"String 1: "<<str1<<endl;
               cout<<"String 2: "<<str2<<endl;
               
               if (strcmp (str1, str2) == 0)  
    {  
        cout << " \n Both strings are equal. " << endl;  
    }  
    else   
        {  
          
        cout << " The strings are not equal. " << endl;  
    }  
              }
            break;
            
        case 5:{string str;
                cout<<"Enter String:";
                cin>>str;
                reverse(str.begin(), str.end());
                cout<<"Reverse String : "<< str; }
            break;
        default:cout<<"Wrong choice entered";
    }
    
    return 0;
}
