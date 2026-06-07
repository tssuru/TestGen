try:
    
    a,b,c=9,7,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=3,c=2,4)
    print(a,b,c)
    
except: print('error')
