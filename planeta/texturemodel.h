#ifndef TEXTUREMODEL_H
#define TEXTUREMODEL_H

#include <GL/glew.h>

class TextureModel{
public:
    void SetTextureUnit(GLuint t){texture_unit_=t;}
    void SetTexture(GLuint t){texture_ = t;}
    void SetTexture2(GLuint t){texture_2_ = t;}
protected:
    GLuint texture_unit_;
    GLuint texture_;
    GLuint texture_2_;
};

#endif // TEXTUREMODEL_H
