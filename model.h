#pragma once
#include <GL/glew.h>
#include <glm/glm.hpp>
#include "shader.h"
#include <string>
#include <vector>

class Model {
public:
    Model();
    ~Model();

    bool initialize(const std::string& path);
    void draw(Shader& shader, const glm::vec3& translation, float rotationAngle, float scaleFactor) const;
    void cleanup() const;

private:
    GLuint VAO, VBO;
    GLsizei vertexCount;
};

