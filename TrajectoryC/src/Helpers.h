//
// Created by ian zhang on 7/20/17.
//

#ifndef TRAJECTORIES_HELPERS_H
#define TRAJECTORIES_HELPERS_H
#include <vector>
#include "Eigen-3.3/Eigen/Core"
#include "Eigen-3.3/Eigen/QR"

using namespace std;
using namespace Eigen;
class Helpers {
public:
  Helpers();
  // Using template?
  double logistic(double x);

private:
  double to_function(vector<double>& coefficients);

};

class Vehicle {
public:
  Vehicle();
  Vehicle(VectorXd&);
  VectorXd state_in(double t);

private:
  VectorXd start_state;
};

#endif //TRAJECTORIES_HELPERS_H
