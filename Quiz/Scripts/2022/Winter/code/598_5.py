try:
    
    a,b,c=8,6,7
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(3,2,a=2)
    print(a,b,c)
    
except: print('error')
