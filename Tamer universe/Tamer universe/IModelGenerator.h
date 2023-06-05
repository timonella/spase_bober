#pragma once

class IModelGenerator{
public:
	virtual void loadmap() {};
	virtual void generateplanet() {};
	virtual void planetsforplayers() {};
	virtual void toDatamodel() {};
};
