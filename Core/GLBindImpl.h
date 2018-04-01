// Autogenerated file: do not modify

#if _WIN32
#	define NUM_GLFUNCS	58
#	define NUM_EXTFUNCS	37
#	define NUM_EXTENSIONS	11
#elif __linux__
#	define NUM_GLFUNCS	58
#	define NUM_EXTFUNCS	37
#	define NUM_EXTENSIONS	11
#else
#	define NUM_GLFUNCS	58
#	define NUM_EXTFUNCS	37
#	define NUM_EXTENSIONS	11
#endif


static const char *GLNames[NUM_GLFUNCS + NUM_EXTFUNCS] = {
	"glAlphaFunc",
	"glBegin",
	"glBindTexture",
	"glBlendFunc",
	"glClear",
	"glClearColor",
	"glColor3f",
	"glColor3fv",
	"glColor4f",
	"glColor4fv",
	"glColor4ubv",
	"glColorPointer",
	"glCullFace",
	"glDeleteTextures",
	"glDepthFunc",
	"glDepthMask",
	"glDepthRange",
	"glDisable",
	"glDisableClientState",
	"glDrawElements",
	"glEnable",
	"glEnableClientState",
	"glEnd",
	"glFinish",
	"glGenTextures",
	"glGetError",
	"glGetIntegerv",
	"glGetMaterialfv",
	"glGetString",
	"glIsEnabled",
	"glIsTexture",
	"glLightModeli",
	"glLightfv",
	"glLineWidth",
	"glLoadIdentity",
	"glLoadMatrixf",
	"glMaterialf",
	"glMaterialfv",
	"glMatrixMode",
	"glNormal3fv",
	"glNormalPointer",
	"glOrtho",
	"glPolygonMode",
	"glPopMatrix",
	"glPushMatrix",
	"glReadPixels",
	"glRotatef",
	"glScissor",
	"glShadeModel",
	"glTexCoord2f",
	"glTexCoordPointer",
	"glTexImage2D",
	"glTexParameteri",
	"glVertex2f",
	"glVertex3f",
	"glVertex3fv",
	"glVertexPointer",
	"glViewport"
#if _WIN32


#endif

,
	"glActiveTexture",
	"glCompressedTexImage2D",
	"glAttachShader",
	"glCompileShader",
	"glCreateProgram",
	"glCreateShader",
	"glDeleteProgram",
	"glDeleteShader",
	"glDetachShader",
	"glDisableVertexAttribArray",
	"glEnableVertexAttribArray",
	"glGetAttribLocation",
	"glGetProgramiv",
	"glGetProgramInfoLog",
	"glGetShaderiv",
	"glGetShaderInfoLog",
	"glGetUniformLocation",
	"glLinkProgram",
	"glShaderSource",
	"glUseProgram",
	"glUniform1f",
	"glUniform2f",
	"glUniform1i",
	"glUniform3fv",
	"glVertexAttrib3fv",
	"glVertexAttribPointer",
	"glBindRenderbufferEXT",
	"glDeleteRenderbuffersEXT",
	"glGenRenderbuffersEXT",
	"glRenderbufferStorageEXT",
	"glBindFramebufferEXT",
	"glDeleteFramebuffersEXT",
	"glGenFramebuffersEXT",
	"glCheckFramebufferStatusEXT",
	"glFramebufferTexture2DEXT",
	"glFramebufferRenderbufferEXT",
	"glGenerateMipmapEXT"
#if _WIN32


#elif __linux__

#endif


};

#if !NO_GL_LOG


static const char *EnumName(GLenum v)
{
	switch (v)
	{
	case GL_NEAREST:
		return "NEAREST";
	case GL_LINEAR:
		return "LINEAR";
	case GL_NEAREST_MIPMAP_NEAREST:
		return "NEAREST_MIPMAP_NEAREST";
	case GL_LINEAR_MIPMAP_NEAREST:
		return "LINEAR_MIPMAP_NEAREST";
	case GL_NEAREST_MIPMAP_LINEAR:
		return "NEAREST_MIPMAP_LINEAR";
	case GL_LINEAR_MIPMAP_LINEAR:
		return "LINEAR_MIPMAP_LINEAR";
	case GL_TEXTURE_MAG_FILTER:
		return "TEXTURE_MAG_FILTER";
	case GL_TEXTURE_MIN_FILTER:
		return "TEXTURE_MIN_FILTER";
	case GL_TEXTURE_WRAP_S:
		return "TEXTURE_WRAP_S";
	case GL_TEXTURE_WRAP_T:
		return "TEXTURE_WRAP_T";
	default:
		return va("UNK_%X", v);
	}
}


static void APIENTRY logAlphaFunc(GLenum func, GLclampf ref)
{
	printf("%s(GL_%s, %g)\n", "glAlphaFunc", EnumName(func), ref);
	lib.AlphaFunc(func, ref);
}

static void APIENTRY logBegin(GLenum mode)
{
	printf("%s(GL_%s)\n", "glBegin", EnumName(mode));
	lib.Begin(mode);
}

static void APIENTRY logBindTexture(GLenum target, GLuint texture)
{
	printf("%s(GL_%s, %d)\n", "glBindTexture", EnumName(target), texture);
	lib.BindTexture(target, texture);
}

static void APIENTRY logBlendFunc(GLenum sfactor, GLenum dfactor)
{
	printf("%s(GL_%s, GL_%s)\n", "glBlendFunc", EnumName(sfactor), EnumName(dfactor));
	lib.BlendFunc(sfactor, dfactor);
}

static void APIENTRY logClear(GLbitfield mask)
{
	printf("%s\n", "glClear");
	lib.Clear(mask);
}

static void APIENTRY logClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	printf("%s(%g, %g, %g, %g)\n", "glClearColor", red, green, blue, alpha);
	lib.ClearColor(red, green, blue, alpha);
}

static void APIENTRY logColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	printf("%s(%g, %g, %g)\n", "glColor3f", red, green, blue);
	lib.Color3f(red, green, blue);
}

static void APIENTRY logColor3fv(const GLfloat * v)
{
	printf("%s\n", "glColor3fv");
	lib.Color3fv(v);
}

static void APIENTRY logColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	printf("%s(%g, %g, %g, %g)\n", "glColor4f", red, green, blue, alpha);
	lib.Color4f(red, green, blue, alpha);
}

static void APIENTRY logColor4fv(const GLfloat * v)
{
	printf("%s\n", "glColor4fv");
	lib.Color4fv(v);
}

static void APIENTRY logColor4ubv(const GLubyte * v)
{
	printf("%s\n", "glColor4ubv");
	lib.Color4ubv(v);
}

static void APIENTRY logColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
	printf("%s(%d, GL_%s, %d, $%X)\n", "glColorPointer", size, EnumName(type), stride, (unsigned)pointer);
	lib.ColorPointer(size, type, stride, pointer);
}

static void APIENTRY logCullFace(GLenum mode)
{
	printf("%s(GL_%s)\n", "glCullFace", EnumName(mode));
	lib.CullFace(mode);
}

static void APIENTRY logDeleteTextures(GLsizei n, const GLuint * textures)
{
	printf("%s(%d, $%X)\n", "glDeleteTextures", n, (unsigned)textures);
	lib.DeleteTextures(n, textures);
}

static void APIENTRY logDepthFunc(GLenum func)
{
	printf("%s(GL_%s)\n", "glDepthFunc", EnumName(func));
	lib.DepthFunc(func);
}

static void APIENTRY logDepthMask(GLboolean flag)
{
	printf("%s(%d)\n", "glDepthMask", flag);
	lib.DepthMask(flag);
}

static void APIENTRY logDepthRange(GLclampd zNear, GLclampd zFar)
{
	printf("%s(%g, %g)\n", "glDepthRange", zNear, zFar);
	lib.DepthRange(zNear, zFar);
}

static void APIENTRY logDisable(GLenum cap)
{
	printf("%s(GL_%s)\n", "glDisable", EnumName(cap));
	lib.Disable(cap);
}

static void APIENTRY logDisableClientState(GLenum array)
{
	printf("%s(GL_%s)\n", "glDisableClientState", EnumName(array));
	lib.DisableClientState(array);
}

static void APIENTRY logDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices)
{
	printf("%s(GL_%s, %d, GL_%s, $%X)\n", "glDrawElements", EnumName(mode), count, EnumName(type), (unsigned)indices);
	lib.DrawElements(mode, count, type, indices);
}

static void APIENTRY logEnable(GLenum cap)
{
	printf("%s(GL_%s)\n", "glEnable", EnumName(cap));
	lib.Enable(cap);
}

static void APIENTRY logEnableClientState(GLenum array)
{
	printf("%s(GL_%s)\n", "glEnableClientState", EnumName(array));
	lib.EnableClientState(array);
}

static void APIENTRY logEnd()
{
	printf("%s\n", "glEnd");
	lib.End();
}

static void APIENTRY logFinish()
{
	printf("%s\n", "glFinish");
	lib.Finish();
}

static void APIENTRY logGenTextures(GLsizei n, GLuint * textures)
{
	printf("%s\n", "glGenTextures");
	lib.GenTextures(n, textures);
}

static GLenum APIENTRY logGetError()
{
	return lib.GetError();
}

static void APIENTRY logGetIntegerv(GLenum pname, GLint * params)
{
	printf("%s\n", "glGetIntegerv");
	lib.GetIntegerv(pname, params);
}

static void APIENTRY logGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
	printf("%s\n", "glGetMaterialfv");
	lib.GetMaterialfv(face, pname, params);
}

static const GLubyte * APIENTRY logGetString(GLenum name)
{
	printf("%s\n", "glGetString");
	return lib.GetString(name);
}

static GLboolean APIENTRY logIsEnabled(GLenum cap)
{
	printf("%s\n", "glIsEnabled");
	return lib.IsEnabled(cap);
}

static GLboolean APIENTRY logIsTexture(GLuint texture)
{
	printf("%s\n", "glIsTexture");
	return lib.IsTexture(texture);
}

static void APIENTRY logLightModeli(GLenum pname, GLint param)
{
	printf("%s\n", "glLightModeli");
	lib.LightModeli(pname, param);
}

static void APIENTRY logLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
	printf("%s\n", "glLightfv");
	lib.Lightfv(light, pname, params);
}

static void APIENTRY logLineWidth(GLfloat width)
{
	printf("%s\n", "glLineWidth");
	lib.LineWidth(width);
}

static void APIENTRY logLoadIdentity()
{
	printf("%s\n", "glLoadIdentity");
	lib.LoadIdentity();
}

static void APIENTRY logLoadMatrixf(const GLfloat * m)
{
	printf("%s\n", "glLoadMatrixf");
	lib.LoadMatrixf(m);
}

static void APIENTRY logMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	printf("%s\n", "glMaterialf");
	lib.Materialf(face, pname, param);
}

static void APIENTRY logMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
	printf("%s\n", "glMaterialfv");
	lib.Materialfv(face, pname, params);
}

static void APIENTRY logMatrixMode(GLenum mode)
{
	printf("%s(GL_%s)\n", "glMatrixMode", EnumName(mode));
	lib.MatrixMode(mode);
}

static void APIENTRY logNormal3fv(const GLfloat * v)
{
	printf("%s\n", "glNormal3fv");
	lib.Normal3fv(v);
}

static void APIENTRY logNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer)
{
	printf("%s\n", "glNormalPointer");
	lib.NormalPointer(type, stride, pointer);
}

static void APIENTRY logOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	printf("%s(%g, %g, %g, %g, %g, %g)\n", "glOrtho", left, right, bottom, top, zNear, zFar);
	lib.Ortho(left, right, bottom, top, zNear, zFar);
}

static void APIENTRY logPolygonMode(GLenum face, GLenum mode)
{
	printf("%s(GL_%s, GL_%s)\n", "glPolygonMode", EnumName(face), EnumName(mode));
	lib.PolygonMode(face, mode);
}

static void APIENTRY logPopMatrix()
{
	printf("%s\n", "glPopMatrix");
	lib.PopMatrix();
}

static void APIENTRY logPushMatrix()
{
	printf("%s\n", "glPushMatrix");
	lib.PushMatrix();
}

static void APIENTRY logReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels)
{
	printf("%s(%d, %d, %d, %d, GL_%s, GL_%s, $%X)\n", "glReadPixels", x, y, width, height, EnumName(format), EnumName(type), (unsigned)pixels);
	lib.ReadPixels(x, y, width, height, format, type, pixels);
}

static void APIENTRY logRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	printf("%s(%g, %g, %g, %g)\n", "glRotatef", angle, x, y, z);
	lib.Rotatef(angle, x, y, z);
}

static void APIENTRY logScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	printf("%s(%d, %d, %d, %d)\n", "glScissor", x, y, width, height);
	lib.Scissor(x, y, width, height);
}

static void APIENTRY logShadeModel(GLenum mode)
{
	printf("%s(GL_%s)\n", "glShadeModel", EnumName(mode));
	lib.ShadeModel(mode);
}

static void APIENTRY logTexCoord2f(GLfloat s, GLfloat t)
{
	printf("%s(%g, %g)\n", "glTexCoord2f", s, t);
	lib.TexCoord2f(s, t);
}

static void APIENTRY logTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
	printf("%s(%d, GL_%s, %d, $%X)\n", "glTexCoordPointer", size, EnumName(type), stride, (unsigned)pointer);
	lib.TexCoordPointer(size, type, stride, pointer);
}

static void APIENTRY logTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
	printf("%s(GL_%s, %d, GL_%s, %d, %d, %d, GL_%s, GL_%s, $%X)\n", "glTexImage2D", EnumName(target), level, EnumName(internalformat), width, height, border, EnumName(format), EnumName(type), (unsigned)pixels);
	lib.TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

static void APIENTRY logTexParameteri(GLenum target, GLenum pname, GLint param)
{
	printf("%s(GL_%s, GL_%s, %d)\n", "glTexParameteri", EnumName(target), EnumName(pname), param);
	lib.TexParameteri(target, pname, param);
}

static void APIENTRY logVertex2f(GLfloat x, GLfloat y)
{
	printf("%s(%g, %g)\n", "glVertex2f", x, y);
	lib.Vertex2f(x, y);
}

static void APIENTRY logVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	printf("%s(%g, %g, %g)\n", "glVertex3f", x, y, z);
	lib.Vertex3f(x, y, z);
}

static void APIENTRY logVertex3fv(const GLfloat * v)
{
	printf("%s\n", "glVertex3fv");
	lib.Vertex3fv(v);
}

static void APIENTRY logVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
	printf("%s(%d, GL_%s, %d, $%X)\n", "glVertexPointer", size, EnumName(type), stride, (unsigned)pointer);
	lib.VertexPointer(size, type, stride, pointer);
}

static void APIENTRY logViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	printf("%s(%d, %d, %d, %d)\n", "glViewport", x, y, width, height);
	lib.Viewport(x, y, width, height);
}


#if _WIN32


#endif

static void APIENTRY logActiveTexture(GLenum unit)
{
	printf("%s(GL_%s)\n", "glActiveTexture", EnumName(unit));
	lib.ActiveTexture(unit);
}

static void APIENTRY logCompressedTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data)
{
	printf("%s(GL_%s, %d, GL_%s, %d, %d, %d, %d, $%X)\n", "glCompressedTexImage2D", EnumName(target), level, EnumName(internalFormat), width, height, border, imageSize, (unsigned)data);
	lib.CompressedTexImage2D(target, level, internalFormat, width, height, border, imageSize, data);
}

static void APIENTRY logAttachShader(GLuint program, GLuint shader)
{
	printf("%s(%d, %d)\n", "glAttachShader", program, shader);
	lib.AttachShader(program, shader);
}

static void APIENTRY logCompileShader(GLuint obj)
{
	printf("%s(%d)\n", "glCompileShader", obj);
	lib.CompileShader(obj);
}

static GLuint APIENTRY logCreateProgram()
{
	printf("%s()\n", "glCreateProgram");
	return lib.CreateProgram();
}

static GLuint APIENTRY logCreateShader(GLenum shaderType)
{
	printf("%s(GL_%s)\n", "glCreateShader", EnumName(shaderType));
	return lib.CreateShader(shaderType);
}

static void APIENTRY logDeleteProgram(GLuint obj)
{
	printf("%s(%d)\n", "glDeleteProgram", obj);
	lib.DeleteProgram(obj);
}

static void APIENTRY logDeleteShader(GLuint obj)
{
	printf("%s(%d)\n", "glDeleteShader", obj);
	lib.DeleteShader(obj);
}

static void APIENTRY logDetachShader(GLuint program, GLuint shader)
{
	printf("%s(%d, %d)\n", "glDetachShader", program, shader);
	lib.DetachShader(program, shader);
}

static void APIENTRY logDisableVertexAttribArray(GLuint index)
{
	printf("%s(%d)\n", "glDisableVertexAttribArray", index);
	lib.DisableVertexAttribArray(index);
}

static void APIENTRY logEnableVertexAttribArray(GLuint index)
{
	printf("%s(%d)\n", "glEnableVertexAttribArray", index);
	lib.EnableVertexAttribArray(index);
}

static GLint APIENTRY logGetAttribLocation(GLuint obj, const GLchar * name)
{
	printf("%s(%d, $%X)\n", "glGetAttribLocation", obj, (unsigned)name);
	return lib.GetAttribLocation(obj, name);
}

static void APIENTRY logGetProgramiv(GLuint obj, GLenum pname, GLint * v)
{
	printf("%s(%d, GL_%s, $%X)\n", "glGetProgramiv", obj, EnumName(pname), (unsigned)v);
	lib.GetProgramiv(obj, pname, v);
}

static void APIENTRY logGetProgramInfoLog(GLuint obj, GLsizei maxLength, GLsizei * size, GLchar * infoLog)
{
	printf("%s\n", "glGetProgramInfoLog");
	lib.GetProgramInfoLog(obj, maxLength, size, infoLog);
}

static void APIENTRY logGetShaderiv(GLuint obj, GLenum pname, GLint * v)
{
	printf("%s(%d, GL_%s, $%X)\n", "glGetShaderiv", obj, EnumName(pname), (unsigned)v);
	lib.GetShaderiv(obj, pname, v);
}

static void APIENTRY logGetShaderInfoLog(GLuint obj, GLsizei maxLength, GLsizei * size, GLchar * infoLog)
{
	printf("%s\n", "glGetShaderInfoLog");
	lib.GetShaderInfoLog(obj, maxLength, size, infoLog);
}

static GLint APIENTRY logGetUniformLocation(GLuint obj, const GLchar * name)
{
	printf("%s(%d, $%X)\n", "glGetUniformLocation", obj, (unsigned)name);
	return lib.GetUniformLocation(obj, name);
}

static void APIENTRY logLinkProgram(GLuint obj)
{
	printf("%s(%d)\n", "glLinkProgram", obj);
	lib.LinkProgram(obj);
}

static void APIENTRY logShaderSource(GLuint obj, GLsizei size, const GLchar** src, const GLint * length)
{
	printf("%s(%d, %d, $%X, $%X)\n", "glShaderSource", obj, size, (unsigned)src, (unsigned)length);
	lib.ShaderSource(obj, size, src, length);
}

static void APIENTRY logUseProgram(GLuint obj)
{
	printf("%s(%d)\n", "glUseProgram", obj);
	lib.UseProgram(obj);
}

static void APIENTRY logUniform1f(GLint arg1, GLfloat arg2)
{
	printf("%s\n", "glUniform1f");
	lib.Uniform1f(arg1, arg2);
}

static void APIENTRY logUniform2f(GLint arg1, GLfloat arg2, GLfloat arg3)
{
	printf("%s\n", "glUniform2f");
	lib.Uniform2f(arg1, arg2, arg3);
}

static void APIENTRY logUniform1i(GLint arg1, GLint arg2)
{
	printf("%s(%d, %d)\n", "glUniform1i", arg1, arg2);
	lib.Uniform1i(arg1, arg2);
}

static void APIENTRY logUniform3fv(GLint arg1, GLsizei arg2, const GLfloat * v)
{
	printf("%s\n", "glUniform3fv");
	lib.Uniform3fv(arg1, arg2, v);
}

static void APIENTRY logVertexAttrib3fv(GLuint index, const GLfloat * v)
{
	printf("%s\n", "glVertexAttrib3fv");
	lib.VertexAttrib3fv(index, v);
}

static void APIENTRY logVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
{
	printf("%s(%d, %d, GL_%s, %d, %d, $%X)\n", "glVertexAttribPointer", index, size, EnumName(type), normalized, stride, (unsigned)pointer);
	lib.VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

static void APIENTRY logBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
	printf("%s(GL_%s, %d)\n", "glBindRenderbufferEXT", EnumName(target), renderbuffer);
	lib.BindRenderbufferEXT(target, renderbuffer);
}

static void APIENTRY logDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
	printf("%s(%d, $%X)\n", "glDeleteRenderbuffersEXT", n, (unsigned)renderbuffers);
	lib.DeleteRenderbuffersEXT(n, renderbuffers);
}

static void APIENTRY logGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
	printf("%s(%d, $%X)\n", "glGenRenderbuffersEXT", n, (unsigned)renderbuffers);
	lib.GenRenderbuffersEXT(n, renderbuffers);
}

static void APIENTRY logRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	printf("%s(GL_%s, GL_%s, %d, %d)\n", "glRenderbufferStorageEXT", EnumName(target), EnumName(internalformat), width, height);
	lib.RenderbufferStorageEXT(target, internalformat, width, height);
}

static void APIENTRY logBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
	printf("%s(GL_%s, %d)\n", "glBindFramebufferEXT", EnumName(target), framebuffer);
	lib.BindFramebufferEXT(target, framebuffer);
}

static void APIENTRY logDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
	printf("%s(%d, $%X)\n", "glDeleteFramebuffersEXT", n, (unsigned)framebuffers);
	lib.DeleteFramebuffersEXT(n, framebuffers);
}

static void APIENTRY logGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
	printf("%s(%d, $%X)\n", "glGenFramebuffersEXT", n, (unsigned)framebuffers);
	lib.GenFramebuffersEXT(n, framebuffers);
}

static GLenum APIENTRY logCheckFramebufferStatusEXT(GLenum target)
{
	printf("%s(GL_%s)\n", "glCheckFramebufferStatusEXT", EnumName(target));
	return lib.CheckFramebufferStatusEXT(target);
}

static void APIENTRY logFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	printf("%s(GL_%s, GL_%s, GL_%s, %d, %d)\n", "glFramebufferTexture2DEXT", EnumName(target), EnumName(attachment), EnumName(textarget), texture, level);
	lib.FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

static void APIENTRY logFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	printf("%s(GL_%s, GL_%s, GL_%s, %d)\n", "glFramebufferRenderbufferEXT", EnumName(target), EnumName(attachment), EnumName(renderbuffertarget), renderbuffer);
	lib.FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

static void APIENTRY logGenerateMipmapEXT(GLenum target)
{
	printf("%s(GL_%s)\n", "glGenerateMipmapEXT", EnumName(target));
	lib.GenerateMipmapEXT(target);
}


#if _WIN32


#elif __linux__

#endif

static const GL_t logFuncs = {
	logAlphaFunc,
	logBegin,
	logBindTexture,
	logBlendFunc,
	logClear,
	logClearColor,
	logColor3f,
	logColor3fv,
	logColor4f,
	logColor4fv,
	logColor4ubv,
	logColorPointer,
	logCullFace,
	logDeleteTextures,
	logDepthFunc,
	logDepthMask,
	logDepthRange,
	logDisable,
	logDisableClientState,
	logDrawElements,
	logEnable,
	logEnableClientState,
	logEnd,
	logFinish,
	logGenTextures,
	logGetError,
	logGetIntegerv,
	logGetMaterialfv,
	logGetString,
	logIsEnabled,
	logIsTexture,
	logLightModeli,
	logLightfv,
	logLineWidth,
	logLoadIdentity,
	logLoadMatrixf,
	logMaterialf,
	logMaterialfv,
	logMatrixMode,
	logNormal3fv,
	logNormalPointer,
	logOrtho,
	logPolygonMode,
	logPopMatrix,
	logPushMatrix,
	logReadPixels,
	logRotatef,
	logScissor,
	logShadeModel,
	logTexCoord2f,
	logTexCoordPointer,
	logTexImage2D,
	logTexParameteri,
	logVertex2f,
	logVertex3f,
	logVertex3fv,
	logVertexPointer,
	logViewport
#if _WIN32


#endif

,
	logActiveTexture,
	logCompressedTexImage2D,
	logAttachShader,
	logCompileShader,
	logCreateProgram,
	logCreateShader,
	logDeleteProgram,
	logDeleteShader,
	logDetachShader,
	logDisableVertexAttribArray,
	logEnableVertexAttribArray,
	logGetAttribLocation,
	logGetProgramiv,
	logGetProgramInfoLog,
	logGetShaderiv,
	logGetShaderInfoLog,
	logGetUniformLocation,
	logLinkProgram,
	logShaderSource,
	logUseProgram,
	logUniform1f,
	logUniform2f,
	logUniform1i,
	logUniform3fv,
	logVertexAttrib3fv,
	logVertexAttribPointer,
	logBindRenderbufferEXT,
	logDeleteRenderbuffersEXT,
	logGenRenderbuffersEXT,
	logRenderbufferStorageEXT,
	logBindFramebufferEXT,
	logDeleteFramebuffersEXT,
	logGenFramebuffersEXT,
	logCheckFramebufferStatusEXT,
	logFramebufferTexture2DEXT,
	logFramebufferRenderbufferEXT,
	logGenerateMipmapEXT
#if _WIN32


#elif __linux__

#endif


};

#endif // NO_GL_LOG

struct extInfo_t {
	const char *names;				// "alias1\0alias2\0...\0" or "name\0\0"
	const char *name;				// current name (points to a primary name or to any alias)
	const char *cvar;				// name of cvar to disable extension
	short	first, count;			// positions of provided functions in name table
	unsigned require, deprecate;	// dependent extensions
};

#if NUM_EXTENSIONS

static extInfo_t extInfo[NUM_EXTENSIONS] = {
	{"1.2\0", NULL, NULL, 0, 0, 0, 0},
	{"1.3\0", NULL, NULL, NUM_GLFUNCS+0, 2, 0, 0},
	{"1.4\0", NULL, NULL, 0, 0, 0, 0},
	{"2.0\0", NULL, NULL, NUM_GLFUNCS+2, 24, 0, 0},
	{"3.1\0", NULL, NULL, 0, 0, 0, 0},
	{"GL_EXT_texture_compression_s3tc\0", NULL, NULL, 0, 0, 0, 0},
	{"GL_EXT_framebuffer_object\0", NULL, NULL, NUM_GLFUNCS+26, 11, 0, 0},
	{"GL_ARB_half_float_pixel\0", NULL, NULL, 0, 0, 0, 0},
	{"GL_ARB_texture_float\0", NULL, NULL, 0, 0, 0, 0},
	{"GL_ARB_texture_compression_rgtc\0" "GL_EXT_texture_compression_rgtc\0", NULL, NULL, 0, 0, 0, 0},
	{"GL_ARB_texture_compression_bptc\0", NULL, NULL, 0, 0, 0, 0}
#if _WIN32


#elif __linux__

#endif

};

#endif // NUM_EXTENSIONS
