#include "std_lib_facilities.h"
#include "calc_constants.h"
/*GPA-Calculator is a calculator that determines you current Grade point average. 
It is currently only giving results for RMIT. I've only just started this project but evntually 
I hope to include grade point average and WAM calculations for every Australian tertiary institution 
and to provide a GUI for the app for web, PC, and iPhone/Android devices*/ 
int main()  {
/**/
int HD_num_input = 0;
int D_num_input = 0;
int C_num_input = 0;
int P_num_input = 0;
int N_num_input = 0;
string queryHD = "How many High Distinctions have you attained so far? \n";
string queryD = "How many Distinctions have you attained so far? \n";
string queryC = "How many Credits have you attained so far? \n";
string queryP = "How many Passes have you attained so far? \n";
string queryN = "How many Fail grades have you attained so far? \n";
string showGPA = "Your progressive GPA is: \n"; 

double GPA = 0;
int tot_unit_val = 0;

cout << queryHD;
cin >> HD_num_input;

cout << queryD;
cin >> D_num_input;

cout << queryC;
cin >> C_num_input;

cout << queryP;
cin >> P_num_input;

cout << queryN;
cin >> N_num_input;

tot_unit_val = (HD_num_input + D_num_input + C_num_input + P_num_input + N_num_input) * unit_val;

GPA = (HD_grade * HD_num_input + D_grade * D_num_input + C_grade * C_num_input + P_grade * P_num_input + N_grade * N_num_input)/(tot_unit_val);

cout << showGPA << GPA << "\n";

}
