# https://open.kattis.com/problems/pieceofcake2

dimensions = [int(x) for x in input().split()]

possible_vol_1 = 4 * dimensions[1] * dimensions[2]
possible_vol_2 = 4 * (dimensions[0] - dimensions[1]) * dimensions[2]
possible_vol_3 = 4 * (dimensions[0] - dimensions[2]) * dimensions [1]
possible_vol_4 = 4 * (dimensions[0] - dimensions[1]) * (dimensions[0] - dimensions[2])

print(max(possible_vol_1, possible_vol_2, possible_vol_3, possible_vol_4))
