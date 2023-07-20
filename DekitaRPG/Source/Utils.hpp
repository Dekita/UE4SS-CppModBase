#pragma once

#include <ExceptionHandling.hpp>
#include <DynamicOutput/Output.hpp>
#include <DynamicOutput/DynamicOutput.hpp>
#include <Unreal/UObjectGlobals.hpp>
#include <Unreal/UObjectArray.hpp>
#include <Unreal/UObject.hpp>

// logging helpers
#define MAINLOG(Lv, Fmt, ...) Output::send<Lv>(STR("[Dek] ") STR(##Fmt) STR("\n"), __VA_ARGS__); 
#define LOG(FormatString, ...) MAINLOG(LogLevel::Default, FormatString, __VA_ARGS__)
#define INFO(FormatString, ...) MAINLOG(LogLevel::Verbose, FormatString, __VA_ARGS__)
#define WARNING(FormatString, ...) MAINLOG(LogLevel::Warning, FormatString, __VA_ARGS__)
#define ERROR(FormatString, ...) MAINLOG(LogLevel::Error, FormatString, __VA_ARGS__)
#define LOG_EXPR(...) { LOG(#__VA_ARGS__ L" = {}", __VA_ARGS__); }

using namespace RC;
namespace DekitaRPG {
	
	// check if a uobject is valid
	bool IsValidUObject(Unreal::UObject*);

};// namespace