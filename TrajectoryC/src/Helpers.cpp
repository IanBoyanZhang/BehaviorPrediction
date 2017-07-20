//
// Created by ian zhang on 7/20/17.
//

#include "Helpers.h"

Vehicle::Vehicle(VectorXd & start) {
  start_state = start;
}

VectorXd Vehicle::state_in(double t) {
  //Map<VectorXd, 0, InnerStride<0>> s(start_state.data(), 3);
  Map<VectorXd> s(start_state.data(), 3);
  Map<VectorXd> d(start_state.data() + 3, start_state.size() - 3);
  VectorXd state = VectorXd::Zero(6);

  state(0) = s(0) + (s(1) * t) + s(2) * pow(t, 2) / 2.0;
  state(1) = s(1) + s(2) * t;
  state(2) = s(2);
  state(3) = d(0) + (d(1) * t) + d(2) * pow(t, 2) / 2.0;
  state(4) = d(1) + d(2) * t;
  state(5) = d(2);

  return state;
}



