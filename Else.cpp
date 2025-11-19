MotorElevator.spin(forward);
            wait(1, seconds);
            MotorElevator.stop(hold);
            returnHome(x_pos,y_pos,turnCheck);
            MotorLeft.stop(brake);
            MotorRight.stop(brake);

            wait(1,seconds);

            MotorLeft.spin(brake);
            MotorRight.spin(brake);
            MotorLeft.setPosition(0,turns);
            while(MotorLeft.position(turns) > 0.5 ){}
            MotorLeft.stop(brake);
            MotorRight.stop(brake);

            colorCheckBin(ObjectColor);
            dropping (50);

            turnPID(0);

            MotorLeft.spin(brake);
            MotorRight.spin(brake);
            MotorLeft.setPosition(0,turns);
            while(MotorLeft.position(turns) > 0.5 ){}
            MotorLeft.stop(brake);
            MotorRight.stop(brake);
