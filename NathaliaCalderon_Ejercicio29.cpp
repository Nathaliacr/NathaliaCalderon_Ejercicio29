#include <fstream>
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std; 


int main(){

float t_max=6.;  
float t=0.0;
float dx=0.01;
float dt=0.01;
float rho=0.01;
float tm=6;
int n_side=101;
float c=1/2;
float L= 1.0;
float T=40.;
float eta;
float c1=dx/dt;
int i;
int j;
ofstream outfile;
    
float u_old[101][3];
float u_new[101][101];
  
    
    for (i=0;i<n_side;i++){

            u_old[i][0]=sin(M_PI/100);
           
         }
     
     u_old[0][0]=0.0;
     u_old[n_side-1][0]=0.0;
     
  eta = dt / (c * rho * dx * dx);   

  cout << eta << endl;
     
     
  outfile.open("ej.dat");
 
     while(t < t_max){
    
    for(i=1;i<n_side-1;i++){
      u_new[i][0] = u_old[i][0] + eta * (u_old[i+1][0]+u_old[i-1][0]-2.0*u_old[i][0]);
      u_new[i][1] = u_old[i][1] + eta * (u_old[i+1][1]+u_old[i-1][1]-2.0*u_old[i][1]);
    }
         
 
    for(i=0;i<n_side;i++){
      outfile << u_new[i][0] << " "<< u_new[i][1];
    }
    outfile << "\n";

   
    for(i=1;i<n_side-1;i++){
      u_old[i][0] = u_new[i][0];
       u_old[i][1] = u_new[i][1];
    }
    t = t + dt;
  }
  outfile.close();
  
   
  return 0;
}