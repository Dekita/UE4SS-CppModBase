#include "Kore.hpp"

/**
* DekitaRPG::Kore
* main mod logic class
*/
namespace DekitaRPG {

    /**
    * OnUnrealInitialized()
    * called when unreal engine initializes
    * able to use the 'Unreal' namespace in this function and anywhere else after this function has fired.
    */

    void Kore::OnUnrealInitialized() {
        INFO("DekitaRPG::Kore::OnUnrealInitialized()");
    }

    /**
    * OnProgramStarted()
    * called when the application properly begins
    */
    void Kore::OnProgramStarted() {
        INFO("DekitaRPG::Kore::OnProgramStarted()");
    }

    /**
    * OnUpdate()
    * called during each update
    */
    void Kore::OnUpdate() {
        //LOG("DekitaRPG::Kore::OnUpdate()")
    }
};// namespace