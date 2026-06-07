try:
    a,b,c=6,5,7
    def h(b):
        a+=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=3,1,8
    print(h(b),a,b,c)
    
except: print('error')
