
task main()
{
    int biggest;
    while (1 == 1)
    {biggest = 0;
    while (SensorValue(bumpSwitch)==0)
    {
        if (SensorValue(potentiometer)>biggest)
        {
            biggest=SensorValue(potentiometer);
        }
    }
    }
}