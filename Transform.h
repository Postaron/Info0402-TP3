#ifndef TRANSFORM_H_
#define TRANSFORM_H_

class Transform {
public:
	virtual void Rotate(int angle) = 0;
	virtual void Translate(int x, int y) = 0;
	virtual void Scale(float x, float y) = 0;
	virtual ~Transform();
};

#endif /* TRANSFORM_H_ */
