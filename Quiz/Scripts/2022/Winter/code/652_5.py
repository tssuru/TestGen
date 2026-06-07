try:
    
    a,b,c=9,7,9
    def f(a,b=6,c=8):
        print(a,b,c,end="")
    
    f(4,c=2,b=3)
    print(a,b,c)
    
except: print('error')
