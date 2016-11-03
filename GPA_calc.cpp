#include "std_lib_facilities.h"

int main()  {
constexpr double unit_val = 12.0;
constexpr double HD_grade = unit_val * 4.0;
constexpr double D_grade = unit_val * 3.0;
constexpr double C_grade = unit_val * 2.0;
constexpr double P_grade = unit_val;
constexpr double N_grade = 0.0;
  
int HD_num_input = 0;
int D_num_input = 0;
int C_num_input = 0;
int P_num_input = 0;
int N_num_input = 0;

double GPA = 0;
int tot_unit_val = 0;

cout << "How many High Distinctions have you attained? \n";
cin >> HD_num_input;

cout << "How many Distinctions have you attained? \n";
cin >> D_num_input;

cout << "How many Credits have you attained? \n";
cin >> C_num_input;

cout << "How many Passes have you attained? \n";
cin >> P_num_input;

cout << "How many Fails have you attained? \n";
cin >> N_num_input;

tot_unit_val = (HD_num_input + D_num_input + C_num_input + P_num_input + N_num_input) * unit_val;

GPA = (HD_grade * HD_num_input + D_grade * D_num_input + C_grade * C_num_input + P_grade * P_num_input + N_grade * N_num_input)/(tot_unit_val);

cout << "Your progressive GPA is: \n" << GPA << "\n";

}
