#pragma once

class IndexBuffer 
{
private:
	unsigned int m_RendererID; 
	unsigned int m_Count; // 实际索引数
public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	// 把Bind()和UnBind()标记为const，因为它们实际上不会修改任何东西
	// 方便以后可能会在const对象上调用它们
	void Bind() const;
	void UnBind() const;

	inline unsigned int GetCount() const { return m_Count; }
};