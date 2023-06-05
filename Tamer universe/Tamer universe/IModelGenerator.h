#pragma once

class IModelGenersator{
public:
	virtual void loadmap() {};
	virtual void generateplanet() {};
	virtual void planetsforplayers() {};
	virtual void toDatamodel() {};
};
