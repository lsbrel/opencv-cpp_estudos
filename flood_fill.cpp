#include <iostream>

// opencv
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

int main(){

    std::string image_path = cv::samples::findFile("01.jpg");
    cv::Mat img = cv::imread(image_path, cv::IMREAD_COLOR);

    if(img.empty()){
        std::cout<<"Não foi possível ler a imagem"<<std::endl;
        return 1;
    }

    cv::imshow("Diplsya", img);

    int k = cv::waitKey(0);

    if( k == 's'){
        cv::imwrite("Skrrr", img);
    }

    return 0;
}