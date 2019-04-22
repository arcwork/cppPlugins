/***************
* PluginB.cpp  *
***************/

#include "PluginB.h"

#include <string.h>
#include <stdio.h>

//! The plugin interface implemenation method
/*!
  \return iptables rules
  \sa onTheTable()
*/
std::string PluginB::onTheTable()
{
    return " OUTPUT ";
}
