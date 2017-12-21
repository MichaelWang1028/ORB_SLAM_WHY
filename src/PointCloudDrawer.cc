// /**
// * This file is part of ORB-SLAM2.
// *
// * Copyright (C) 2014-2016 Raúl Mur-Artal <raulmur at unizar dot es> (University of Zaragoza)
// * For more information see <https://github.com/raulmur/ORB_SLAM2>
// *
// * ORB-SLAM2 is free software: you can redistribute it and/or modify
// * it under the terms of the GNU General Public License as published by
// * the Free Software Foundation, either version 3 of the License, or
// * (at your option) any later version.
// *
// * ORB-SLAM2 is distributed in the hope that it will be useful,
// * but WITHOUT ANY WARRANTY; without even the implied warranty of
// * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// * GNU General Public License for more details.
// *
// * You should have received a copy of the GNU General Public License
// * along with ORB-SLAM2. If not, see <http://www.gnu.org/licenses/>.
// */


// #include "PointCloudDrawer.h"
// #include <opencv2/core/core.hpp>
// #include <opencv2/highgui/highgui.hpp>

// #include <mutex>

// namespace ORB_SLAM2
// {

// PointCloudDrawer::PointCloudDrawer()
// {
//     mIm = cv::Mat(480,640,CV_8UC3, cv::Scalar(0,0,0));
// }

// cv::Mat PointCloudDrawer::Update(PointCloudMapping* pPointCloudMapper)
// {
//     // unique_lock<mutex> lock(mMutex);
//     // // pPointCloudMapper->get_mCVCurrentColorImg().copyTo(mIm);
//     // // mIm = pPointCloudMapper->get_mCVCurrentColorImg();
//     // cv::Mat tmp(mIm);
//     // return tmp;
//     return cv::Mat();
// }

// }