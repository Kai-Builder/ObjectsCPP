//
// Created by seymo on 1/17/2021.
//

//
// Created by seymo on 1/15/2021.
//
#include "Objects.h"

int main() {

    AClient ThisIsABasicUser = *new AClient;

    Acc_Create ThisIsACloudBasedAccount = *new Acc_Create;

    ThisIsABasicUser.id = 1002910001002190; /* Sample ID */
    ThisIsABasicUser.clientname = "Hello There!"; /* Self Explanatory */
    ThisIsABasicUser.limit = 0; /* API Request Limit */

    ThisIsACloudBasedAccount.name = ThisIsABasicUser.clientname; /* Link User.client To Cloud Acc. */
    ThisIsACloudBasedAccount.age = 0; /* Age */

    ThisIsACloudBasedAccount.dob = "1/15/2021"; /* Any Formats Allowed! */

    ThisIsACloudBasedAccount.ParseAllToJS("User.json"); /* Returns User.json With Account Details From Basic User. */

    // Making A YAML File For C++ Projects

    /*
     * Insert the Amplified DS From Acc_Create & AClient.
     */
    DataStream DataFiles = *new DataStream;

    // To Add a YML File we First Define the Standard Properties.
    // The YML Creator In Objects Has A Pre-Built One.
    // All We need to do is Define a couple of things to make sure no Exceptions are thrown.

    DataFiles.yaml_standard = "foobar.yml"; // Can be any extension, Mostly YML. Keeps Formatting.

    DataFiles.ndefault = "Project"; // Project Name That Goes into the (name:) Slot.

    DataFiles.build = "1.4"; // Build Only Applies to storeYML() And Not storetofile().

    DataFiles.StoreYML(); // No Parameters Since we already Defined The Above Parameters. Now it will Store all of the Info Into AF.yml.



    // Inserting Virtual Objects And Changing the Console's Feel In C++ With Objects
    // Inserting Virtual Objects & Gravity Is Simple to do In the Console With Objects.h.

    VirtualWorldOperator ThisWorld = *new VirtualWorldOperator;

    // Define Basic World Properties.

    ThisWorld.worldname = "My Sample World";
    ThisWorld.worldauthor = "I'm An Author";
    ThisWorld.worldsizex = 800;
    ThisWorld.worldsizey = 600;
    ThisWorld.worldsizez = NULL;
    ThisWorld.worldStats(); // Returns All World Statistics Beautifully Formatted.
    // executeConsoleCommand Executes Console Commands From Windows & Linux Terminals.
    ThisWorld.executeConsoleCommand("echo Wow!");


    // Adding Objects


    Solid Object1 = *new Solid; // Name Object1 To Whatever you Want.

    Object1.frequency = 1.20; /* Frequency Of the Object (Mass) */



    // Using Math-Operated Kinematic Bodies With The KinematicBody Class & The New I\O Algorithms.

    KinematicBody ThisArmProbably = *new KinematicBody; // Kinematic Bodies.

    InOutManip Factor = *new InOutManip;


    animc GeneralArm = *new animc;

    CMATH_IN math = *new CMATH_IN;

    if (math.IsFar(math.pi, math.st_arithmetic)) {  // Checks Which Is Farther.
        GeneralArm.move(10.2, "Arm", "A"); // Walks Until math.pi.
        GeneralArm.move(math.pi, "Leg", "L");
        return int(math.pi);
    }




    // Virtual Animation Using the New Animation Object & Deprecated animc Objects.
    // Animc Is Used For This Tutorial. For Animations And Frame Movement, Use The Animation Properties Specifier.

    Animation ThisAnim = *new Animation;


    /*
     * Animation Library Heavily Depends On File Opening & Parsing To Load.
     */
    ThisAnim.loadfile_raw("This.obanim");

    /*
     * Summary Of .obanim
     *
     * Object Animation Engine Uses Files to Parse Movement and Other Commands.
     *
     * If test.obanim Has :
     * !move 103
     * That's Equal To :
     * ThisAnim.move(103, ThisAnim, nullptr);
     *
     */


    ThisAnim.lines = 100; // Lines to Read
    ThisAnim.fileto = "test.obanim"; /* For Using LoadFileFromParams() */



    // Creating & Returning Windows User Details & Others

    /*
     * The Windex Library Stands For (Windows Index, Not The Glass Cleaner) And It is Used to Return Certain User Names, Login Times, CPU, Etc..
     */

    //* Cores
    anl_pf(to_string(Windex::ReturnUserCPU(true))); // True Makes sure it is returning the cores.

    //* User
    anl_pf(Windex::ReturnWindowsUser());

    //* Laptop
    anl_pf(Windex::ReturnWindowsLaptop());

    //* Details

    anl_pf(to_string(Windex::ReturnProcessorLevel()));




    // Create a Request Handler With Objects.h


    // First We Need to Add Some Auto_Account Maker...

    // And Using the Dummy Network Property Class, (network) We Can Make a Simple JSON Creator To Store Files to A Certain Directory.
    InOutManip AccountMaker = *new InOutManip;

    AccountMaker.Test("Hello, World!");

    IOAlgorithm AccountHandler = *new IOAlgorithm;

    network Handler = *new network;

    Sleepy Holder = *new Sleepy; /* Sleepy Library. (wait)*/

    KeyHooker KeyboardMan = *new KeyHooker;

    checkstream Agent = *new checkstream;
    anl_pf("Hello! Would you Like to Make a Account.?");

    if (KeyboardMan.GetVocabularyKey('y')) {
        anl_pf("Alright! I'll Get you Set Up.");
        Handler.log("new account made");
        Acc_Create Man = *new Acc_Create; // Build Account
        Holder.wait(3);
        anl_pf("What Is your Name?");
        AccountHandler.default_ptr = ">";
        AccountHandler.InitiateIOWithDP();
        anl_pf("Why Hello, " + AccountHandler.dte + ".");
        Holder.wait(2);
        Man.name = AccountHandler.dte;
        Man.dob = "UNKNOWN";
        Man.age = NULL;
        Man.ParseAllToJS(AccountHandler.dte + ".json");
        anl_pf("Thanks For Signing Up. The Logs Are In log/ And Your Account was Created As " + AccountHandler.dte + ".json :)");
    }
    else {
        anl_pf("Why did you use this program then?");
    }



    // Try Catching IS Easier With Objects.h


    // Most Functions Are Boolean Values Whether It's Something Like Input, Output, Checkstreaming, Most
    // Have Bool Values. So When you try-Catch With Something Like a function, If the functions Hits A
    // NULL Value (aka Can't Process anymore), THen it'll return False.
    // With Using this to your advantage, You could Do Try Catch With it.

    light VirtualLight = *new light;

    if (VirtualLight.create()) { // Check if Create Can Process.
        // Run Create
        VirtualLight.create();
        if (VirtualLight.On()) {
            return 0;
        }
    }
}