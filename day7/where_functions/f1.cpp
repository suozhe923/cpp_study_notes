bool drawLine(int x, int y){
    return true;
}
//函数写在调用前

bool drawRectangle(int x, int y){
    drawLine(x,y);
    drawLine(x,y);
    return true;
}