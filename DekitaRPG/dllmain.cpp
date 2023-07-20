
#include <Mod/CppUserModBase.hpp>
#include "Source/Kore.hpp"

/**
* MyUe4ssMod: UE4SS c++ mod class defintion
*/
class MyUe4ssMod : public CppUserModBase {
public:
    // constructor
    MyUe4ssMod() : CppUserModBase() {
        ModVersion = STR("0.1");
        ModName = STR("UE4SS-CppModBase");
        ModAuthors = STR("DekitaRPG@gmail.com");
        ModDescription = STR("A simple mod base for ue4ss cpp mods");
        INFO("{} creating...", ModName);
    }
    // destructor
    ~MyUe4ssMod() {
        ERROR("{} deconstructed!", ModName);
        // fill when required
    }
    // You are allowed to use the 'Unreal' namespace in this function and anywhere else after this function has fired.
    auto on_unreal_init() -> void override {
        DekitaRPG::Kore::OnUnrealInitialized();
        INFO("{} initialized!", ModName);
    }
    // called after everything has fully initialized
    auto on_program_start() -> void override {
        DekitaRPG::Kore::OnProgramStarted();
        INFO("{} [v{}] started!", ModName, ModVersion);
        INFO("Author: {}", ModAuthors);
        INFO("{}", ModDescription);
    }
    // called each update
    auto on_update() -> void override {
        DekitaRPG::Kore::OnUpdate();
    }
};//class

/**
* export the start_mod() and uninstall_mod() functions to
* be used by the core ue4ss system to load in our dll mod
*/
#define MOD_EXPORT __declspec(dllexport) 
extern "C" {
    MOD_EXPORT CppUserModBase* start_mod(){ return new MyUe4ssMod(); }
    MOD_EXPORT void uninstall_mod(CppUserModBase* mod) { delete mod; }
}