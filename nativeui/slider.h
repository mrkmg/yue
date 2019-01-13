// Copyright 2018 Cheng Zhao. All rights reserved.
// Use of this source code is governed by the license that can be found in the
// LICENSE file.

#ifndef NATIVEUI_SLIDER_H_
#define NATIVEUI_SLIDER_H_

#include "nativeui/view.h"

namespace nu {

class NATIVEUI_EXPORT Slider : public View {
 public:
  Slider();

  // View class name.
  static const char kClassName[];

  void SetValue(float value);
  float GetValue() const;
  void SetStep(float step);
  float GetStep() const;
  void SetMaximumValue(float max);
  float GetMaximumValue() const;
  void SetMinimumValue(float min);
  float GetMinimumValue() const;

  // View:
  const char* GetClassName() const override;
  SizeF GetMinimumSize() const override;

  // Events.
  Signal<void(Slider*)> on_value_change;
  Signal<void(Slider*)> on_sliding_complete;

 protected:
  ~Slider() override;
};

}  // namespace nu

#endif  // NATIVEUI_SLIDER_H_