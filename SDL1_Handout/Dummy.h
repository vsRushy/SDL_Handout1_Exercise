#ifndef __DUMMY_H__
#define __DUMMY_H__

#include <stdio.h>
#include <conio.h>
#include "Module.h"
#include "Globals.h"

class ModuleDummy : public Module
{
	bool Init()
	{
		LOG("Dummy Init!");
		return true;
	}

	update_status PreUpdate()
	{
		LOG("Dummy PreUpdate!");
		return update_status::UPDATE_CONTINUE;
	}

	update_status Update()
	{
		LOG("Dummy Update!");
		return update_status::UPDATE_CONTINUE;
	}

	update_status PostUpdate()
	{
		LOG("Dummy PostUpdate!");
		return update_status::UPDATE_CONTINUE;
	}

	bool CleanUp()
	{
		LOG("Dummy CleanUp!");
		return true;
	}
};

class DummyESC : public Module {


};

#endif // __DUMMY_H__