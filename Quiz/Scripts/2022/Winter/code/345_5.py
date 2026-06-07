try:
    
    a,b,c=8,6,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(3,4,b=3)
    print(a,b,c)
    
except: print('error')
