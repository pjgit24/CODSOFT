#include<cstdlib>
#include<iostream>
#include<time.h>

using namespace std;

int main(){
    int un,ln;
    int random,guess;

    srand(time(NULL));

    cout<<"Number guessing game!!!\n enter upper limit & lower limit and guess the secret number\n";
    cout<<"Upper limit:";
    cin>>un;
    cout<<"Lower limit:";
    cin>>ln;
    random=rand()% (un-ln+1) + ln;
    
    ///cout<<random<<endl;
    do
    {
      cout<<"Guess the no:\n" ;
      cin>>guess;
        if(random<guess){
            cout<<"Secret number is lower than "<<guess<<endl;
        }
        else if(random>guess){
            cout<<"Secret number is greter than "<<guess<<endl;
        }
    } while (random!=guess);
    cout<<"Congrats "<<random<<" is secret number\n";
    
    cout<<"Press enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}