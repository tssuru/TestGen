try:
    
    a,b,c=8,7,6
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(b=1,c=3,5)
    print(a,b,c)
    
except: print('error')
