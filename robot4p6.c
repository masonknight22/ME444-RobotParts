

task main()
{
    void LEDControl();      //this is a function declaration
    task main()
    {
        while (1 == 1)
        {LEDControl(); //functino call
        }
    }
    void LEDControl() //function definition
    {
        if (SensorValue(bumpSwitch)==1)
        {
            turnLEDOn(green);

        }
        else{
            turnLEDOff(green);
        }
    }
}