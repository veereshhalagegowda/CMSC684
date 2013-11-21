/* Edited by: Veeresh Halagegowda
*  Email ID : vp67051@umbc.edu
*  Course   : Assignment - 3, CMSC-684 - Wireless Sensor Networks - Fall 2013
*/


#ifndef HW3_H
#define HW3_H

enum {
    AM_HW3 = 6,
	TIMER_PERIOD_MILLI = 250,	
    BASESTATION_ID = 0,
    GROUPID = 230
};

typedef nx_struct hw3_msg {
    nx_uint32_t time;
    nx_uint16_t nodeid;
    nx_uint16_t destid;
    nx_uint16_t groupid;
    nx_uint16_t counter;

    /* Variables for Route tracer*/
    nx_uint8_t route[5]; /* Considering the hop count not to exceed 5, this array should be enough to record all the routes */
    nx_uint8_t routeCounter; /* Counter to track the nodes for route */
    
    nx_uint8_t hop2hop_delay[5];

} hw3_msg;

enum {
	QOS_NORMAL = 0,//node acts normal
	QOS_DROP = 1,
	QOS_DELAY = 2,
	QOS_INJECT = 3,
    
};

/* Some try outs to effectively snapshot the route state at some point */

typedef nx_struct snapshot_routes {
    nx_uint16_t snap_route[5];
    nx_uint16_t snap_counter;
    nx_uint16_t is_mali_route;

} snap_learn[27];

#endif /* HW3_H */
