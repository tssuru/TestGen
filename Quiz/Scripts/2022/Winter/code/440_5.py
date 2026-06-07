try:
    
    a,b,c=9,6,7
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(0,4,a=2)
    print(a,b,c)
    
except: print('error')
