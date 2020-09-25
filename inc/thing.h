#define LOCATION 0
#define BEING 1
#define ITEM 2

typedef struct thing {
    const char *tag;
    int type;
    struct thing *location;
    const char *description;
} THING;

extern THING thgs[];

// Locations
#define cubicle     (thgs + 0)
#define breakroom   (thgs + 1)
#define bossoffice  (thgs + 2)
#define josecube    (thgs + 3)
// Beings
#define player      (thgs + 4)
#define boss        (thgs + 5)
#define jose        (thgs + 6)
// Items
#define token       (thgs + 7)
#define usb         (thgs + 8)
#define phone       (thgs + 9)

#define endOfThgs   (thgs + 10)
