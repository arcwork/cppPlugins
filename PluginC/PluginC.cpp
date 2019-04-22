/***************
* PluginC.cpp  *
***************/

#include "PluginC.h"

#include <string.h>
#include <stdio.h>

//! The plugin interface implemenation method
/*!
  \return  iptables rules
  \sa onTheTable()
*/
std::string PluginC::onTheTable()
{
    return " FORWARD ";
}
