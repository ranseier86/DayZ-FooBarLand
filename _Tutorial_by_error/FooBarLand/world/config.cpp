#define _ARMA_

class CfgPatches
{
	class foobarland_data
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"DZ_Data"};
		author="error";
		name="foobarland";
		url="https://discord.gg/rguhT6HHD7";
		worlds[] = {"foobarland"};
	};
};
class CfgWorlds
{
	class CAWorld;
	initWorld = "foobarland";
	class foobarland: CAWorld
	{
		class Grid
		{
			offsetX = 0.0;
			offsetY = 0.0;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		worldName="_Tutorial_by_error\foobarland\world\foobarland.wrp";
		description="foobarland";		
		worldId=2;
		cutscenes[]={};
		icon="";
		pictureMap="";
		pictureShot="";
		oceanMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanNiceMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanStormMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		plateFormat="ML$ - #####";
		plateLetters="ABCDEGHIKLMNOPRSTVXZ";
		longitude=-40;
		latitude=-40;
		minTreesInForestSquare = 10;
		minRocksInRockSquare = 5;
		soundMapAttenCoef = 0.01;
		startTime = "8:30";
		startDate = "01/09/2023";
		startWeather = 0.1;
		startFog = 0;
		forecastWeather = 0.3;
		forecastFog = 0;
		seagullPos[] = {2600.000,150,1500.000};
		centerPosition[]={2600,1500,1000};
		ilsPosition[] = {2600,1500};
		ilsDirection[] = {0,0.08,1};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
		drawTaxiway = 1;
		clutterGrid = 1;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "DZ\worlds\chernarusplus\data\middle_sat_mco.paa";
		terrainNormalTexture = "DZ\worlds\chernarusplus\data\global_nohq.paa";
		class AISpawnerParams{};
		class OutsideTerrain
		{
			satellite = "DZ\worlds\enoch\data\enoch_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "DZ\surfaces_bliss\data\terrain\en_grass2_nopx.paa";
					texture = "DZ\surfaces_bliss\data\terrain\en_grass2_ca.paa";
				};
			};
		};		
		class UsedTerrainMaterials
		{
			material1 = "DZ\surfaces\data\terrain\cp_grass_tall.rvmat";
			material2 = "DZ\surfaces_bliss\data\terrain\en_flowers1.rvmat";
			material3 = "DZ\surfaces_bliss\data\terrain\en_flowers2.rvmat";
			material4 = "DZ\surfaces_bliss\data\terrain\en_flowers3.rvmat";
		};
		class Ambient{};
		class Names
		{
			class KP_Ruedesheim
			{
				name = "Ruedesheim";
				position[] = {5200.00,1300.0};
				type = "City";
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};			
		};
		class Navmesh
		{
			navmeshName = "_Tutorial_by_error\foobarland\navmesh\foobarland.nm";
			filterIsolatedIslandsOnLoad = 1;
			visualiseOffset = 0;
			class GenParams
			{
				tileWidth = 50.0;
				cellSize1 = 0.25;
				cellSize2 = 0.1;
				cellSize3 = 0.1;
				filterIsolatedIslands = 1;
				seedPosition[] = {7500, 0, 7500};
				class Agent
				{
					diameter = 0.6;
					standHeight = 1.5;
					crouchHeight = 1.0;
					proneHeight = 0.5;
					maxStepHeight = 0.45;
					maxSlope = 60.0;
				};
				class Links
				{	
					class ZedJump387_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = 0.3;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66ff0000;
					};
					class ZedJump388_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = -0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66dd5500;
					};
					class ZedJump387_110
					{
						jumpLength = 3.90;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66008000;
					};
					class ZedJump420_160
					{
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x660000ff;
					};
					class ZedJump265_210
					{
						jumpLength = 2.45;
						jumpHeight = 2.5;
						minCenterHeight = 1.8;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"climb"};
						color = 0x669400d3;
					};
					class Fence50_110deer
					{
						typeId = 100;
						jumpLength = 8.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump2";
						flags[] = {"jumpOver"};
						color = 0x66aaaaFF;
					};
					class Fence110_160deer 
					{
						typeId = 101;
						jumpLength = 8.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump3";
						flags[] = {"jumpOver"};
						color = 0x6624fff8;
					};
					class Fence50_110hen
					{
						typeId = 110;
						jumpLength = 4.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
					class Fence110_160hen
					{
						typeId = 111;
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
				};
			};
		};
	};
};

class CfgWorldList
{
	class foobarland{};
};
