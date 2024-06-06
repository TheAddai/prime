#pragma once

#include "engine/all.h"
#include "imgui/imguiAPI.h"

namespace prime {

	class Editor : public App
	{
	public:
		Editor() = default;

		void Init() override;
		void Shutdown() override;

		void Update(Timestep& timestep) override;
		void OnWindowResize(const WindowResizeEvent&);

	private:
		void SetColors();
		void Dockspace();
		void Viewport();

	private:
		Ref<Scene> m_scene;
		std::unique_ptr<ImGuiAPI> m_imguiAPI;

		Ref<Framebuffer> m_framebuffer;
		glm::vec2 m_viewportSize = glm::vec2(0.0f);
	};
}
