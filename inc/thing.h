typedef struct thing {
    const char *tag;
    struct thing *location;
    const char *description;
} THING;

extern THING objs[];

// Locations
#define cubicle     (objs + 0)
#define breakroom   (objs + 1)
#define bossoffice  (objs + 2)
#define josecube    (objs + 3)
// Beings
#define player      (objs + 4)
#define boss        (objs + 5)
#define jose        (objs + 6)
// Items
#define token       (objs + 7)
#define usb         (objs + 8)
#define phone       (objs + 9)

#define endOfObjs   (objs + 10)
