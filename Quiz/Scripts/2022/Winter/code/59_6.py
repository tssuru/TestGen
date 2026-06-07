try:
    a,b,c=0,3,5
    def h(b):
        global c
        a=3
        b+=2
        c=5
        return a+b+c
    
    a,b,c=2,9,4
    print(h(b),a,b,c)
    
except: print('error')
