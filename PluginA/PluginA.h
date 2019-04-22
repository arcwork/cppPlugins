/****************
 *  PluginA.h   *
 ****************/

#ifndef PLUGINA_INCLUDE_PLUGINA_H_
#define PLUGINA_INCLUDE_PLUGINA_H_

#include <string>

#include "../PluginAPI/plugin_api.h"
#include "../PluginAPI/IPluginSample.h"

/*! \class PluginA
    Declares itself as a plugin
*/
class PluginA: public IPluginSample {
public:
	//! The plugin interface implemenation method
	/*!
	  \return iptable rules
	  \sa onTheTable()
	*/
    virtual std::string onTheTable();
};

DECLARE_PLUGIN(PluginA)

#endif /* PLUGINA_INCLUDE_PLUGINA_H_ */
