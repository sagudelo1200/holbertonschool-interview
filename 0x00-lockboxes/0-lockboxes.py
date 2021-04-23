#!/usr/bin/python3
'''You have n number of locked boxes in front of you. Each box is numbered
sequentially from 0 to n - 1 and each box may contain keys to the other
boxes.
'''
from time import sleep


def canUnlockAll(boxes):
    '''method that determines if all the boxes can be opened.
    '''
    for key in range(1, len(boxes[1::])):
        res = False
        
        for idx in range(len(boxes)):
            res = (key in boxes[idx] and key != idx)
            if res:
                break
        if not res:
            return res
    return True
