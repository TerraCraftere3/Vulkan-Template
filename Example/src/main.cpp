#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <cstdlib>
#include <iostream>
#include <stdexcept>

class Application {
 public:
  void run() {
    initVulkan();
    mainLoop();
    cleanup();
  }

 private:
  void initVulkan() {}

  void mainLoop() {}

  void cleanup() {}
};

int main() {
  Application app;

  try {
    app.run();
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}