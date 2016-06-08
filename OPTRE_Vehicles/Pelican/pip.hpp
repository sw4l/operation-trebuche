		class RenderTargets /// class for all Picture-in-Picture
		{
			class LeftCam
			{
				renderTarget = "rendertarget2";
					class CameraView1
					{
						pointPosition = "PIP2_pos";
						pointDirection = "PIP2_dir";
						renderQuality = 2;
						renderVisionMode = 0;
						fov = 0.75;
					};
			};	
			class RightCam
			{
				renderTarget = "rendertarget0";
					class CameraView1
					{
						pointPosition = "PIP0_pos";
						pointDirection = "PIP0_dir";
						renderQuality = 2;
						renderVisionMode = 0;
						fov = 0.75;
					};
			};	
			class BackLeftCam
			{
				renderTarget = "rendertarget3";
					class CameraView1
					{
						pointPosition = "PIP3_pos";
						pointDirection = "PIP3_dir";
						renderQuality = 2;
						renderVisionMode = 0;
						fov = 0.75;
					};
			};	
			class BackRightCam
			{
				renderTarget = "rendertarget1";
					class CameraView1
					{
						pointPosition = "PIP1_pos";
						pointDirection = "PIP1_dir";
						renderQuality = 2;
						renderVisionMode = 0;
						fov = 0.75;
					};
			};	
		};