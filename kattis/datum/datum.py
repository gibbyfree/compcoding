# https://open.kattis.com/problems/datum

import calendar
import datetime
from datetime import date

date = [int(x) for x in input().split()]
full_date = datetime.datetime(2009, date[1], date[0])

print(calendar.day_name[full_date.weekday()])
