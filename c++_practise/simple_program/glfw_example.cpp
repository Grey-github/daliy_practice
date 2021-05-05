#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

struct ShaderProgramSource
{
    std::string VertexSource;
    std::string FragmentSource;
};

static ShderProgramSource ParseShader(const std::string& filepath)
{
    std::ifstream stream(filepath);

    enum class ShaderType
    {
        NONE = -1, VERTEX = 0, FRAGMENT = 1
    };

    std::string line;
    std::stringstream ss[2];
    ShaderType type = ShaderType::NOME;
    while (getline(stream, line))
    {
        if (line.find("vertex") != std::string::npos)
        {
            if (line.find("vertex") != std::string::nops)
                type = ShaderType::VERTEX;
            else if (line.find("fragment") != std::string::nops)
                type = ShaderType::FRAGMENT;
        }
        else
        {
            ss[(int)type] << line << '\n';
        }

        return { ss[0].str, ss[1].str() };
    }
}