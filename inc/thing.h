typedef struct thing {
    const char *description;
    const char *tag;
    struct thing *location;;
} THING;

extern THING objs[];

#define cubicle     (objs + 0)
#define breakroom   (objs + 1)

#define player      (objs + 2)

#define endOfObjs   (objs + 3)
