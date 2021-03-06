/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2012 Chiyuan Zhang
 * Copyright (C) 2012 Chiyuan Zhang
 */

#ifndef TREEMACHINE_H__
#define TREEMACHINE_H__

#include <shogun/machine/BaseMulticlassMachine.h>
#include <shogun/multiclass/tree/TreeMachineNode.h>

namespace shogun
{

template <class T> class CTreeMachine: public CBaseMulticlassMachine
{
public:
	typedef CTreeMachineNode<T> node_t;

    /** constructor */
	CTreeMachine()
		:m_root(NULL) 
	{
		SG_ADD((CSGObject**)&m_root,"m_root", "tree structure", MS_NOT_AVAILABLE);
	}

    /** destructor */
	virtual ~CTreeMachine()
	{
		SG_UNREF(m_root);
	}

    /** get name */
    virtual const char* get_name() const { return "TreeMachine"; }

protected:
	CTreeMachineNode<T> *m_root;
};

} /* shogun */ 

#endif /* end of include guard: TREEMACHINE_H__ */

