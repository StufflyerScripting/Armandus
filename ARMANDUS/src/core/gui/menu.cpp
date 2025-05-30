#include "menu.h"
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"

// Optional: use only if you load a custom font
#include <string>

// Style and colors
void SetupImGuiStyle() {
    ImGui::StyleColorsDark();
    ImGuiStyle& style = ImGui::GetStyle();

    style.WindowRounding = 10.0f;
    style.FrameRounding = 10.0f;
    style.GrabRounding = 10.0f;
    style.ScrollbarRounding = 10.0f;

    ImVec4* colors = style.Colors;
    colors[ImGuiCol_WindowBg]         = ImVec4(0.12f, 0.13f, 0.17f, 1.00f);
    colors[ImGuiCol_Button]           = ImVec4(0.20f, 0.28f, 0.47f, 1.00f);
    colors[ImGuiCol_ButtonHovered]    = ImVec4(0.32f, 0.45f, 0.68f, 1.00f);
    colors[ImGuiCol_ButtonActive]     = ImVec4(0.25f, 0.35f, 0.60f, 1.00f);
    colors[ImGuiCol_Text]             = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
    colors[ImGuiCol_TitleBg]          = ImVec4(0.12f, 0.13f, 0.17f, 1.00f);
    colors[ImGuiCol_ChildBg]          = ImVec4(0.14f, 0.15f, 0.20f, 1.00f);
}

// Optional: load custom font
void LoadCustomFonts() {
    ImGuiIO& io = ImGui::GetIO();
    io.Fonts->AddFontFromFileTTF("../core/assets/fonts/MedievalSharp.ttf", 40.0f);
    // You can push the font before drawing if you want
}

// Menu UI
void LoadMenu() {
    // Centered window settings
    ImGuiIO& io = ImGui::GetIO();
    const float menuWidth = 800.0f;
    const float menuHeight = 600.0f;

    ImVec2 center = ImVec2(
        (io.DisplaySize.x - menuWidth) * 0.5f,
        (io.DisplaySize.y - menuHeight) * 0.5f
    );

    ImGui::SetNextWindowPos(center);
    ImGui::SetNextWindowSize(ImVec2(menuWidth, menuHeight));
    ImGui::Begin("Main Menu", nullptr,
        ImGuiWindowFlags_NoTitleBar |
        ImGuiWindowFlags_NoResize |
        ImGuiWindowFlags_NoMove |
        ImGuiWindowFlags_NoCollapse |
        ImGuiWindowFlags_NoBackground);

    ImGui::Spacing();
    ImGui::Spacing();
    ImGui::Text("  ");
    ImGui::SetCursorPosX((menuWidth - ImGui::CalcTextSize("Armandus").x) * 0.5f);
    ImGui::TextColored(ImVec4(0.3f, 0.6f, 1.0f, 1.0f), "Armandus");

    ImGui::Spacing(); ImGui::Spacing(); ImGui::Spacing();

    float buttonWidth = 600.0f;
    float buttonHeight = 100.0f;
    float xPos = (menuWidth - buttonWidth) * 0.5f;

    ImGui::SetCursorPosX(xPos);
    if (ImGui::Button("Start Game", ImVec2(buttonWidth, buttonHeight))) {
        // Start game logic
    }

    ImGui::Spacing();

    ImGui::SetCursorPosX(xPos);
    if (ImGui::Button("Options", ImVec2(buttonWidth, buttonHeight))) {
        // Options logic
    }

    ImGui::Spacing();

    ImGui::SetCursorPosX(xPos);
    if (ImGui::Button("Exit", ImVec2(buttonWidth, buttonHeight))) {
        
    }

    ImGui::End();
}
