// Application.h
#ifndef _APP1_H
#define _APP1_H

// Includes
#include "DXF.h"	// include dxframework
#include "TextureShader.h"
#include "ShadowShader.h"
#include "DepthShader.h"

class App1 : public BaseApplication
{
public:

	App1();
	~App1();
	void init(HINSTANCE hinstance, HWND hwnd, int screenWidth, int screenHeight, Input* in, bool VSYNC, bool FULL_SCREEN);

	bool frame();

protected:
	bool render();
	void depthPass();
	void finalPass();
	void gui();

private:
	TextureShader* textureShader;
	PlaneMesh* mesh;

	Light* light;
	AModel* model;
	SphereMesh* sphereMesh;
	CubeMesh* cubeMesh;
	ShadowShader* shadowShader;
	DepthShader* depthShader;

	ShadowMap* shadowMap[2];

	float lightX = 0;
	float lightY = 0;
	float lightZ = -10;
	float lightDirectionX = 1;
	float lightDirectionY = 0;
	float lightDirectionZ = 0;
};

#endif