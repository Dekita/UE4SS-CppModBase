### UE4SS::CppModBase 
A barebones project designed to be cloned and used as a base for UE4SS C++ mods. 

### How To Setup

```
git clone https://github.com/Dekita/UE4SS-CppModBase.git
cd UE4SS-CppModBase
git submodule update --init --recursive
```

Once the project is cloned and the submodules have been updated, open the root projects `CMakeLists.txt` file as a cmake project in visual studio then run build all. After this initial build you can then open `/Output/build/Release/AwesomeModExampleProjectKore.sln` if you'd rather open the solution, but new files must be added while using cmakelists project (or outwith vs and then rec-compiling the cmake lists version) so could be easier to stay in that :heart:


Check out [my ue4ss testing mod](https://github.com/Dekita/DekitaMod) for an example on how to hook into a specific actors interface functions or functions from a specific blueprint function library :sparkling_heart:
