//
//  Shader.h
//  LearnOpenGL
//
//  Created by cjf on 2021/2/15.
//

#ifndef Shader_h
#define Shader_h

#include <stdio.h>
#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    unsigned int ID;
    
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
    
    void use();
    
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
    void set4f(const std::string &name, float r, float g, float b, float a) const;
};

#endif /* Shader_h */
