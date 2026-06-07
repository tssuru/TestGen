try:
    
    a,b,c=9,6,7
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(2,4,b=1)
    print(a,b,c)
    
except: print('error')
