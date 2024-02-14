#pragma once
#include "bspline_curve.h"
#include "debug_info.h"
#include "environment.h"
#include "localization.h"
#include "math/math_common.h"
#include "reference_line.h"
#include "visualization.h"
namespace ahrs {

class BsplineLatticePlanner {
 public:
  bool Plan(const RobotState& state, const ReferenceLine& reference_line,
            Environment& env, Curve& trajectory, const Config& config,
            DebugInfo& debug_info);
};
}  // namespace ahrs