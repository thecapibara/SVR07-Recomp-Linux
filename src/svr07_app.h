// svr07 - ReXGlue Recompiled Project
//
// This file is yours to edit. 'rexglue migrate' will NOT overwrite it.
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <rex/rex_app.h>

class Svr07App : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<Svr07App>(
        new Svr07App(ctx, "svr07", PPCImageConfig));
  }

   void OnConfigurePaths(rex::PathConfig& paths) override {
    // Keep the normal game mount.
    // paths.game_data_root already points to your assets folder.

    // Point UPDATE: to a separate folder containing the title update files.
    paths.update_data_root =
        std::filesystem::path(R"(\assets\1_update)");

    // Optional: point cache to a custom directory.
    // paths.cache_data_root =
    //   std::filesystem::path(R"(path\to\your\cache\folder)");

    // Optional: keep user data wherever you already want it.
    // paths.user_data_root = std::filesystem::path(R"(path\to\your\user\data)");
  }

  // Override virtual hooks for customization:
  // void OnPreSetup(rex::RuntimeConfig& config) override {}
  // void OnLoadXexImage(std::string& xex_image) override {}
  // void OnPostSetup() override {}
  // void OnCreateDialogs(rex::ui::ImGuiDrawer* drawer) override {}
  // void OnShutdown() override {}
  // void OnConfigurePaths(rex::PathConfig& paths) override {}
};