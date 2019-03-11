/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2019 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#ifndef SOFA_SIMULATION_CORE_MUTATIONLISTENER_H
#define SOFA_SIMULATION_CORE_MUTATIONLISTENER_H

#include <sofa/core/objectmodel/BaseObject.h>
#include <sofa/simulation/simulationcore.h>

namespace sofa
{

namespace simulation
{

class Node;

/// Generic API to handle mutations of the graph
class SOFA_SIMULATION_CORE_API MutationListener
{
  public:
    virtual ~MutationListener();

    virtual void onStepEnd(Node *root);

    virtual void onStepBegin(Node *root);

    virtual void sleepChanged(Node *node);

    virtual void onAddChildBegin(Node *parent, Node *child);

    virtual void onRemoveChildBegin(Node *parent, Node *child);

    virtual void onAddObjectBegin(Node *parent,
                             core::objectmodel::BaseObject *object);

    virtual void onRemoveObjectBegin(Node *parent,
                                core::objectmodel::BaseObject *object);

    virtual void onAddSlaveBegin(core::objectmodel::BaseObject *master,
                            core::objectmodel::BaseObject *slave);

    virtual void onRemoveSlaveBegin(core::objectmodel::BaseObject *master,
                               core::objectmodel::BaseObject *slave);

    virtual void onAddChildEnd(Node *parent, Node *child);

    virtual void onRemoveChildEnd(Node *parent, Node *child);

    virtual void onAddObjectEnd(Node *parent,
                             core::objectmodel::BaseObject *object);

    virtual void onRemoveObjectEnd(Node *parent,
                                core::objectmodel::BaseObject *object);

    virtual void onAddSlaveEnd(core::objectmodel::BaseObject *master,
                            core::objectmodel::BaseObject *slave);

    virtual void onRemoveSlaveEnd(core::objectmodel::BaseObject *master,
                               core::objectmodel::BaseObject *slave);
};

} // namespace simulation

} // namespace sofa

#endif
