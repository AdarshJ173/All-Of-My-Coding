""" BREAK AND continue"""

# THE BREAK STATEMENT ENABLES A PROGRAM TO SKIP OVER A PART OF THE CODE. A BREAK STATEMENT TERMINATES THE VERY LOOP IT LIES WITHIN.

for i in range(13):
    print("5 x ", i, "=", 5*i)
    # or print("5 x ", i+1, "=", 5*(i+1))
    if(i == 10):
        break
    # break is go out of the loop 

print('i have come out of loop')


# THE CONTINUE STATEMENT SKIPS THE REST OF THE LOOP STATEMENT AND CAUSES THE NEXT ITERATION TO OCCUR

# continue is skip the iteration

for i in range(13):
    if(i == 7):
        print("i have skipped the iteration")
        continue
    print("5 x ", i, "=", 5*i)