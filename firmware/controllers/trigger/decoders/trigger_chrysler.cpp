/**
 * @file	trigger_chrysler.cpp
 *
 * @date Mar 24, 2014
 * @author Andrey Belomutskiy, (c) 2012-2017
 */

#include "trigger_chrysler.h"
#include "trigger_decoder.h"
#include "trigger_universal.h"

void initDodgeRam(TriggerShape *s DECLARE_ENGINE_PARAMETER_S) {

	s->initialize(FOUR_STROKE_CAM_SENSOR, true);
	s->useRiseEdge = true;

	s->isSynchronizationNeeded = false;

	addSkippedToothTriggerEvents(T_SECONDARY, s, 8, 0, 0.06, -25, 360, 0, 720 PASS_ENGINE_PARAMETER);

	s->addEvent2(360, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);

	addSkippedToothTriggerEvents(T_SECONDARY, s, 8, 0, 0.06, 360 - 25, 360, 0,
			720 PASS_ENGINE_PARAMETER);

	s->addEvent2(720, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->useOnlyPrimaryForSync = true;
}

void configureNeon2003TriggerShapeCrank(TriggerShape *s DECLARE_ENGINE_PARAMETER_S) {
	s->initialize(FOUR_STROKE_CRANK_SENSOR, false);
	s->useRiseEdge = true;
	s->gapBothDirections = false;

	s->setTriggerSynchronizationGap(3);
	int m = 2;

	s->addEvent2(m * 25, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 30, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 35, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 40, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 45, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 50, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 55, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 60, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 65, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 70, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 75, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 80, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 85, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 90, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 95, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 100, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 105, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 110, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 115, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 120, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 125, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 130, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 135, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 140, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 145,T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 150, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 155, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 160, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 165, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 170, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 175, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 180, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 185, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	// gap 25
	s->addEvent2(m * 210, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 215, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 220, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 225, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 230, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 235, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 240, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 245, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 250, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 255, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 260, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 265, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 270, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 275, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 280, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 285, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 290, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 295, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 300, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 305, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 310, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 315, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 320, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 325, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 330, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 335, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 340, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 345, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 350, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 355, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(m * 360, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
}

void configureNeon2003TriggerShapeCam(TriggerShape *s DECLARE_ENGINE_PARAMETER_S) {
// todo: move sync point so that two channel does not have false trigger issues
	bool useOnlyPrimary = true;

	s->initialize(FOUR_STROKE_CAM_SENSOR, !useOnlyPrimary);
	s->useRiseEdge = true;
	s->gapBothDirections = false;

	s->tdcPosition = 496;

	/**
	 * ratio sequence is:
gap=2.17/1.46
gap=0.33/2.17
gap=1.06/0.33
gap=2.73/1.06
gap=0.47/2.73
gap=0.71/0.47
gap=1.43/0.71
	 *
	 */

	// these values only work well for 'useFronOnly' mode!!!
	s->setTriggerSynchronizationGap2(0.75, 1.5);
	s->setSecondTriggerSynchronizationGap2(0.65, 1.25);

	float EPS_ANGLE = 0.3;

	s->useOnlyPrimaryForSync = true;

	if (useOnlyPrimary) {
		s->addEvent2(144, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(180, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(216, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(252, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(288, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(324, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(360, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER); // width = 144
		s->addEvent2(504, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER); // width = 36
		s->addEvent2(540, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(576, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(612, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(648, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(684, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(720, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

	} else {
		/**
		 * 7 primary (four narrow + one wide + two narrow)
		 * 64 secondary (one wide + 15 narrow + 16 narrow + one wide + 15 narrow + 16 narrow)
		 *
		 */

		s->addEvent2(25, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(30, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(35, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(40, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(45, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(50, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(55, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(60, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(65, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(70, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(75, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(80, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(85, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(90, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(95, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(100, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(105, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(110, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(115, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(120, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(125, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(130, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(135, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(140, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(144, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(145,T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(150, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(155, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(160, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(165, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(170, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(175, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(180 - EPS_ANGLE, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(180, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(185, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(210, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(215, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(216, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(220, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(225, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(230, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(235, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(240, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(245, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(250, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(252, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(255, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(260, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(265, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(270, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(275, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(280, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(285, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(288, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(290, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(295, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(300, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(305, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(310, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(315, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(320, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(324, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(325, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(330, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(335, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(340, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(345, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(350, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(355, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(360 - EPS_ANGLE, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(360, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(385, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(390, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(395, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(400, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(405, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(410, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(415, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(420, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(425, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(430, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(435, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(440, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(445, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(450, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(455, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(460, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(465, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(470, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(475, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(480, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(485, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(490, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(495, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(500, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(504, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(505, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(510, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(515, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(520, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(525, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(530, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(535, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(540 - EPS_ANGLE, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(540, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(545, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(570, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(575, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(576, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(580, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(585, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(590, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(595, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(600, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(605, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(610, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(612, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(615, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(620, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(625, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(630, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(635, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(640, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(645, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

		s->addEvent2(648, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(650, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(655, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(660, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(665, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(670, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(675, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(680, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

		s->addEvent2(684, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(685, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(690, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(695, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(700, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(705, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(710, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(715, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
		s->addEvent2(720 - EPS_ANGLE, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
		s->addEvent2(720, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	}
}

void configureDodgeStratusTriggerShape(TriggerShape *s DECLARE_ENGINE_PARAMETER_S) {
	s->initialize(FOUR_STROKE_CAM_SENSOR, false);
	s->isSynchronizationNeeded = true;

	s->tdcPosition = 150;

	float w = 7;
	float g = 20;
	s->setTriggerSynchronizationGap2(CHRYSLER_NGC6_GAP - 0.25,
			CHRYSLER_NGC6_GAP + 0.4);

	float base = 0;
	// 2 teeth
	float angle = base + 120.0 - w;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	angle += g;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

	base += 120;
	// 3 teeth
	angle = base + 120.0 - w;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	angle += g;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	angle += g;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

	base += 120;
	// 2 teeth
	angle = base + 120.0 - w;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	angle += g;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

	base += 120;
	// just one
	angle = base + 120.0 - w;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

	base += 120;
	// 3 teeth
	angle = base + 120.0 - w;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	angle += g;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
	angle += g;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

	base += 120;
	// just one again
	angle = base + 120.0 - w;
	s->addEvent2(angle, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(angle + w, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);
}

void configureNeon1995TriggerShape(TriggerShape *s DECLARE_ENGINE_PARAMETER_S) {
	s->initialize(FOUR_STROKE_CAM_SENSOR, true);

	s->setTriggerSynchronizationGap(0.72);

	s->useRiseEdge = false;

	// voodoo magic - we always need 720 at the end
	int base = 720 - 560;

	s->initialState[T_PRIMARY] = 1;

	s->addEvent2(base - 720 + 600, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base - 720 + 604, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base - 720 + 616, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base - 720 + 620, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base - 720 + 643, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base - 720 + 648, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base - 720 + 671, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base - 720 + 676, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(base + 0, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(base + 20, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 60, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 75, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 79, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 101, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 106, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 130, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 135, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(base + 200, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER); // width = 150

	s->addEvent2(base + 236, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 239, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 250, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 255, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 277, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 282, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 305, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 310, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(base + 374, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);

	s->addEvent2(base + 395, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER); // width =

	s->addEvent2(base + 418, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 436, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 441, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 463, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 468, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 492, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(base + 497, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(base + 560, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER); // width =
	s->useOnlyPrimaryForSync = true;
}

void initJeep18_2_2_2(TriggerShape *s DECLARE_ENGINE_PARAMETER_S) {
	s->initialize(FOUR_STROKE_CAM_SENSOR, true);
	s->isSynchronizationNeeded = false;

	float off = 212;

	s->addEvent2(534 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(536 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(554 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(556 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(574 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(576 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(594 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(596 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(654 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(656 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(674 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(676 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(694 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(696 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(714 - 720 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(716 - 720 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);


	s->addEvent2(54 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(56 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(74 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(76 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(94 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(96 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(114 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(116 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(148 + off, T_PRIMARY, TV_RISE PASS_ENGINE_PARAMETER); // 360

	s->addEvent2(174 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(176 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(194 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(196 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(214 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(216 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(234 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(236 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(294 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(296 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(314 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(316 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(334 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(336 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(354 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(356 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(414 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(416 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(434 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(436 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(454 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(456 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);
	s->addEvent2(474 + off, T_SECONDARY, TV_RISE PASS_ENGINE_PARAMETER);
	s->addEvent2(476 + off, T_SECONDARY, TV_FALL PASS_ENGINE_PARAMETER);

	s->addEvent2(508 + off, T_PRIMARY, TV_FALL PASS_ENGINE_PARAMETER); // 720

}
