#include <cmath>
#include <vector>
using namespace std;
#include <iostream>

double cash_flow_pv_discrete(   const vector<double>& cflow_times,
                                const vector<double>& cflow_amonts,
                                const double& r){

    double PV = 0.0;
    for(int t = 0; t < cflow_times.size(); t++){
        PV += cflow_amonts[t]/pow(1.0 + r, cflow_times[t]);
    };
    return PV;
}

int main (int argc, char *args[])
{
  vector<double> cflows; cflows.push_back(-100.0); cflows.push_back(75); cflows.push_back(75);
  vector<double> times; times.push_back(0.0); times.push_back(1); times.push_back(2);
  double r = 0.1;

  cout  << " Present value, 10 percent discretely compounded interest = "
        << cash_flow_pv_discrete(times, cflows, r) << endl;

  return 0;
} 