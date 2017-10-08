/**
 * 500D (menu navigation works)
 */
static struct mpu_init_spell mpu_init_spells_500D[] = {
    { { 0x06, 0x04, 0x02, 0x00, 0x00 }, .description = "Init", .out_spells = { /* spell #1 */
        { 0x0a, 0x08, 0x03, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.1 */
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },                 /* reply #1.2, PROP_CARD_SELECT */
        { 0x08, 0x07, 0x01, 0x33, 0x00, 0x00, 0x00, 0x00 },     /* reply #1.3 */
        { 0x14, 0x12, 0x02, 0x04, 0x0d, 0x01, 0x01, 0x00, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.4, PROP_CFN */
        { 0x06, 0x05, 0x01, 0x20, 0x00, 0x00 },                 /* reply #1.5, PROP_CARD2_EXISTS */
        { 0x06, 0x05, 0x01, 0x21, 0x01, 0x00 },                 /* reply #1.6, PROP_CARD1_EXISTS */
        { 0x06, 0x05, 0x01, 0x22, 0x00, 0x00 },                 /* reply #1.7, PROP_CARD3_EXISTS */
        { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 },                 /* reply #1.8, PROP_CARD1_RECORD */
        { 0x06, 0x05, 0x03, 0x0d, 0x01, 0x00 },                 /* reply #1.9, PROP_CARD2_RECORD */
        { 0x06, 0x05, 0x03, 0x0e, 0x01, 0x00 },                 /* reply #1.10, PROP_CARD3_RECORD */
        { 0x08, 0x06, 0x01, 0x23, 0x00, 0x01, 0x00 },           /* reply #1.11, PROP_CARD1_STATUS(01) */
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x00, 0x00 },           /* reply #1.12, PROP_CARD2_STATUS(00) */
        { 0x08, 0x06, 0x01, 0x25, 0x00, 0x00, 0x00 },           /* reply #1.13, PROP_CARD3_STATUS(00) */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #1.14 */
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },                 /* reply #1.15, PROP_CARD_SELECT */
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },                 /* reply #1.16, PROP_CURRENT_MEDIA */
        { 0x06, 0x05, 0x03, 0x20, 0x00, 0x00 },                 /* reply #1.17 */
        { 0x06, 0x05, 0x01, 0x42, 0x00, 0x00 },                 /* reply #1.18, PROP_STUDIO_MODE */
        { 0x06, 0x05, 0x01, 0x43, 0x00, 0x00 },                 /* reply #1.19 */
        { 0x06, 0x05, 0x01, 0x44, 0x00, 0x00 },                 /* reply #1.20 */
        { 0x06, 0x05, 0x01, 0x46, 0x00, 0x00 },                 /* reply #1.21 */
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },                 /* reply #1.22, PROP_LIVE_VIEW_ENABLE */
        { 0x06, 0x05, 0x01, 0x49, 0x01, 0x00 },                 /* reply #1.23, PROP_LIVE_VIEW_AF_MODE */
        { 0x06, 0x05, 0x01, 0x4b, 0x01, 0x00 },                 /* reply #1.24, PROP_LIVE_VIEW_MOVIE_SELECT */
        { 0x08, 0x06, 0x01, 0x47, 0x0a, 0x02, 0x00 },           /* reply #1.25, PROP_SELFTIMER_CONTINUOUS_NUM */
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },                 /* reply #1.26 */
        { 0x2c, 0x2a, 0x02, 0x00, 0x03, 0x03, 0x03, 0x00, 0x03, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x0a, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x83, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x24, 0xaa },/* reply #1.27, Init */
        { 0x06, 0x05, 0x03, 0x04, 0x00, 0x00 },                 /* reply #1.28, PROP_POWER_KIND */
        { 0x06, 0x05, 0x03, 0x05, 0x01, 0x00 },                 /* reply #1.29, PROP_POWER_LEVEL */
        { 0x1e, 0x1c, 0x03, 0x30, 0x1b, 0x1b, 0x21, 0x65, 0x65, 0x65, 0x47, 0x65, 0x10, 0x3a, 0x10, 0x3a, 0x10, 0x3a, 0x00, 0x1d, 0x00, 0x1d, 0x00, 0x1d, 0x00, 0x1d, 0x00, 0x00, 0x00 },/* reply #1.30 */
        { 0x06, 0x05, 0x01, 0x38, 0x00, 0x00 },                 /* reply #1.31 */
        { 0x06, 0x05, 0x01, 0x39, 0x00, 0x00 },                 /* reply #1.32, PROP_EXTERNAL_FLASH_SETTINGS */
        { 0x0c, 0x0b, 0x01, 0x0a, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.33 */
        { 0x0e, 0x0c, 0x03, 0x2e, 0x00, 0x00, 0x22, 0x81, 0x00, 0x00, 0x26, 0x89, 0x00 },/* reply #1.34 */
        { 0x0a, 0x08, 0x03, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.35 */
        { 0x06, 0x05, 0x03, 0x23, 0x01, 0x00 },                 /* reply #1.36 */
        { 0x06, 0x05, 0x03, 0x24, 0x00, 0x00 },                 /* reply #1.37 */
        { 0x06, 0x04, 0x03, 0x25, 0x00 },                       /* reply #1.38 */
        { 0x08, 0x06, 0x01, 0x45, 0x00, 0x10, 0x00 },           /* reply #1.39, PROP_METERING_TIMER */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00 }, .description = "Complete WaitID = 0x80000001", .out_spells = { /* spell #2 */
        { 0x06, 0x05, 0x01, 0x09, 0x00, 0x00 },                 /* reply #2.1, PROP_FEC */
        { 0x06, 0x05, 0x01, 0x0d, 0x00, 0x00 },                 /* reply #2.2, PROP_WB_MODE_PH */
        { 0x06, 0x05, 0x01, 0x3e, 0x00, 0x00 },                 /* reply #2.3, PROP_SILENT_SHOOTING */
        { 0x06, 0x05, 0x01, 0x3f, 0x00, 0x00 },                 /* reply #2.4, PROP_FLASH_ENABLE */
        { 0x06, 0x05, 0x01, 0x40, 0x00, 0x00 },                 /* reply #2.5 */
        { 0x06, 0x05, 0x01, 0x41, 0x00, 0x00 },                 /* reply #2.6 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #3 */
        { 0 } } },
    { { 0x06, 0x04, 0x03, 0x10, 0x00 }, .description = "PROP 80030008", .out_spells = { /* spell #4 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0xff, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #5 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 }, {                 /* spell #6 */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #6.1 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP 80030007", .out_spells = { /* spell #7 */
        { 0 } } },
    { { 0x06, 0x05, 0x04, 0x0e, 0x01, 0x00 }, {                 /* spell #8 */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x24, 0x00, 0x01, 0x00 }, .description = "PROP_CARD2_STATUS", .out_spells = { /* spell #9 */
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x01, 0x00 },           /* reply #9.1, PROP_CARD2_STATUS(01) */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x27, 0x00, 0x65, 0x00 }, .description = "PROP_CARD2_FOLDER_NUMBER", .out_spells = { /* spell #10 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0x09, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #11 */
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },                 /* reply #11.1, bindReceiveSwitch(19, 0) */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x15, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #12 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x2a, 0x22, 0x79, 0x00, 0x00 }, .description = "PROP_CARD2_FILE_NUMBER", .out_spells = { /* spell #13 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x11, 0x01, 0x00 }, {                 /* spell #14 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x00, 0x00 }, {                 /* spell #15 */
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },                 /* reply #15.1 */
        { 0x0a, 0x08, 0x03, 0x00, 0x4a, 0x00, 0x00, 0x01, 0x00 },/* reply #15.2 */
        { 0x14, 0x12, 0x03, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #15.3 */
        { 0x06, 0x05, 0x03, 0x17, 0x9a, 0x00 },                 /* reply #15.4 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 }, .description = "PROP_CARD2_RECORD", .out_spells = { /* spell #16 */
        { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 },                 /* reply #16.1, PROP_CARD2_RECORD */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 }, .description = "PROP_CARD1_RECORD", .out_spells = { /* spell #17 */
        { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 },                 /* reply #17.1, PROP_CARD1_RECORD */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #18 */
        { 0 } } },
    { { 0x06, 0x05, 0x09, 0x11, 0x01, 0x00 }, {                 /* spell #19 */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x18, 0x00, 0x00, 0x00 }, {           /* spell #20 */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x1f, 0x00, 0x00, 0x00 }, {           /* spell #21 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x13, 0x00, 0x00 }, {                 /* spell #22 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x1e, 0x00, 0x00 }, {                 /* spell #23 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #24 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #25 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x01, 0x00 }, {                 /* spell #26 */
        { 0x42, 0x41, 0x0a, 0x08, 0xff, 0x1f, 0x01, 0x00, 0x01, 0x03, 0x98, 0x10, 0x00, 0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x48, 0x04, 0x01, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #26.1, PD_NotifyOlcInfoChanged */
        { 0x06, 0x05, 0x06, 0x11, 0x01, 0x00 },                 /* reply #26.2, GUI_Control:43, bindReceiveSwitch(17, 1) */
        { 0x06, 0x05, 0x06, 0x12, 0x00, 0x00 },                 /* reply #26.3, GUI_Control:45, bindReceiveSwitch(18, 0) */
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },                 /* reply #26.4, bindReceiveSwitch(19, 0) */
        { 0x06, 0x05, 0x06, 0x1c, 0x00, 0x00 },                 /* reply #26.5, bindReceiveSwitch(28, 0) */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #27 */
     // { 0x06, 0x05, 0x06, 0x00, 0x01, 0x00 },                 /* reply #27.1, BGMT_MENU, GUI_Control:6, bindReceiveSwitch(0, 1) */
        { 0 } } },
 // { { 0x06, 0x05, 0x04, 0x00, 0x01, 0x00 }, .description = "NotifyGUIEvent", .out_spells = { 
     // { 0x20, 0x1e, 0x0a, 0x08, 0x57, 0x00, 0x0f, 0x00, 0x01, 0x00, 0x98, 0x10, 0x00, 0x58, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #28.1, PD_NotifyOlcInfoChanged */
     // { 0x0e, 0x0c, 0x0a, 0x08, 0x09, 0x00, 0x15, 0x00, 0x01, 0x00, 0x00, 0x48, 0x00 },/* reply #28.2, PD_NotifyOlcInfoChanged */
     // { 0x06, 0x05, 0x04, 0x00, 0x01, 0xaa },                 /* reply #28.3, NotifyGUIEvent */
     // { 0 } } },
 // { { 0x08, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00 }, .description = "Complete WaitID = 0x80020000", .out_spells = { 
     // { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #28 */
     // { 0x06, 0x05, 0x06, 0x01, 0x01, 0x00 },                 /* reply #28.1, BGMT_INFO, GUI_Control:7, bindReceiveSwitch(1, 1) */
        { 0 } } },
 // { { 0x06, 0x05, 0x04, 0x00, 0x02, 0x00 }, .description = "NotifyGUIEvent", .out_spells = { 
     // { 0x24, 0x22, 0x0a, 0x08, 0x5f, 0x00, 0x01, 0x00, 0x01, 0x03, 0x98, 0x10, 0x00, 0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x48, 0x04, 0x01, 0x00, 0x15, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #29.1, PD_NotifyOlcInfoChanged */
     // { 0x06, 0x05, 0x04, 0x00, 0x02, 0xaa },                 /* reply #29.2, NotifyGUIEvent */
     // { 0 } } },
 // { { 0x08, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00 }, .description = "Complete WaitID = 0x80020000", .out_spells = { 
     // { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #29 */
     // { 0x06, 0x05, 0x06, 0x01, 0x01, 0x00 },                 /* reply #29.1, BGMT_INFO, GUI_Control:7, bindReceiveSwitch(1, 1) */
        { 0 } } },
 // { { 0x06, 0x05, 0x04, 0x00, 0x01, 0x00 }, .description = "NotifyGUIEvent", .out_spells = { 
     // { 0x20, 0x1e, 0x0a, 0x08, 0x57, 0x00, 0x0f, 0x00, 0x01, 0x00, 0x98, 0x10, 0x00, 0x58, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #30.1, PD_NotifyOlcInfoChanged */
     // { 0x0e, 0x0c, 0x0a, 0x08, 0x09, 0x00, 0x15, 0x00, 0x01, 0x00, 0x00, 0x48, 0x00 },/* reply #30.2, PD_NotifyOlcInfoChanged */
     // { 0x06, 0x05, 0x04, 0x00, 0x01, 0xaa },                 /* reply #30.3, NotifyGUIEvent */
     // { 0 } } },
 // { { 0x08, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00 }, .description = "Complete WaitID = 0x80020000", .out_spells = { 
     // { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #30 */
     // { 0x06, 0x05, 0x06, 0x00, 0x01, 0x00 },                 /* reply #30.1, BGMT_MENU, GUI_Control:6, bindReceiveSwitch(0, 1) */
        { 0 } } },
 // { { 0x06, 0x05, 0x04, 0x00, 0x00, 0x00 }, .description = "NotifyGUIEvent", .out_spells = { 
     // { 0x06, 0x05, 0x06, 0x09, 0x00, 0x00 },                 /* reply #31.1, BGMT_UNPRESS_ZOOM_IN, GUI_Control:12, bindReceiveSwitch(9, 0) */
     // { 0x06, 0x05, 0x06, 0x0a, 0x00, 0x00 },                 /* reply #31.2, BGMT_UNPRESS_ZOOM_OUT, GUI_Control:14, bindReceiveSwitch(10, 0) */
     // { 0x24, 0x22, 0x0a, 0x08, 0x5f, 0x00, 0x01, 0x00, 0x01, 0x03, 0x98, 0x10, 0x00, 0x58, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x48, 0x04, 0x01, 0x00, 0x15, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #31.3, PD_NotifyOlcInfoChanged */
     // { 0x06, 0x05, 0x04, 0x00, 0x00, 0xaa },                 /* reply #31.4, NotifyGUIEvent */
     // { 0 } } },
 // { { 0x08, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00 }, .description = "Complete WaitID = 0x80020000", .out_spells = { 
     // { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #31 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #32 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #33 */
        { 0 } } },

    #include "NotifyGUIEvent.h"
    #include "UILock.h"
    #include "CardFormat.h"
    #include "GPS.h"
    #include "Shutdown.h"
};
