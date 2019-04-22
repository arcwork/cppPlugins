/**************
*  Pluginc.h *
**************/

#ifndef PLUGINA_INCLUDE_PLUGINC_H_
#define PLUGINA_INCLUDE_PLUGINC_H_

#include <string>

#include "../PluginAPI/plugin_api.h"
#include "../PluginAPI/IPluginSample.h"

/* \class PluginC

    Declares itself as a plugin
*/
class PluginC: public IPluginSample {
	// The plugin interface implemenation method
	/*
	  \return iptables rules 
	  \sa onTheTable()
	*/
    virtual std::string onTheTable();
};

DECLARE_PLUGIN(PluginC)

#endif /* PLUGINA_INCLUDE_PLUGINC_H_ */