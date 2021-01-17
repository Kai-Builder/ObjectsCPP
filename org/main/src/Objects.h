//
// Created by KG on 1/15/2021.
//

#include <iostream>
#include <utility>
#include <vector>
#include <windows.h>
#include <Lmcons.h>
#include <winbase.h>
#include <conio.h>
#include <string> /* std::string, std::to_string */
#include <fstream> /* Fstream::app, Fstream::binary */
#include <cstdio> /* printf, scanf, puts, NULL, nullptr */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


using namespace std;
vector<int> Submitter{};

// Classic Stream Buffer
class Stream {
public:
    int x;
    char *v;
};

// Basic Alg Engine
class GlEngineRenderer {
public:
    string type_specifier{};
    int max{};
    int min{};
};


// SH Default
class SubmissionHandler {
public:
    int s1;
    int s2;

    void submit() const {
        Submitter.push_back(s1);
        Submitter.push_back(s2);
    }

    static void table() {
        for (int i : Submitter) {
            printf("%i, ", i);
        }
    }
};


// StrC Type
class StringCreator {
public:
    string ptr_name;
    string cur;
    int pt{};
};

// Method Classdef
class MethodManager {
public:
    string id;

    void pID() const {
        std::cout << id << endl;
    }

};

// Array Grouping
class ArrayGrouper {
public:
    vector<string> bufferlogs{};

    void nlog(const vector<string> &c) {
        cout << "Commiting " << c.size() << " Types to Buffers." << endl;
        for (const auto &i : c) {
            bufferlogs.push_back(i);
        }
    };
};

// Buffer Stream C++.
class Buff {
public:
    string cbufstream{};
    char *cbuffer = const_cast<char *>(cbufstream.c_str());
    char _xf{};
    char UX{};
    char all{static_cast<char>(_xf + UX)};

    void buffer(char v) {
        switch (_xf) {
            /*
             * Algorithm For C++ Bufferstream
             */
            case 'a':
                _xf++;
            case 'A':
                UX++;
            default:
                all++;
        }
    }
};
namespace renderers {
    class AL_GPFastRender {
    public:
        string TM{"ALG FastRender."};

        static void Init() {
            cout << "Using ALG FR." << endl;
            cout << "FastRender Provides Many C++ Buffer Streams For Easy Manipulation." << endl;
        }

        static void GetRendererState(const string &state) {
            if (state == "idle") {
                cout << "ALGP Is Not Rendering Any Objects Currently" << endl;
            } else if (state == "lch" || state == "launch") {
                cout << "You are in the Launcher." << endl;
            } else {
                cout << __LINE__
                     << "@GetRendererState, Render State Must Contain A Value.\n(This Error Occurs When Incorrect Render States Are Set Or None at all.)"
                     << endl;
            }
        }
    };
}
class IOAlgorithm {
public:
    /*
     * Default IO Pointer.
     */
    string default_ptr{};

    string dte;

    string dyn_io_return_arg{};

    string aft{};

    string exception{};
    vector<string> Arguments{};

    static bool ChipBufferStream() {
        std::cin.ignore(256, '\n');
        return true;
    }

    bool InitiateIOWithDP() {
        cout << default_ptr;
        cin >> dte;
        return true;
    };

    bool InitiateIoWithoutDP() {
        cin >> dte;
        return true;
    }

    bool StatementR() {
        cout << default_ptr;
        cin >> dte;
        if (dte == dyn_io_return_arg) {
            cout << aft << endl;
            return true;
        } else {
            cout << exception << endl;
            return false;
        }
    }

};

class CLGL {
public:
    string renderer{};

    /*
     * CLGL Renderer
     */
    void use() const {
        if (renderer == "algp") {
            renderers::AL_GPFastRender::Init();
        }
    }
};

class VirtualWorldOperator {
public:
    void executeConsoleCommand(const string &command) {
        system(command.c_str());
    }

    string worldname{};
    string worldauthor{};
    int worldsizex{};
    int worldsizey{};
    int worldsizez{};

    bool worldStats() const {
        cout << "World Name: " << worldname << "." << endl;
        cout << "World Author: " << worldauthor << "." << endl;
        cout << "Other Stats VV\nWorld Y Angle: " << worldsizey << ".\nWorld X Angle: " << worldsizex
             << ".\nWorld Size Z: " << worldsizez << "." << endl;
        return true;
    }
};

class Windex {
public:
    static string ReturnWindowsUser() {
        char username[UNLEN + 1];
        DWORD username_len = UNLEN + 1;
        GetUserName(username, &username_len);
        cout << username << endl;
        return username;
    }

    static string ReturnWindowsLaptop() {
        long unsigned int bufsize = 100;
        char buf[100];
        GetUserNameA(buf, &bufsize);
        cout << buf;
        return buf;
    }

    static int ReturnUserCPU(bool core) {
        if (core) {
            SYSTEM_INFO sysinfo;
            GetSystemInfo(&sysinfo);
            int numCPU = sysinfo.dwNumberOfProcessors;
            cout << numCPU;
            return numCPU;
        } else {
            SYSTEM_INFO sysinfo;
            GetSystemInfo(&sysinfo);
            string typeCPU = reinterpret_cast<const char *>(sysinfo.dwProcessorType);
            cout << "Successfully Got CPU Type, " << typeCPU;
            return 1;
        }
    }

    static int ReturnProcessorLevel() {
        SYSTEM_INFO sysinfo;
        GetSystemInfo(&sysinfo);
        int numCPU = sysinfo.wProcessorLevel;
        cout << numCPU;
        return numCPU;
    }

    static string ReturnFilePathInWindow() {
        char filename[] = "test.txt";
        char fullFilename[MAX_PATH];
        GetFullPathName(filename, MAX_PATH, fullFilename, nullptr);
        MessageBox(nullptr, fullFilename, "Confirmation Windows", MB_OK);
        return filename;
    }

};

class BufferStream {
public:
    int TryGetBufferAmount();
};

int BufferStream::TryGetBufferAmount() {
    size_t BASIC_BUFFER_STD{1000};

    return BASIC_BUFFER_STD;
}

class Acc_Create {
public:
    int age;
    string dob;
    string name;

    bool ParseAllToJS(string f) const {
        ofstream ifiel(f);
        ifiel << "{\n"
                 "  \"User.UserName\": [\n"
                 "    \"" << name << "\"\n"
                                     "  ],\n"
                                     "  \"User.Age\": [\n"
                                     "    " << age << "\n"
                                                      "  ],\n"
                                                      "  \"User.DateOfBirth\": [\n"
                                                      "    \"" << dob << "\"\n"
                                                                         "  ]\n"
                                                                         "}";
        ifiel.close();
        return true;
    }
};

class Table {
public:
    vector<string> Components{};

    void components() {
        for (auto &Component : Components) {
            cout << Component << endl;
        }
    }

    void commit(const string &_g) {
        Components.push_back(_g);
    }

    void commitMultiple(const vector<string> &G) {
        for (const auto &i : G) {
            Components.push_back(i);
        }
    }
};

class DataStream {
public:
    string len{};

    string idefault{};

    string ndefault;

    int age{};

    string yaml_standard{};

    string build{};

    void storetofile() const {
        ofstream ifile(len);
        ifile << "{\n"
                 "  \"Field1\": [\n"
                 "    \"" << ndefault << "\"\n"
                                         "  ],\n"
                                         "  \"Field2\": [\n"
                                         "    " << age << "\n"
                                                          "  ],\n"
                                                          "  \"RequiredField3\": [\n"
                                                          "    \"" << idefault << "\"\n"
                                                                                  "  ]\n"
                                                                                  "}";
        ifile.close();
    }

    void raw_storetofile(const string &fname, const string &name, const int &dob, const int &int_age) {
        ofstream ifile(fname);
        ifile << "{\n"
                 "  \"User.UserName\": [\n"
                 "    \"" << name << "\"\n"
                                     "  ],\n"
                                     "  \"User.Age\": [\n"
                                     "    " << int_age << "\n"
                                                          "  ],\n"
                                                          "  \"User.DateOfBirth\": [\n"
                                                          "    \"" << dob << "\"\n"
                                                                             "  ]\n"
                                                                             "}";
        ifile.close();

    }

    void StoreYML() const {
        ofstream ifile(yaml_standard);
        ifile << "build: " << build << "\nauthor: " << ndefault
              << "\ndescription: This File Was Generated By The Object Engine." << endl;
        ifile.close();
    }
};

class CodeBase {
public:
    vector<string> defaults{"demo"};

    vector<string> heldonce{};

    void PrintAtPosition(const vector<string> v, const int pos) {
        cout << v[pos];
    }

    void get_sizeof(const string &thi) {
        cout << thi.size();
    }
};

void anl_pf(const string &v) {
    cout << v << endl;
}

class KeyHooker {
public:
    string keyVName{};

    char KeyVocab = _getch();
    string key_ptr = keyVName;

    int key = _getch();

    vector<int> KeysByKeyCodes{};

    // Push Back KeyBoard KeyCode
    void AddKey(int keyf) {
        KeysByKeyCodes.push_back(keyf);
    }

    // Keyboard Input With Loose/Static Default Expression
    void GetKeyBoardInputByKBKC(int pos, const string &default_, const string &v) {
        while (key) {
            for (int i = 0; i < pos; i++) {
                if (key == KeysByKeyCodes[pos]) {
                    cout << v << endl;
                } else {
                    cout << default_ << endl;
                }

            }

        }
    }

    bool GetLooseKey(int KC) const {
        if (key == KC) {
            return true;
        } else {
            return false;
        }
    }

    bool GetVocabularyKey(char T) const {
        if (KeyVocab == T) {
            return true;
        } else {
            return false;
        }
    }
};

class IoFixModule {
public:
    string f;

    bool Get(string H, string val) {
        cin >> H;
        if (H == val) {
            return true;
        } else {
            return false;
        }
    }

    bool GetVar(string v, string em) {
        cin >> v;
        if (v == em) {
            return true;
        } else {
            return false;
        }
    }
};

class Module {
public:
    string name;
    string date_made;
    string author;
    string dependencies;
    string extras;
    string onrun;
    string test;


    void publish() {
        // INSERT VAR CHECK
        if (name.empty()) {
            cout << Windex::ReturnWindowsUser() << "@" << Windex::ReturnFilePathInWindow();
        }
    }
};

class Solid {
public:
    double frequency{};
    int x{};
    int y{};
    int z{};
};

class Mutator {
public:
    void mutate(int num) {
        num++;
        cout << "Mutated Num To " << num << endl;
    }
};

class PlayerController {
protected:
    string id{};
    int max_keeping{};
    string object_name{};
public:
    explicit PlayerController(string na, string pcn) {
        id = std::move(na);
        object_name = std::move(pcn);
    }

    explicit PlayerController(const string &initstream) {
        cout << "Initialized PlayerController As " << initstream << "." << endl;
    }
};

class animc {
public:
    bool move(int frames, const string &objectname, const string &alias) {
        for (int i = 0; i < frames; i++) {
            cout << objectname << " Moved " << i << " Frame Without Error.\n\n";
            Sleep(548);
        }
        return true;
    }

    bool move(long double frames, const string &objectname, const string &alias) {
        for (int i = 0; i < frames; i++) {
            cout << objectname << " Moved " << i << " Frame Without Error.\n\n";
            Sleep(548);
        }
        return true;
    }

    bool move(double frames, const string &objectname, const string &alias) {
        for (int i = 0; i < frames; i++) {
            cout << objectname << " Moved " << i << " Frame Without Error.\n\n";
            Sleep(548);
        }
        return true;
    }
};

class UserStreamOperator {
public:
    string name{};
    int age{};

    void write(string thisc) {
        cout << "<" << name << "> " << thisc << " (" << __DATE__ << ")" << endl;
    }
};

class Random {
public:

    int MAXREP = 100;
    int DefualtMax = 10;
    int rofdefaultmax = rand() % DefualtMax;

    void RandResponse(vector<string> l) {
        for (int i = 0; i < l.size(); i++) {
            srand(time(nullptr));

            cout << l[rofdefaultmax] << endl;
        }
    }
};

class Sleepy {
public:
    bool wait(int seconds) {
        int final = seconds * 1000;
        Sleep(final);
        return true;
    }
};

class KinematicBody {
public:

    int BodyParts{};
    int Rig{};
    bool IsNew{};
    string RigID{};

    void CreateNewKinematicBasedOnArgSet() {
        anl_pf("Creating A New Kinematic Body With The Rig Type Of " + to_string(Rig) + ", With " +
               to_string(BodyParts) + " Amount of Parts.");
        Sleep(1000);
        anl_pf("Created New Kinematic Body With Args Set.");
    }

};

class InOutManip {
protected:
    int User_age{};
    string default_ptr{};
    string get_ptr{};
public:
    bool Test(const string &TS /* Usually strings Got With cin >> */) {
        if (TS == get_ptr) {
            return true;
        } else {
            return false;
        }
    }

};

class AClient {
public:
    int limit{};
    string clientname{};
    unsigned long long id{};

};

class Animation {
public:
    string fileto{};
    int lines{};

    bool loadfile_raw(const string &file) {
        ifstream ifile(file);
        if (!ifile) {
            return false;
        } else {
            string commands;
            while (ifile >> commands) {
                if (commands == "!move") {
                    int frames;
                    cin >> frames;
                    for (int i = 0; i < frames; i++) {
                        anl_pf("Successfully Moved " + to_string(i) + " Line(s)");
                        Sleep(400);
                    }
                } else if (commands == "#read") {
                    string action;
                    if (action == "once") {
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
                return true;
            }
            return true;
        }

    }

    bool LoadFromParams() {
        ifstream ifile(fileto);
        if (!ifile) {
            return false;
        } else {
            string commands;
            while (ifile >> commands) {
                if (commands == "!move") {
                    int frames;
                    cin >> frames;
                    for (int i = 0; i < frames; i++) {
                        anl_pf("Successfully Moved " + to_string(i) + " Line(s)");
                        Sleep(400);
                    }
                } else if (commands == "#read") {
                    string action;
                    if (action == "once") {
                        return true;
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
                return true;
            }
            return true;
        }

    }
};

class CMATH_IN {
public:
    const long double pi = 3.14159265;

    long double return_pi() {
        return pi;
    }

    const long double st_arithmetic = 31.3234102;

    long double return_sta() {
        return st_arithmetic;
    }

    long double alter(string var) {
        double rs = 1.2;
        long double FSR = st_arithmetic * var.size() + rs;

        return FSR;
    }

    bool IsFar(long double value, long double value2) {
        double length = value - value2;

        if (length >= 10.0) {
            return true;
        } else if (length <= 20.3) {
            return false;
        } else {
            return true;
        }

    }
};

class network {
protected:
    string basic_user{};
    string rlname{};
    int ages{};
    double balance{};
public:
    string alias{};
    vector<string>names{};
    vector<double>balances{};
    vector<int>agek{};
    void log(string activity) {
        CreateDirectory("logs", nullptr);
        ofstream isfile("logs\\log.txt", fstream::app);
        isfile << activity << "@" << __TIME__ << endl;
        isfile.close();
    }
};

class checkstream {
public:
    string a1;
    string a2;
    bool check(string s, string g) {
        if (s == g) {
            return true;
        } else {
            return false;
        }
    }
};

class light {
public:
    double frequency{};

    long double brightness{};

    string light_name{};

    long int light_id{};

    bool create() {
        return true;
    }
    bool On() {
        return true;
    }
    bool Off() {
        return false;
    }
};

class LocalPlayer {
public:
    int health = 100;
    string Body1 = "BodyPart1";
    string Body2 = "BodyPart2";

    string GetFirstChild(string data) {
        if (data == "PlayerHealth") {
            return to_string(health);
        }
        else if (data == "LooseBody1") {
            return Body1;
        }
        else if (data == "LooseBody2") {
            return Body2;
        }
        else {
            cout << "LINE " << __LINE__ << "@GetFirstChild : Data Must Contain A Value Of Player_Model."  << endl;
            string err = "nil";
            return err;
        }
    }
};

class Service {
public:
    string type{};
    string date_made{};
    string dependencies{};
    string license{};
    string Description{};
    void Label() {
        cout << "New Server Service: " << type << "\nLicense: " << license << "\nDate Created: " << date_made
             << "\nDependencies: " << dependencies << ".";
    }
};
/*
 *
 */
class Exclamation