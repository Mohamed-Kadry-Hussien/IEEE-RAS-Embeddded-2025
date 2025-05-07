#include <stdio.h>

typedef enum {
    TEMPERATURE,
    PRESSURE,
    STATUS
} SensorType;

union SensorValue {
    int temperature;
    float pressure;
    char status;
};

struct SensorData {
    int sensorID;
    SensorType sensorType;
    union SensorValue data;
};

void printSensorData(struct SensorData sensor) {
    printf("Sensor ID: %d\n", sensor.sensorID);
    
    switch (sensor.sensorType) {
        case TEMPERATURE:
            printf("Sensor Type: Temperature\n");
            printf("Sensor Reading: %d °C\n", sensor.data.temperature);
            break;
        case PRESSURE:
            printf("Sensor Type: Pressure\n");
            printf("Sensor Reading: %.2f Pa\n", sensor.data.pressure);
            break;
        case STATUS:
            printf("Sensor Type: Status\n");
            printf("Sensor Reading: %c (status code)\n", sensor.data.status);
            break;
        default:
            printf("Sensor Type: Unknown\n");
    }

    printf("-------------------------\n");
}

int main() {
    struct SensorData sensor1 = {1, TEMPERATURE, .data.temperature = 24};
    struct SensorData sensor2 = {2, PRESSURE, .data.pressure = 130.75};
    struct SensorData sensor3 = {3, STATUS, .data.status = 'B'};

    printSensorData(sensor1);
    printSensorData(sensor2);
    printSensorData(sensor3);

    return 0;
}
