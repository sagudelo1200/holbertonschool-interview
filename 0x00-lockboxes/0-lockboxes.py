#!/usr/bin/python3
'''
'''
from time import sleep


def canUnlockAll(boxes):
    ''''''
    for key in range(1, len(boxes[1::])):
        res = False
        
        for idx in range(len(boxes)):
            res = (key in boxes[idx] and key != idx)
            if res:
                break
        if not res:
            return res
    return True
