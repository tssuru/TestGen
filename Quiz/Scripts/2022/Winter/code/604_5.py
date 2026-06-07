try:
    
    a,b,c=8,6,7
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(a=0,b=3,a=5)
    print(a,b,c)
    
except: print('error')
