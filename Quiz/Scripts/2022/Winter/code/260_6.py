try:
    a,b,c=9,2,6
    def h(b):
        global c
        a=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=1,5,4
    print(h(b),a,b,c)
    
except: print('error')
