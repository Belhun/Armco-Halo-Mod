    class WNZ_injectKetamine: Default
	{
		circleVelocity[]={0,0,0};
		moveVelocity[]={0,0,0};
		size[]={0,0};
		color[]=
		{
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
		};
		animationSpeed[]={1000};
		positionVar[]=
		{
			"intensity",
			"intensity",
			"intensity"
		};
		MoveVelocityVar[]={1.75,1.75,1.75};
		colorVar[]={0,0,0,0};
		interval="interval";
		circleRadius="intensity";
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=0.5;
		lifeTime=0.5;
		rotationVelocity=0;
		weight=4;
		volume=1;
		rubbing=0;
		randomDirectionPeriod=0.0099999998;
		randomDirectionIntensity=0.079999998;
		onTimerScript="";
		beforeDestroyScript="\armco_ammo\scripts\heal.sqf";
		lifeTimeVar=0;
		rotationVelocityVar=1;
		sizeVar=0;
		randomDirectionPeriodVar=2;
		randomDirectionIntensityVar=0.1;
	};