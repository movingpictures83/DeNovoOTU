#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "DeNovoOTUPlugin.h"

void DeNovoOTUPlugin::input(std::string file) {
 inputfile = file;
}

void DeNovoOTUPlugin::run() {
   
}

void DeNovoOTUPlugin::output(std::string file) {
   std::string command = "export OLDPATH=${PYTHONPATH}; export PYTHONPATH=${PYTHON2_LIB_DIR}:${PYTHON2_DIST_PACKAGES}:${PYTHON2_SITE_PACKAGES}:${PYTHONPATH}; pick_de_novo_otus.py";
 command += " -i "+inputfile;
 command += " -o "+file+"; cp -r "+file+"/* "+file+"/..; export PYTHONPATH=OLDPATH"; 
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<DeNovoOTUPlugin> DeNovoOTUPluginProxy = PluginProxy<DeNovoOTUPlugin>("DeNovoOTU", PluginManager::getInstance());
