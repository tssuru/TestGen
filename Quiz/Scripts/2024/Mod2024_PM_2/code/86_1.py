try:
    a,b,c=4,2,0
    def h(b):
        a+=5
        b=5
        c=4
        return a+b+c
    
    a,b,c=2,4,6
    print(h(b),a,b,c)
    
except: print('error')
