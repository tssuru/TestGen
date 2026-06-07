try:
    
    a,b,c=8,6,7
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(b=3,c=1,0)
    print(a,b,c)
    
except: print('error')
