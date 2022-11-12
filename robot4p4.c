

task main()
    int motorCount;
    motorCount = 0;
    while (motorCount < 3)
    {
        startMotor(rightMotor, 95);
        wait(2);
        stopMotor(rightMotor);
        wait(2);
        motorCount = motorCount + 1;
    }