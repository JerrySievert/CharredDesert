#include "rack.hpp"

using namespace rack;

extern Plugin *plugin;

////////////////////
// module widgets
////////////////////

struct SidViciousWidget : ModuleWidget {
  SidViciousWidget();
};

struct DTMFWidget : ModuleWidget {
  DTMFWidget();
};

struct NoiseWidget : ModuleWidget {
  NoiseWidget();
};

struct CVSeqWidget : ModuleWidget {
  CVSeqWidget();
};

struct NotWidget : ModuleWidget {
  NotWidget();
};

struct PanWidget : ModuleWidget {
  PanWidget();
};

struct ShiftWidget : ModuleWidget {
  ShiftWidget();
};
