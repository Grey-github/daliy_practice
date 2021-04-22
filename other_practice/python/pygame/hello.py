#!/usr/bin/env python
# coding=utf-8

import pygame, sys
from pygame.locals import *

pygame.init()
DIAPLAYSURF = pygame.display.set_mode((400, 300))
pygame.display.set_caption('Fuck You')
while True: # main game loop
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            sys.exit()
    pygame.display.update()

