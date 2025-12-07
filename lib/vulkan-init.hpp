#include <vulkan/vulkan.h>

typedef struct {
    VkInstance instance;
    VkPhysicalDevice physicalDevice;
    VkDevice device;
    VkQueue queue;
    VkCommandPool commandPool;
    VkDescriptorPool descriptorPool;
    VkDescriptorSetLayout descriptorSetLayout;
    VkPipelineLayout pipelineLayout;
    VkPipeline pipeline;
    VkShaderModule shaderModule;

    // For current operation
    VkBuffer buffer;
    VkDeviceMemory bufferMemory;
    VkDescriptorSet descriptorSet;
    size_t currentSize;
} VulkanContext;

void initVulkan(VulkanContext* context);
