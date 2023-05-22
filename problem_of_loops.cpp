#include<iostream> 

#define nn '\n'

using namespace std;

void khele_dilam(){
  
  string word[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
  
  int a,b;  cin >> a >> b;
  
  for(int i=a;i<=b;i++){
    if(i>9){
      if(i%2==0)
       cout << "even" <<nn; 
      else
        cout << "odd" << nn;
    }
    else
    {
      cout << word[i] << nn;
    }
  }
  
}

int main(){
  khele_dilam();
}
