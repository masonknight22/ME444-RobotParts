task main()
{
    while(1==1)
    {
        startMotor(port2, 34);
        wait(2);
        stopMotor(port2);
        wait(2);

        startMotor(port3, 34);
        wait(2);
        stopMotor(port3);
        wait(2);

        startMotor(port2, -34);
        wait(2);
        stopMotor(port2);
        wait(2);

        startMotor(port3, -34);
        wait(2);
        stopMotor(port3);
        wait(2);

        setServo(port9, 90);
        wait(2);
        setServo(port9, 270);
        wait(2);
    }
}