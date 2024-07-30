#include<iostream>

using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int position;
    int row;
    int column;
    char token='X';
    int i,j,k;
    bool tie=false;

    string n1;
    string n2;
void func1(void){


    cout<<"Enter player1 name:"<<endl;
    getline(cin,n1);
    cout<<"Enter player2 name:"<<endl;
    getline(cin,n2);
    
    cout<< n1<<" is player1 play first\n";
    cout<< n2<<" is player2 play second\n";
}
void func2(){

    cout<<"   |   |   \n";
    cout<<" "<<space[0][0]<<" | "<<space[0][1]<<" | "<<space[0][2]<<endl;
    cout<<"___|___|___\n";
    cout<<" "<<space[1][0]<<" | "<<space[1][1]<<" | "<<space[1][2]<<endl;
    cout<<"___|___|___\n";
    cout<<" "<<space[2][0]<<" | "<<space[2][1]<<" | "<<space[2][2]<<endl;
    cout<<"   |   |   \n";
}

void func3(){
    
    if(token=='X'){
        cout<<n1<<" Please enter position"<<endl;
        cin>>position;
    }
 if(token=='O'){
        cout<<n2<<" Please enter position\n";
        cin>>position;
    }
    if(position==1) {
        row=0;
        column=0;
    }
     if(position==2) {
        row=0;
        column=1;
    } 
     if(position==3) {
        row=0;
        column=2;
    } 
     if(position==4) {
        row=1;
        column=0;
    } 
     if(position==5) {
        row=1;
        column=1;
    } 
     if(position==6) {
        row=1;
        column=2;
    } 
     if(position==7) {
        row=2;
        column=0;
    } 
     if(position==8) {
        row=2;
        column=1;
    } 
     if(position==9) {
        row=2;
        column=2;
    }
    if(position<0||position>9){
        cout<<"Invalid position!!!\n";
    }

    if(token=='X' && space[row][column]!='X' && space[row][column]!='O'){
        space[row][column]='X';
        token='O';
    }
  else if(token=='O' && space[row][column]!='X' && space[row][column]!='O'){
        space[row][column]='O';
        token='X';
    }
    else cout<<"No empty space"<<endl;
    func2();
}
bool checkwin(){
    for(j=0;j<3;j++){
        if(space[j][0]==space[j][1] && space[j][0]==space[j][2] || space[0][j]==space[1][j] && space[0][j]==space[2][j]){
        return true;
        }        
        }
        if(space[0][0]==space[1][1] && space[0][0]==space[2][2]){
        return true;
        }
        if(space[0][2]==space[1][1] && space[0][2]==space[2][0]){
        return true;
        }

        return false;
    }

bool checktie(){
        for(int k=0;k<3;k++){
            for(int p=0;p<3;p++){
                if(space[k][p]!='X' && space[k][p]!='O'){
                        return false; 
                } 
            }
        }
        return true;
    } 
  
    

int main(){

    func1();
    func2();
    while(true){
        func3();
        
        if(checkwin()){
            if(token=='X'){
                cout<<n2<<" wins!!!";
            }
            else cout<<n1<<" wins!!!\n";
            break;
       }
        if(checktie()){
            cout<<"Its a tie\n";
            break;
        }
    } 
   cout<<"Press enter to exit...";
   cin.ignore();
   cin.get();
   return 0;
}