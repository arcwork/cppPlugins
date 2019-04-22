/******************
*   PluginA.cpp   *
******************/

#include <string>
#include <stdio.h>

#include "../PluginAPI/plugin_api.h"
#include "PluginA.h"

// The plugin interface implemenation method
/*
  \return iptables rules
  \sa onTheTable()
*/
std::string PluginA::onTheTable()
{
    return " INPUT ";
}