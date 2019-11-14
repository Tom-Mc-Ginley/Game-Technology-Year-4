#version 330

in vec2 TexCoord0;
in vec4 LightIntensity0;

out vec4 FragColor;

uniform sampler2D gTextureSampler;

void main()
{
    FragColor = texture2D(gTextureSampler, TexCoord0.xy) * LightIntensity0;
}