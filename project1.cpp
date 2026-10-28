#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  char names[5][20];
  int marks[5][3];
  int total[5];
  float average[5];

  int top_index=0;

for (int i = 0; i < 5; i++){
  cout<<"please enter student name :";
  cin.getline(names[i],20);

  total[i]=0;
 //takes marks and then calculate the total
  for (int j=0;j<3; j++){
    cout<<"Enter mark "<<(j+1)<<" for "<<names[i]<<":\n";
    cin>>marks[i][j];
    total[i]+=marks[i][j];
  }

  average[i]=(float)total[i]/3.0;

// comparing the average of studens to find the top student 
if(i==0 || average[i]>average[top_index]){
  top_index=i;
 }
 cin.ignore();


}

cout<<left<<setw(10)<<"name"
    <<setw(6)<<"M1"
    <<setw(6)<<"M2"
    <<setw(6)<<"M3"
    <<setw(8)<<"Total"
    <<setw(8)<<"avg"<<endl;
  
for(int i=0; i<5;i++){
  cout<<setw(10)<<names[i];
  for(int j=0;j<3;j++){
    cout<<setw(6)<<marks[i][j];
  }
  cout<<setw(8)<<total[i]
      <<setw(8)<<average[i]<<endl;
}
cout<<"Top student: "<<names[top_index]<<endl;



  return 0;
}