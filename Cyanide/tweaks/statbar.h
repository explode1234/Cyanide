//
//  statbar.h
//  StatBar port: reads battery temp + free RAM in our app process, then
//  installs/updates a dedicated SpringBoard overlay UIWindow via the
//  remote-call bridge.
//

#ifndef statbar_h
#define statbar_h

#import <stdbool.h>

bool statbar_apply(bool celsius, bool showNet, bool showCPU, bool showLabels, bool networkOnly);
bool statbar_apply_in_session(bool celsius, bool showNet, bool showCPU, bool showLabels, bool networkOnly);
bool statbar_stop_in_session(void);
void statbar_forget_remote_state(void);


// Experimental, manual screen guideline drawn in SpringBoard (not GamePigeon).
// Coordinates are in iPad screen points; angle is degrees clockwise.
// The overlay is click-through and can be removed without rebooting.
bool statbar_gp_guide_apply_in_session(double x, double y, double angleDegrees, double lengthPoints);
bool statbar_gp_guide_remove_in_session(void);

#endif
