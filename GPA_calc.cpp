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

double GPA = 0;
int tot_unit_val = 0;

cout << "How many High Distinctions have you attained so far? \n";
cin >> HD_num_input;

cout << "How many Distinctions have you attained so far? \n";
cin >> D_num_input;

cout << "How many Credits have you attained so far? \n";
cin >> C_num_input;

cout << "How many Passes have you attained so far? \n";
cin >> P_num_input;

cout << "How many units have you received a fail grade for so far? \n";
cin >> N_num_input;

tot_unit_val = (HD_num_input + D_num_input + C_num_input + P_num_input + N_num_input) * unit_val;

GPA = (HD_grade * HD_num_input + D_grade * D_num_input + C_grade * C_num_input + P_grade * P_num_input + N_grade * N_num_input)/(tot_unit_val);

cout << "Your progressive GPA is: \n" << GPA << "\n";

}
