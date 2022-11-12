
task main()
{
    while (1 == 1)
    {
        if (SensorValue(lightSensor) > 700)
        {
            turnFlashlightOn(flashlight, 127);
        }
        if (SensorValue(lightSensor) <= 700)
        {
            turnFlashlightOff(flashlight);
        }
    }
}