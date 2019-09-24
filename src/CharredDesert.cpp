#include "CharredDesert.hpp"

// The plugin-wide instance of the Plugin class
Plugin *pluginInstance;

void init(rack::Plugin *p) {
  pluginInstance = p;

  p->addModel(modelDTMF);
  p->addModel(modelNoise);
  p->addModel(modelCVSeq);
  p->addModel(modelNot);
  p->addModel(modelPan);
  p->addModel(modelShift);
  p->addModel(modelOscar2);
  p->addModel(modelEq);
  p->addModel(modelCarbon);
  p->addModel(modelMixer);
  p->addModel(modelMixerCV);
  p->addModel(modelCV);
  p->addModel(modelM);
  p->addModel(modelTine);
  p->addModel(modelK);
}
