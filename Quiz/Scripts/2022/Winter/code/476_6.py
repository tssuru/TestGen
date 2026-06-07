try:
    a,b,c=0,7,5
    def h(b):
        global c
        a=3
        b+=5
        c=2
        return a+b+c
    
    a,b,c=9,6,4
    print(h(b),a,b,c)
    
except: print('error')
