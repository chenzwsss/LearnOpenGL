//
//  Model.h
//  LearnOpenGL
//
//  Created by hw on 2021/3/10.
//

#ifndef Model_h
#define Model_h

#include "Shader.h"
#include <vector>
#include <string>
#include "Mesh.h"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

using namespace std;

class Model {
public:
    Model(string path);
    void Draw(Shader shader);
private:
    vector<Mesh> meshes;
    string directory;
    vector<Texture> textures_loaded;
    
    void loadModel(string path);
    void processNode(aiNode* node, const aiScene* scene);
    Mesh processMesh(aiMesh* mesh, const aiScene* scene);
    vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type, string typeName);
};

#endif /* Model_h */
