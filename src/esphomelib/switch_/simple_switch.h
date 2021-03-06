//
// Created by Otto Winter on 20.01.18.
//

#ifndef ESPHOMELIB_SWITCH_SIMPLE_SWITCH
#define ESPHOMELIB_SWITCH_SIMPLE_SWITCH

#include "esphomelib/output/binary_output.h"
#include "esphomelib/switch_/switch.h"

namespace esphomelib {

namespace switch_ {

/// A simple switch that exposes a binary output as a switch.
class SimpleSwitch : public Switch {
 public:
  /// Construct this SimpleSwitch with the provided BinaryOutput.
  explicit SimpleSwitch(output::BinaryOutput *output);

  // ========== INTERNAL METHODS ==========
  // (In most use cases you won't need these)
  /// Turn this SimpleSwitch on.
  void turn_on() override;
  /// Turn this SimpleSwitch off.
  void turn_off() override;
 protected:
  output::BinaryOutput *output_;
};

} // namespace switch_

} // namespace esphomelib

#endif //ESPHOMELIB_SWITCH_SIMPLE_SWITCH
