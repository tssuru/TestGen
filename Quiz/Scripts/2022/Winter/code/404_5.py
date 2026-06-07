try:
    
    a,b,c=9,7,6
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(a=1,2,a=2)
    print(a,b,c)
    
except: print('error')
