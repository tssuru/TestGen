try:
    a,b,c=0,6,8
    def h(b):
        global c
        a=4
        b+=5
        c=2
        return a+b+c
    
    a,b,c=9,1,5
    print(h(b),a,b,c)
    
except: print('error')
