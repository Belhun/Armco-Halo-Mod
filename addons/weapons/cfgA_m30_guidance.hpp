//Guidance for the M30 SAR MAV / MMW-30 Swatter
// WIP, Questional locking on vehicles...

            missileKeepLockedCone = 5;
            missileLockCone = 20;
            missileLockMaxDistance = 2500;
            missileLockMinDistance = 10;
            missileLockMaxSpeed = 270;
            trackOversteer = 0.3;
            trackLead = 0;
            maneuvrability = 12;

            thrust = 300;
            thrustTime = 1;

            //Sensor
            lockAcquire = 0;
            allowTabLock = 0;
            canLock = 2;
            irLock = 1;
            airLock = 1;
            lockType = 0; //Fire and forget
            laserLock = 0;
            nvLock = 0;
            cmImmunity = 0.33; //was 0.75
            manualControl = 0; //SACLOS behavior
            missileManualControlCone = 360;
            maxControlRange = 4000;
            weaponLockSystem = "1 + 2 + 16"; //Infared only.  16 if missile is desired too.
            autoSeekTarget = 1;
            lockSeekRadius = 0;
            //commenting topdown out till we can get it working 100%
            flightProfiles[] = {"LOALDistance","Direct"}; //, "TopDown"
            class Direct {};
            class LOALDistance : Direct
            {
                lockSeekDistanceFromParent = 1;
            };
            class TopDown : Direct {
                ascendHeight = 150.0;
                descendDistance = 200.0;
                minDistance = 150.0;
                ascendAngle = 70.0;
            };
            //aiAmmoUsageFlags = "128 + 256 + 512"; //Vehicles, Tanks, and planes.
            allowAgainstInfantry = 1;

            class ace_missileguidance
            {
                enabled = 1;
                //Aerodynamics
                minDeflection = 0.001*0.25; //5e-005; //0.00025;
                maxDeflection = 0.001*8.25; //0.007;
                incDeflection = 0.001*0.8; //5E-005; //0.0005;

                //Seeker
                canVanillaLock = 1;
                defaultSeekerType = "Optic"; //apparently thermal is not used by the titan, but Optic is.
                seekerTypes[] = {"Optic", "Thermal"};
                defaultSeekerLockMode = "LOAL"; //"LOBL";
                seekerLockModes[] = {"LOAL", "LOBL"};
                seekerAngle = 90;
                seekerAccuracy = 1;
                seekerMinRange = 1;
                seekerMaxRange = 4000;

                //Program
                seekLastTargetPos = 1;
                showHintOnCycle = 1;
                defaultAttackProfile = "DIR"; //Normally DIR or JAV_DIR or JAV_TOP
                attackProfiles[] = {"DIR", "JAV_TOP"};
            };