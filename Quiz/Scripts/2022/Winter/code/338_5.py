try:
    
    a,b,c=9,7,6
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(b=1,c=0,a=3)
    print(a,b,c)
    
except: print('error')
