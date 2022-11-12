

task main()
{
    ClearTimer(T1);
    while (time1(T1) < 20000) //loop for 20 seconds
    {
        turnLEDOn(green);
        wait(2);
        turnLEDOff(green);
        wait(2);
    }
}