try:
    a,b,c=1,9,6
    def h(b):
        global c
        a=1
        b+=5
        c=2
        return a+b+c
    
    a,b,c=3,5,3
    print(h(b),a,b,c)
    
except: print('error')
