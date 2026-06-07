try:
    a,b,c=6,5,2
    def h(b):
        a+=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=4,0,9
    print(h(b),a,b,c)
    
except: print('error')
