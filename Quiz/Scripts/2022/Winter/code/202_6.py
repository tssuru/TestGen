try:
    a,b,c=0,8,4
    def h(b):
        global c
        a=3
        b+=5
        c=2
        return a+b+c
    
    a,b,c=3,9,7
    print(h(b),a,b,c)
    
except: print('error')
