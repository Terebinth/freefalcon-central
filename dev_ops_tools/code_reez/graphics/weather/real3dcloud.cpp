











#include "Real3DCloud.h"  // where are the header files ?
#include "RealWeather.h"

ObjectDisplayList *Real3DCloud::objMgr = NULL; // is *Real3DCloud a pointer to a namespace ?  

Real3DCloud::Real3DCloud()  // no type given
{
  drawable3DClouds = NULL;
}

Real3DCloud::~Real3DCloud()  //here the tilde is part of the name and not an operator ?
{
  if (drawable3DClouds)
  {
    Cleanup()
  }
}

void Real3DCloud::Setup(ObjectDisplayList* objList)
{
  int i;
  objMgr = objList;

  drawable3DClouds = new Drawable3DCloud[NUM_3DCLOUD_POLYS];

  for (i = 0 ; i < NUM_3DCLOUD_POLYS; i++)
  {
    objList->InsertObject(&drawable3DClouds[i])
  }
}

void Real3DCloud::Cleanup()
{
  if (drawable3DClouds)
  {
    delete[] drawable3DClouds;
    drawable3DClouds = NULL;
  }
}