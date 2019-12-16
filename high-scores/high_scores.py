from typing import List


def latest(scores: List[int]):
    return scores[-1]


def personal_best(scores: List[int]):
    return max(scores)


def personal_top_three(scores: List[int]):
    return sorted(scores[-3:])
