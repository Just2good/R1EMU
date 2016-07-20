/**
 *
 *   ██████╗   ██╗ ███████╗ ███╗   ███╗ ██╗   ██╗
 *   ██╔══██╗ ███║ ██╔════╝ ████╗ ████║ ██║   ██║
 *   ██████╔╝ ╚██║ █████╗   ██╔████╔██║ ██║   ██║
 *   ██╔══██╗  ██║ ██╔══╝   ██║╚██╔╝██║ ██║   ██║
 *   ██║  ██║  ██║ ███████╗ ██║ ╚═╝ ██║ ╚██████╔╝
 *   ╚═╝  ╚═╝  ╚═╝ ╚══════╝ ╚═╝     ╚═╝  ╚═════╝
 *
 * @license GNU GENERAL PUBLIC LICENSE - Version 2, June 1991
 *          See LICENSE file for further information
 */

#include "skill.h"

Skill *skillNew(Actor *actor) {
    Skill *self;

    if ((self = malloc(sizeof(Skill))) == NULL) {
        return NULL;
    }

    if (!skillInit(self, actor)) {
        skillDestroy(&self);
        error("Skill failed to initialize.");
        return NULL;
    }

    return self;
}

bool skillInit(Skill *self, Actor *actor) {
    memset(self, 0, sizeof(*self));

    self->actor = *actor;

    return true;
}

void skillFree(Skill *self) {
    // TODO
}

void skillDestroy(Skill **_self) {
    Skill *self = *_self;

    if (_self && self) {
        skillFree(self);
        free(self);
        *_self = NULL;
    }
}
