try:
    a,b,c=8,0,4
    def h(b):
        a=3
        b+=5
        c=1
        return a+b+c
    
    a,b,c=9,6,1
    print(h(b),a,b,c)
    
except: print('error')
