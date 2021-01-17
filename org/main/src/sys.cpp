#include "Objects.h"

int main() {
    Service IoStreamingService = *new Service;

    IoStreamingService.dependencies = "none";
    IoStreamingService.Description = "Input Output Streaming Service.";
    IoStreamingService.date_made = "Today";
    IoStreamingService.license = "MIT";
    IoStreamingService.type = "StreamService";

    LocalPlayer User = *new LocalPlayer;

    LocalPlayer MUser = *new LocalPlayer;

    AClient MainClient = *new AClient;

    MainClient.clientname = "TestClient";
    MainClient.id = 1123918930;


}