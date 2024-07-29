bool drawLine(int x, int y);//为了方便管理顺序，先声明，再在后面完整实现，若不事先声明，编译器从上往下读会出现错误

bool drawRectangle(int x, int y){
    drawLine(x,y);
    drawLine(x,y);
    return true;
}

bool drawLine(int x, int y){
    return true;
}