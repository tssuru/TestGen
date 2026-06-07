try:
    
    a,b,c=8,7,6
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(a=2,1,a=5)
    print(a,b,c)
    
except: print('error')
