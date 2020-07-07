/* -*-c++-*- SemiGlobalMatching - Copyright (C) 2020.
* Author	: Ethan Li <ethan.li.whu@gmail.com>
*			  https://github.com/ethan-li-coding
* Describe	: implement of pms_util
*/

#pragma once
#include "pms_types.h"

namespace pms_util
{

	/**
	* \brief ��ȡ����(i,j)����ɫֵ
	* \param img_data	��ɫ����
	* \param width		Ӱ���
	* \param height		Ӱ���
	* \param i			����������
	* \param j			����������
	* \return ����(i,j)����ɫֵ
	*/
	PColor GetColor(const uint8* img_data, const sint32& width, const sint32& height, const sint32& i,const sint32& j);


	/**
	 * \brief ���Ӳ�ͼ���м�Ȩ��ֵ�˲�
	 * \param img_data		��ɫ����
	 * \param width			Ӱ���
	 * \param height		Ӱ���
	 * \param wnd_size		���ڴ�С
	 * \param gamma			gammaֵ
	 * \param filter_pixels ��Ҫ�˲������ؼ�
	 * \param disparity_map �Ӳ�ͼ
	 */
	void WeightedMedianFilter(const uint8* img_data, const sint32& width, const sint32& height, const sint32& wnd_size, const float32& gamma,const vector<pair<int, int>>& filter_pixels, float32* disparity_map);
}