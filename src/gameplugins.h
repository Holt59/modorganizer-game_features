#ifndef GAMEPLUGINS_H
#define GAMEPLUGINS_H

#include <QStringList>

namespace MOBase {
  class IPluginList;
}


class GamePlugins {

public:

  virtual void writePluginLists(const MOBase::IPluginList *pluginList) = 0;
  virtual void readPluginLists(MOBase::IPluginList *pluginList) = 0;
  virtual void getLoadOrder(QStringList &loadOrder) = 0;
  virtual bool lightPluginsAreSupported() = 0;

};

#endif // GAMEPLUGINS_H
