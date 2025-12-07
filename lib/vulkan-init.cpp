#include <vulkan-init.hpp>
#include <vulkan/vulkan.h>

void initVulkan(VulkanContext* context) {
    VulkanContext* ctx = context;
    ctx->instance = VK_NULL_HANDLE;
    ctx->physicalDevice = VK_NULL_HANDLE;
}
