try:
    
    a,b,c=9,6,7
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(0,2,b=1)
    print(a,b,c)
    
except: print('error')
