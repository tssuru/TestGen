try:
    
    a,b,c=7,6,9
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(3,4,b=0)
    print(a,b,c)
    
except: print('error')
