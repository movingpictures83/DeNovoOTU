#ifndef DENOVOOTUPLUGIN_H
#define DENOVOOTUPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class DeNovoOTUPlugin : public Plugin
{
public: 
 std::string toString() {return "DeNovoOTU";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
