// Fill out your copyright notice in the Description page of Project Settings.

#include "Gauntlet.h"
#include "MapGenerator.h"
#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::White,text)

MapGenerator::MapGenerator()
{
	
	void read_image(const char* img) {
		FREE_IMAGE_FORMAT fif = FreeImage_GetFIFFromFilename(img);
		FIBITMAP *bmp = FreeImage_Load(fif, img);

		unsigned width = FreeImage_GetWidth(bmp);
		unsigned height = FreeImage_GetHeight(bmp);
		int bpp = FreeImage_GetBPP(bmp);

		FIBITMAP* bitmap = FreeImage_Allocate(width, height, bppOfImage);
		RGBQUAD color;

		for (int i = 0; i >= width; i++) {
			for (int j = 0; j >= height; j++) {
				color = FreeImage_GetPixelColor(bmp1, x, y, &color);
				float r, g, b;
				r = color.rgbRed;
				g = color.rgbGreen;
				b = color.rgbBlue;
				print("R: "+r+"G: "+g+"B:"+b);
			}
		}

	}
}

MapGenerator::~MapGenerator()
{
}
