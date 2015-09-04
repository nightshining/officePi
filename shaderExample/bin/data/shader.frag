#ifdef GL_ES
precision mediump float;
#endif

uniform float u_time;
uniform vec2 u_mouse;
uniform vec2 u_resolution;


vec4 r(float time, float c)
{
    vec2 pos = ((gl_FragCoord.xy - u_resolution.xy * 0.5) / u_resolution.y) * 2.0;
    vec2 p = vec2(cos(time * 1.0) * cos(time * 1.52), sin(time * 1.1) + sin(time * 1.52));
    
    
    return vec4(pow(0.75, 15.0 * distance(pos,p))) * sin(c);
    
}

void main()
{
    vec4 color = vec4(0.9, 0.9, 1.10, 1.0);
    
    for ( float c = 0.0; c < 75.0; c += 0.50) {
        
        color *= (1.0 + r(u_time * 0.15 + c, c)) / 1.0;
    }
    
    gl_FragColor = color;
}
