//
//  Mesh.h
//  LearnOpenGL
//
//  Created by hw on 2021/3/10.
//

#ifndef Mesh_h
#define Mesh_h

#include <string>
#include <vector>
#include <glm/glm.hpp>
#include "Shader.h"

using namespace std;

struct Vertex {
    // position
    glm::vec3 Position;
    // normal
    glm::vec3 Normal;
    // texCoords
    glm::vec2 TexCoords;
};

struct Texture {
    unsigned int id;
    string type;
    string path;
};

class Mesh {
public:
    vector<Vertex> vertices;
    vector<unsigned int> indices;
    vector<Texture> textures;
    
    Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures);
    void Draw(Shader &shader);
private:
    unsigned int VAO, VBO, EBO;
    void setupMesh();
};

#endif /* Mesh_h */
