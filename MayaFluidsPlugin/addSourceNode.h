#ifndef ADD_SOURCE_NODE_H
#define ADD_SOURCE_NODE_H

#include <maya/MPxNode.h>
#include <maya/MFnNumericAttribute.h>
#include <math.h>

class AddSourceNode : public MPxNode
{
public:
					AddSourceNode();
	virtual			~AddSourceNode();
	static void*	creator();

	virtual MStatus compute(const MPlug& plug, MDataBlock& data);
	static MStatus	initialize();

	static MTypeId	id;

	static MObject	aOutValue;
	static MObject	aInValue;
	// TODO: ADD PARAMETERS
};

#endif
