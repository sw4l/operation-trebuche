		class RenderTargets /// class for all Picture-in-Picture
		{
			class BottomCam
			{
				renderTarget = "rendertarget0";
					class CameraView1
					{
						pointPosition = "PIP0_pos";
						pointDirection = "PIP0_dir";
						renderQuality = 2;
						renderVisionMode = 0;
						fov = 0.6;
					};
			};
			class pilotCam
			{
				renderTarget = "rendertarget1";
					class CameraView1
					{
						pointPosition = "PIP1_pos";
						pointDirection = "PIP1_dir";
						renderQuality = 2;
						renderVisionMode = 0;
						fov = 0.3;
					};
			};	
		};