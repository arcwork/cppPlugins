/************
* PluginB.h *
************/

#ifndef PLUGINA_INCLUDE_PLUGINB_H_
#define PLUGINA_INCLUDE_PLUGINB_H_

#include <string>

#include "../PluginAPI/plugin_api.h"
#include "../PluginAPI/IPluginSample.h"

/* \class PluginB
    Declares itself as a plugin
*/
class PluginB: public IPluginSample {
	//! The plugin interface implemenation method
	/*!
	  \return  iptables rules
	  \sa onTheTable()
	*/
    virtual std::string onTheTable();
};

DECLARE_PLUGIN(PluginB)

#endif /* PLUGINA_INCLUDE_PLUGINB_H_ */
