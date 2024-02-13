class WNZ_InjectMedical
{
	class Light1
	{
		position[]={0,0,0};
		simulation="light";
		type="WNZ_TaserLight";
		intensity=0.25;
		interval=0.2;
		lifeTime=0.75;
	};
	class Exp1
	{
		position[]={0,0,0};
		simulation="particles";
		type="WNZ_HealExp";
		intensity=1;
		interval=1;
		lifeTime=0.5;
		particleFSLoop=0;
	};
};